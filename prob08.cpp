//number palindrome.
//find the smallest palindrome larger than the input

#include<iostream>

using namespace std;

int check(int);		//palindrome will depend on this;
int palindrome(int);

int main()
{
	int n,k;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>k;
		cout<<palindrome(k+1)<<' ';
	}
	cout<<endl;
	return 0;
}

int palindrome(int k)
{
	while(1)
	{
		if(check(k)==0)
		{
			return k;
		}
		k++;
	}
}

int check(int k)
{
	int temp=k, rev=0;
	while(temp)
	{
		rev+=temp%10;
		temp=temp/10;
		rev*=10;
	}
	rev/=10;
	if(rev==k&&k>10)		//because this algo returns all one digits as palindromes (which is technically correct)
		return 0;
	return 1;
}
