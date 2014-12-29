//traffic jam problem

#include<iostream>

using namespace std;

int n,e,w,s;
int pass(int,int,int,int,int,int);

int main()
{
	n=0;w=0;e=0;s=0;
	int in,nn,ne,nw,ns,t;		//time t is in minutes. rate is 36 vehicles per minute
	cin>>in;
	for(int i=0;i<in;i++)
	{
		cin>>nn>>ne>>ns>>nw>>t;
		pass(nn,ne,ns,nw,t,(i+1));
	}
	return 0;
}

int pass (int nn,int ne,int ns,int nw,int t,int r)
{
	n+=nn;e+=ne;w+=nw;s+=ns;
	if(r%4==1)
	{
		n-=36*t;
		if(n<0)
		{
			n=0;
		}
	}
	else if(r%4==2)
	{
		e-=36*t;
		if(e<0)
		{
			s=0;
		}
	}
	else if(r%4==3)
	{
		s-=36*t;
		if(s<0)
		{
			s=0;
		}
	}
	else
	{
		w-=36*t;
		if(w<0)
		{
			w=0;
		}
	}
	cout<<n<<' '<<e<<' '<<s<<' '<<w<<' '<<endl;
	return 0;
}
