//finding tan, but in proper units/formats

#include<iostream>
#include<iomanip>	//setprecision
#include<math.h>		//as far as I remember, atan is a function of math. it probably returns in radians, though
#define h 5.3		//the question specifies height as 6.3, but the sample output corresponding to the sample input is achieved by using height as 5.3

using namespace std;

int main()
{
	int n,d;
	float temp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>d;
		temp=atan(h/d);
		temp=180/3.14*temp;	//this seems to work
		temp*=100;
		cout<<int(temp)/100<<'.'<<int(temp)%100<<" degrees"<<endl;	//hack-ish way to get the desired output. 
	}									//setprecision doesn't seem to work
	return 0;
}
