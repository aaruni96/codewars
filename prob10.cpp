//Almonds almonds everywhere.

#include<iostream>
#include<string.h>

using namespace std;

int js=0,jr=0,y[20],x[20],fprice;

int convert(char *);
int price();

int main()
{
	int s,r,p,n;
	cin>>s>>r>>p>>n;
	fprice=p;
	char in[202];
	cin.getline(in, 202);	//to flush after cin
	for(int i=0;i<n;i++)
	{
		cin.getline(in,202);
		convert(in);
		cout<<price()<<endl;
		//price();
	}
	return 0;
}

int convert(char *in)
{
	int i;
	int l=strlen(in);
	for(i=0;i<l;i++)
	{
		if(in[i]!=','&&in[i]!=';')
		{
			x[js]+=in[i]-'0';
			x[js]*=10;
		}
		else if(in[i]==','||in[i]==';')
		{
			x[js++]/=10;
		}
		if(in[i]==';')
		{
			break;
		}
	}
	for(i=i;i<l;i++)
	{
		if(in[i]==';')
		{
			continue;
		}
		else if(in[i]!=',')
		{
			y[jr]+=in[i]-'0';
			y[jr]*=10;
		}
		if(in[i]==',' || in[i+1]=='\0')
		{
			y[jr++]/=10;
			if(in[i+1]=='\0')
			{
				break;
			}
		}
	}
	return 0;
}

int price()
{
	int stemp=0,jtemp=0;
	int fp;
	
	for(int i=0;i<js;i++)
	{
		stemp+=x[i];
	}
	for(int i=0;i<jr;i++)
	{
		jtemp+=y[i];
	}
	if(stemp>jtemp)
	{
		fprice-=3*(stemp-jtemp);
	}
	else
	{
		fprice+=4*(jtemp-stemp);
	}
	fp=fprice;
	return fp;
}
