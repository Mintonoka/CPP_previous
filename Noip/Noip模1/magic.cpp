#include<iostream>
using namespace std;
int main()
{
	freopen("magic.in","r",stdin);freopen("magic.out","w",stdout);
	int n,a=1,s=0;
	cin>>n;
	for(int i=1;i<=n+1;i++)
	{
		s+=a;
		a*=3;
	}
	cout<<s%1000000007;
	fclose(stdin);fclose(stdout);
	return 0;
}
