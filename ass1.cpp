//============================================================================
// Name        : ass1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class calc
		{
	int a,b,r;
		public:
	void insert();
	void add();
	void sub();
	void multiplication();
	void division();
		};
void calc::insert()
{
	cout<<"enter two numbers";
	cin>>a>>b;
}
void calc::add()
{
	r=a+b;
	cout<<"addition of the numbers is";
	cout<<r;

}
void calc::sub()
{
	r=a-b;
	cout<<"subtraction of the numbers is"<<r;
}
void calc::multiplication()
{
	r=a*b;
	cout<<"product of the numbers is"<<r;
}
void calc::division()
{
	r=a/b;
	cout<<"division of the numbers is"<<r;
}
int main()
{
	char ch;
	calc o;
	o.insert();
	do{

		cout<<"+ for addition "<<endl;
		cout<<"- for subtraction"<<endl;
		cout<<"* for multiplication"<<endl;
		cout<<"/ for division"<<endl;
		cout<<"enter t/T TO EXIT"<<endl;

	cout<<"enter your choice";
	cin>>ch;


	switch(ch)
	{
	case '+':o.add();
	break;
	case '-':o.sub();
	break;
	case '*':o.multiplication();
	break;
	case '/':o.division();
	break;

	}
	}
	while(ch!='t'&&ch!='T');

	return 0;
}
