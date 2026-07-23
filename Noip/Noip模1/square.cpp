#include<iostream>
#include<cmath>
using namespace std;
int n,a[10005],s;
bool p(int m)
{
	int s1=0,s2=0;
	for(int j=1;j<=n;j++)
	{
		if(j%2==1&&j!=m)
		s1+=a[j];
		if(j%2==0&&j!=m)
		s2+=a[j];
	}
	if(s1==s2) return true;
	else return false;
}
int main()
{
	freopen("square.in","r",stdin);freopen("square.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	  cin>>a[i];
	for(int i=1;i<=n;i++)
	  if(p(i)==1)s++;
	cout<<s;
	fclose(stdin);fclose(stdout);
	return 0;
}
