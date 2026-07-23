#include<iostream>
#include<cmath>
using namespace std;
struct s
{
	char c;
	bool b;
}a[50][50];
bool find(int x,int y)
{
	if(y!=m-1&&a[x][y].c==a[x][y+1].c)
	{
		if(a[x][y+1].b==false)return true;
		if(find(x,y+1)!=true)return false;
	}
	if(x!=n-1&&a[x][y].c==a[x+1][y].c)
	{
		if(a[x+1][y].b==false)return true;
		a[x][y].b=false;
		if(find(x+1,y)==true)
	}
	if(y!=0&&a[x][y].c==a[x][y-1].c)
	{
		if(a[x][y-1].b==false)return true;
		a[x][y].b=false;
		if(find(x,y-1)==true)
	}
	if(x!=0&&a[x][y].c==a[x-1][y].c)
	{
		if(a[x-1][y].b==false)return true;
		a[x][y].b=false;
		if(find(x-1,y)==true)
	}
	return false;
}
int n,m,s;
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	    cin>>a[i][j].c;
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	{
		for(int o=0;i<n;i++)
	  for(int p=0;j<m;j++)
	    a[o][p].b=true;
	a[i][j].b=false;
	  if(find(i,j)==true)s++
	}
	if(s>0)
	  cout<<"Yes";
	else
	  cout<<"No";
}
