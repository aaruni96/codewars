//just have to find nCr in this one.
//long long int can only store till 20!

#include<iostream>

using namespace std;

float fact(int);	//ncr will depend on this

float ncr(int, int);

int main()
{
	int m, n, r;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>n>>r;
		if(r>n)
		{
			cout<<0<<endl;
			continue;
		}
		else
		{
			cout<<ncr(n,r)<<endl;
		}
	}
	return 0;
}

float fact(int n)
{
	float ret=1;
	for(int i=2;i<=n;i++)
	{
		ret*=i;
	}
	return ret;
}

float ncr(int n, int r)
{
	float res;
	res=fact(n)/fact(r)/fact((n-r));
	return res;
}
