#include<iostream>
using namespace std;
int main()
{
	char s[100];
	int i;
	cout<<"enter the string:\n";
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			s[i]=' ';
		}
	}
	cout<<"delete the vowels ="<<s<<"\n";
	return 0;
}