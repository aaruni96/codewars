// 76.4,12.8,4.2 77.3,11.7,0.7
#include<iostream>
#include<math.h>
#include<iomanip>
#include<string.h>

using namespace std;

float ar1[3],ar2[3];

int convert(char *, float *);

int main()
{	
	char str1[15],str2[15];
	int n;
	float pq;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str1>>str2;
		convert(str1,ar1);
		convert(str2,ar2);
		for(int j=0;j<3;j++)
		{
			pq+=pow((ar2[j]-ar1[j]),2);
		}
		pq=sqrt(pq);
		cout<<setprecision(5)<<pq<<endl;	//n :p
	}
	return 0;
}

int convert(char *str, float *ar)		//convert works perfect!
{
	int len=strlen(str);
	int l=0;
	float temp=0;
	int div=0;
	int flag=0;		//flag, div, pow are perfect. *DO NOT CHANGE*
	
	for(int i=0;i<len;i++)
	{
		if(flag)
		{
			div++;
		}
		
		if(str[i]!=','&&str[i]!='.')
		{
			temp+=float(int(str[i])-'0');
			temp*=10;
			//cout<<temp<<'\t';
		}
		
		if(str[i]=='.')
		{
			flag=1;
		}
		
		if(str[i]==','||str[i+1]=='\0')
		{
			temp/=pow(10,div);
			ar[l]=temp;
			if(i==len-1)
			{
				ar[l]/=10;
			}
			temp=0;
			flag=0;
			div=0;
			l++;
		}
	}
	return 0;
}
