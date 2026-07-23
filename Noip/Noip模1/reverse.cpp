#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100004];
	int s=0;
	gets(a);
	strlwr(a);
	if(strlen(a)%2)
	{
		for(int i=0;i<(strlen(a)-1)/2;i++)
		{
			if(a[i]!=a[strlen(a)-i-1])
			  s++;
		}
	}
	else
	{
		for(int i=0;i<strlen(a)/2+1;i++)
		{
			if(a[i]!=a[strlen(a)-i-1])
			  s++;
		}
	}
	cout<<s;
	return 0;
}
