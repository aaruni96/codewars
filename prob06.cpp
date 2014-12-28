//aha! another comma input problem.

#include<iostream>
#include<string.h>	//for strlen()

using namespace std;

int nar[50];

int convert(char *);
int sort(int);
int print(int);

int main()
{
	char ar[3001];
	int n,size;
	cin>>n;
	cin.getline(ar,3001);	//to flush after cin
	for(int i=0;i<n;i++)
	{
		cin.getline(ar,3001);
		size=convert(ar);	//will convert comma waali string into an array of numbers.
		sort(size);
		print(size);
	}
	return 0;
}

int convert (char *ar)
{
	int l=strlen(ar),j=0;
	int temp, tnum=0;
	for(int i=0;i<l;i++)
	{
		if(ar[i]!=',')
		{
			temp=ar[i];
			temp=temp-'0';
			tnum*=10;
			tnum+=temp;
		}
		if(ar[i]==',' || ar[i+1]=='\0')
		{
			nar[j]=tnum;
			j++;
			tnum=0;
		}
	}
	return j;
}

int sort(int l)
{
	int newar[50];
			//the min number in input is -1000.
	int min;
	for(int i=0;i<l;i++)
	{
		min=1001;	//greater than the greatest
		for(int j=0;j<l;j++)
		{
			if(min>nar[j] && nar[j]!=-1001)
			{
				min=nar[j];
			}
		}
		newar[i]=min;
		for(int j=0;j<l;j++)
		{
			if(min==nar[j])
			{
				nar[j]=-1001;		//invalid input
				break;
			}
		}
	}
	for(int i=0;i<l;i++)
	{
		nar[i]=newar[i];
	}
	return 0;
}

int print(int l)
{
	cout<<nar[l-2]<<' '<<nar[1]<<endl;
	return 0;
}
