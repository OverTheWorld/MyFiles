#include<iostream>
#include<string>
#include<cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;

bool isIncludeBigAlpha(const string& str)
{
	for(const auto s:str)
	{
		if(isupper(s))
		{
			return true;
		}
	}
	return false;
}
void InvertToLittleAlpha(string& str)
{
	for(auto &s : str)
	{
		s = tolower(s);
	}
}
int main()
{
	string str;
	cin>>str;
	cout<<str<<endl;
	cout<<(isIncludeBigAlpha(str)?"有大写字母":"无大写字母")<<endl;
	InvertToLittleAlpha(str);
	cout<<str<<endl;
	return 0;
}