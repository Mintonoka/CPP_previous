#include<iostream>
using namespace std;
long long a[1005][1005];
bool fint(int x,int y,int k)
{
	bool flag=true;
	int s=0;
	for(int i=x;i<=x+3;i++)
	  for(int j=y;j<=y+3;j++)
	    s+=a[i][j];
	if(s!=k)
	flag=false;
	return flag;
}
int main()
{
	freopen("game.in","r",stdin);freopen("game.out","w",stdout);
	int n,k,s=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	  for(int j=1;j<=n;j++)
	    cin>>a[i][j];
	for(int i=1;i<=n-3;i++)
	  for(int j=1;j<=n-3;j++)
	{
		if(fint(i,j,k))
		  s++;
	}
	cout<<s;
	fclose(stdin);fclose(stdout);
	return 0;
}
