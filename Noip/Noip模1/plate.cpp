#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[500][500],m,p,n,t,s=0;
	cin>>n>>m>>p;
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	    cin>>a[i][j];
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	  {
	  	for(int k=j;k<m-1;k++)
	  	  if(a[i][k]>a[i][k+1])
	  	  {
	  	  	t=a[i][k];
	  	  	a[i][k]=a[i][k+1];
	  	  	a[i][k+1]=t;
			}
	  }
	for(int i=0;i<n;i++)
	{
		
		for(int j=1;j<m;j++)
	    {
	      for(int k=i+1;k<n;k++)
	  	  {
			int d=abs(a[k][0]-a[i][0]);
	  		if(abs(a[k][j]-a[i][j])!=d)
	  		  s--;
	  	    s++;
		  }
	    }
	}
	cout<<s;
	return 0;
}
