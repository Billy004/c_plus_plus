//a program the calculats the simple intrest
#include<iostream>
using namespace std;
int main()
{
	float si,t,r;
	int p;
	cout<<"enter the principal ";
	cin>>p;
	cout<<"enter the rate ";
	cin>>r;
	cout<<"enter the time ";
	cin>>t;
	si=(p*r*t)/100;
	cout<<"the simple intrest is "<<si;
	return 0;
}
