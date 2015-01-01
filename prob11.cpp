//greeky, geeky stuff.

#include<iostream>

using namespace std;

int p,ar[10];

int job(long long int);		//because 10 digits. Although, I think just long should've done it. Or even just int. My system might have a bigger int mem allocation, since 64 bit.
long long int convert(long long int);
long long int process(long long int);

int main()
{
	int n;
	long long int in;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>in;
		job(in);
		p=0;
	}
	return 0;
}

long long int convert(long long int in)
{
	int i=0;
	while(in)
	{
		ar[i]=in%10;
		in/=10;
		i++;
	}
	return i;
}

long long int process(long long int i)	//'i' is the size of the array
{
	long long int temp=1;
	for(int j=0;j<i;j++)
	{
		temp*=ar[j];
	}
	p++;
	return temp;
}

int job(long long int in)
{
	if(in<10)
	{
		cout<<in<<' '<<'0'<<endl;
		return 1;	//lol
	}
	int temp=in;
	do
	{
		temp=convert(temp);
		temp=process(temp);
	}while(temp>9);
	cout<<temp<<' '<<p<<endl;
	return 0;
}
