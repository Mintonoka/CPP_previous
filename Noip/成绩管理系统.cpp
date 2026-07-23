#include<iostream>
#include<string>
#include<windows.h> 
#include<cstdio>
using namespace std;
int i;
struct student
{
	int I;
	string n;
	int c;
	int m;
	int e;
	float s;
	double t;
}a[10000];
struct Node
{
	int data;
	Node *next;
}*head,*p,*r;
void in()
{
	for(int i=0;;i++)
	{
		cin>>a[i].I;
		if(a[i].I==-1) break;
		cin>>a[i].n;
		cin>>a[i].c;
		cin>>a[i].m;
		cin>>a[i].e;
		a[i].s=a[i].c+a[i].m+a[i].e;
		a[i].t=a[i].s/3.;
	}
}
void get(Node *h,int i)
{
	Node *p1;int j;
	p1=h->next;
	j=1;
	while(j<i)
	{
		p1=p1->next;
		j++;
	}
	cout<<a[p1->data-1].I<<" "<<a[p1->data-1].n<<" "<<a[p1->data-1].c<<" "<<a[p1->data-1].m<<" "<<a[p1->data-1].e<<" "<<a[p1->data-1].s<<" ";
	printf("%.2lf",a[p1->data-1].t);
}
//void insert()
void Delete(Node *h)
{
	Node *p1,*s,*r1;
	int i,j,k=0;
	cin>>i;
	p1=h;
	j=1;
	while(j<i)
	{
		p1=p1->next;
		p1->data=a[j].I;
		j++;
	}
	s=h->next;
	r1=h;
	while(a[k].I!=-1)
	{
		s=new Node;
		s->data=a[k].I;
		s->next=NULL;
		r1->next=s;
		r1=s;
		if(s->data==p1->data)continue;
		cout<<a[s->data-1].I<<" "<<a[s->data-1].n<<" "<<a[s->data-1].c<<" "<<a[s->data-1].m<<" "<<a[s->data-1].e<<" "<<a[s->data-1].s<<" ";
	    printf("%.2lf",a[s->data-1].t);
		k++;
	}
}
int main()
{
	int x,I1; 
	cout<<"按1键录入学生信息"<<endl;
	cout<<"按2键查询学生信息"<<endl;
	cout<<"按3键添加学生信息"<<endl;
	cout<<"按4键删除学生信息"<<endl;
	cin>>x;
	if(x==1)
	in();
	i=0;
	head=new Node;
	r=head;
	while(a[i].I!=-1)
	{
		p=new Node;
		p->data=a[i].I;
		p->next=NULL;
		r->next=p;
		r=p;
		i++;
	}
	p=head->next;
	cin>>x;
	if(x==2)
	{
		system("cls");
		cin>>I1;
		get(head,I1);
		cout<<"按2键查询学生信息"<<endl;
	    cout<<"按3键添加学生信息"<<endl;
	    cout<<"按4键删除学生信息"<<endl;
	    cin>>x;
	}
	if(x==3)
	{
		system("cls");
		cout<<"按2键查询学生信息"<<endl;
	    cout<<"按3键添加学生信息"<<endl;
	    cout<<"按4键删除学生信息"<<endl;
	    cin>>x;
	}
	if(x==4)
	{
		system("cls");
		Delete(head);
		cout<<"按2键查询学生信息"<<endl;
	    cout<<"按3键添加学生信息"<<endl;
	    cout<<"按4键删除学生信息"<<endl;
	    cin>>x;
	}
	return 0;
}
