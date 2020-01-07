//============================================================================
// Name        : ass4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class personal
{
	string n;
	int phone;
	string add;
public:
	void get()
	{
		cout<<"enter name"<<endl;
		cin>>n;
		cout<<"enter phone no"<<endl;
		cin>>phone;
		cout<<"enter address"<<endl;
		cin>>add;

	}
	void display()
	{
		cout<<"personal details are:"<<endl;
		cout<<n<<endl<<phone<<endl<<add<<endl;
	}
};
class academic
{
	float p;
public:
	void get()
	{
	cout<<"enter percentage"<<endl;
	cin>>p;
	}
	void display()
	{
		cout<<"academic details are"<<endl;
		cout<<p;
	}
};
class proffessional
{
	int s;
	string compname;
public:
	void get()
	{
		cout<<"enter salary"<<endl;
		cin>>s;
		cout<<"enter company name"<<endl;
		cin>>compname;
	}
	void display()
	{
		cout<<"prof details are"<<endl;
		cout<<s<<compname;
	}

};
class biodata:public personal,public academic,public proffessional
{
public:
	void get()
	{
		personal::get();
		academic::get();
		proffessional::get();
	}
	void display()
	{
		personal::display();
		academic::display();
		proffessional::display();
	}
};


int main() {
biodata t;
t.get();
t.display();
	return 0;
}
