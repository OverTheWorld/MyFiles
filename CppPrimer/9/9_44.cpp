#include<iostream>
#include<string>
#include<stdexcept>

using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;
using std::out_of_range;

void strReplace(string &s,const string &oldVal,const string &newVal)
{
	unsigned ui = 0;
	while(ui != s.size())
	{
		if(s.at(ui) == oldVal.at(0))
		{
			unsigned i = 1;
			while(i != oldVal.size())
			{
				if(s.at(ui+i) == oldVal.at(i))
				{
					++i;
				}
				else
				{
					break;
				}
			}
			if(i == oldVal.size())
			{
				s.replace(ui,oldVal.size(),newVal);
				ui += oldVal.size();
			}
			else
			{
				++ui;
			}
		}
		else
		{
			++ui;
		}
	}
}

int main()
{
	string s("My tho and thruall in this");
	try{
		strReplace(s,"tho","though");
	}
	catch(out_of_range err){
		cerr<<err.what()<<endl;
		cerr<<L"执行失败！"<<endl;
	}
	
	cout<<s<<endl;
	
	try{
		strReplace(s,"thru","through");
	}
	catch(out_of_range err){
		cerr<<err.what()<<endl;
		cerr<<L"执行失败！"<<endl;
	}
	
	cout<<s<<endl;
	
	return 0;
}