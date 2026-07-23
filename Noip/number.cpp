#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int s=0;
	string a;
	getline(cin,a);
	for(int i=0;i<8;i++)
	{
		if(a[i]=='1') s++;
	}
	cout<<s;
	fclose(stdin);fclose(stdout);
	return 0;
}
