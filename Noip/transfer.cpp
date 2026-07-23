#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<queue>
using namespace std;
struct m
{
	int l;
	int k;
	int p;
	long long t;
}a[100005];
int main()
{
	freopen("transfer.in","r",stdin);
	freopen("transfer.out","w",stdout);
	int n,s=0;
	queue<int> b;
	queue<int> c;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%lld",&a[i].k,&a[i].p,&a[i].t);
		a[i].l=i;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i].k==0)
		{
			b.push(a[i].t);
			c.push(a[i].l);
			s+=a[i].p;
		}
		if(a[i].k==1)
		{
			for(int j=0;j<b.size();j++)
			{
				if(a[i].t-b.front()<=45&&a[c.front()].p>=a[i].p)
				{
					b.pop();
					c.pop();
					s-=a[i].p;
					break;
				}
				else
				{
					for(int x=0;x<b.size()-1;x++)
					{
						b.push(b.front());
						b.pop();
						c.push(c.front());
						c.pop();
						if(a[i].t-b.front()<=45&&a[c.front()].p>=a[i].p)
				        {
					        b.pop();
					        c.pop();
					        s-=a[i].p;
					        break;
				        }
					}
					continue;
				}
			}
			s+=a[i].p;
		}
	}
	printf("%d",s);
	fclose(stdin);fclose(stdout);
	return 0;
}
