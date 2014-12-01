//aah! the comma input! let's see how long it takes to solve this one

//started at 10:55 PM

#include<iostream>
#include<string.h>

using namespace std;

int sez;
int ar[50];

int convert(char*);

int check(int *);

int main()
{
	int n,lel=0;
	char in[151];
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		sez=1;
		if(lel==0)
		{
			cin.getline(in,151);
		}
		cin.getline(in,151);
		convert(in);
		check(ar);
		lel++;
	}
	return 0;
}

int convert(char *in)
{
	int temp=0;
	int len=strlen(in);
	int l=0;
	for(int i=0;i<len;i++)
	{
		if(in[i]!=',')
		{
			temp+=int(in[i])-'0';
			temp*=10;
		}
		else if((in[i]==',')||(in[i+1]=='\0'))
		{
			ar[l]=temp;
			temp=0;
			l++;
			sez++;
		}
	}
	ar[l]=temp;
	return 0;
}

int check(int *ar)			//this baby works just fine.
{
	int dif=ar[1]-ar[0];
	int rdif;
	
	for(int i=2;i<sez-1;i++)
	{
		rdif=ar[i+1]-ar[i];
		if(dif!=rdif)
		{
			cout<<"No\n";
			return -1;
		}
	}
	cout<<"Yes\n";
	return 0;
}
