//============================================================================
// Name        : ass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class A
{
	int age;
	float income;
	string city;
	char w,y;
public:
	void get()
	{
		cout<<"enter your age"<<endl;
		cin>>age;
		cout<<"enter your income"<<endl;
		cin>>income;
		cout<<"enter your city"<<endl;
		cin>>city;
		cout<<"do you have 4 wheeler?, if yes type y"<<endl;
		cin>>w;
	}
	void show()
	{   if (age<18||age>55)
		throw age;
	    if(income<50000||income>100000)
	    	throw income;
	    if(city!="pune"&&city!="mumbai"&&city!="banglore"&&city!="chennai")
	    	throw city;
	    if(w!='y')
	    	throw w;
		cout<<"age is:"<<age<<endl<<"income is:"<<income<<endl<<"city is:"<<city<<endl<<"4 wheeler is"<<w<<endl;


	}
};
int main()
{
	A x;
	x.get();
	try
	{
		x.show();
	}
	catch(int a)
	{
		cout<<"\n exception is:age not in limit..."<<a;
	}
	catch(float b)
	{
		cout<<"\n  exception is:income not in limit..."<<b;
	}
	catch(string c)
	{
		cout<<"\n  exception is:city not in limit..."<<c;
	}
	catch(char d)
	{
		cout<<"\n  exception is:4 wheeler not in limit..."<<d;
	}
	cout<<"bye";

	return 0;
}





