#include<iostream>

using namespace std;

int check(int,int);

int main()
{
	int flag,n;
	int in,q;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>in>>q;
		flag=check(in,q);
		switch(flag)
		{
			case 1:
				cout<<"Ones\n";
				break;
			case 2:
				cout<<"Tens\n";
				break;
			case 3:
				cout<<"Hundreds\n";
				break;
			case 4:
				cout<<"Thousands\n";
				break;
			case 5:
				cout<<"Ten Thousands\n";
				break;
			case 6:
				cout<<"Lakhs\n";
				break;
			case 7:
				cout<<"Ten Lakhs\n";
				break;
			case 8:
				cout<<"Crore\n";
				break;
			case 9:
				cout<<"Ten Crore\n";
				break;
			case 10:
				cout<<"Billion\n";
				break;
			default:
				cout<<"Not Found\n";
				break;
		}
	}
	cout<<endl;
	return 0;
}

int check (int in,int q)
{
	int j=10,count=0;
	while(j<in*10)
	{
		count++;
		if((in%j)==q)
		{
			return count;
		}
		in/=10;
	}
	return -1;
}
