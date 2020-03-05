//a program with an area function
#include<iostream>
using namespace std;
void area();
void hello();
void bye();
void line();
void stars();
void area()
{
	int l;
	int w;
	int a;
	cout<<"enter two numbers ";
	cin>>l>>w;
	a=(l*w);
	cout<<a;
};
void hello()
{
	cout<<"hello"<<endl;
};
void bye()
{
	cout<<"Goodbye"<<endl;
};
void stars()
{
	cout<<"****************"<<endl;
};
void line()
{
	cout<<"___________________"<<endl;
};
int main()
{
	line();
	hello();
	stars();
	line();
	area();
	line();	
	bye();
	stars();
	return 0;
}


