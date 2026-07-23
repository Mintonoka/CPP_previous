#include<iostream>
#include<cstdio> 
using namespace std;
long long m;
const int M=1000000007;
int bow(int a,int b)
{
	int s=1;
	int base=a;
	if(b==0)
	  return 1;
	base%=M;
	while(b)
	{
		if(b&1==1)s=s*base%M;
		base=base*base%M;
		base%=M;
		b=b>>1;
	}
	return s;
}
int main()
{
	freopen("magic.in","r",stdin);freopen("magic.out","w",stdout);
	int sum=0,n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		sum+=bow(3,i);
	}
	cout<<sum;
	fclose(stdin);fclose(stdout);
	return 0;
}
