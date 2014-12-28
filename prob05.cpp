//Run-Length Encoding.

#include<iostream>
#include<string.h>	//for strlen()

using namespace std;

int convert(char *,int);

int main()
{
	char in[251];
	int n;
	cin>>n;
	cin.getline(in,250);		//to flush after cin
	for(int i=0;i<n;i++)
	{
		cin.getline(in,250);
		convert(in,strlen(in));
	}
	return 0;
}

int convert (char *str,int l)
{
	int i=0,count=1;
	do
	{
		if(str[i]==str[i+1])
		{
			count++;
		}
		
		else if(str[i]!=str[i+1])
		{
			if(count==1)
			{
				cout<<str[i];
			}
			else
			{
				cout<<str[i]<<count;
			}
			count=1;
		}
		i++;
	}while(str[i]!='\0');	
	cout<<endl;
	return 0;
}
