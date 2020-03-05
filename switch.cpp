// a program the lets a user to switch 
#include<iostream>
using namespace std;
int main()
{
	int c;
	cout<<"press 1 for adding or 2 for area ";
	cin>>c;
	switch (c)
	{
		case 1: int a,b,sum;
				cout<<"enter the first number";
				cin>>a;
				cout<<"enter the second number";
				cin>>b;
				sum=a+b;
				cout<<"the sum is "<<sum;
				break;
		case 2: float l,w,area;
				cout<<"enter the length ";
				cin>>l;
				cout<<"enter the widith ";
				cin>>w;
				area=l*w;
				cout<<"the area is "<<area;
				break;
		default: cout<<"wrong choise";
	}
	return 0;
}
