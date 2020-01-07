//============================================================================
// Name        : ass13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<stack>
#include<cstdlib>
using namespace std;
class binary
{
	stack<int>s1,s2,s3;
	int n1,n2,i,a,c,x,y,sum;
public:
	void inserts1()
	{
		cout<<"number of binary terms in s1 stack";
		cin>>n1;
		for(i=0;i<n1;i++)
		{
			cin>>a;
			s1.push(a);
		}
	}
	void inserts2()
	{
		cout<<"number of binary terms in s2 stack";
		cin>>n2;
		for(i=0;i<n2;i++)
		{
			cin>>c;
			s2.push(c);
		}
	}
	void add()
	{
		int carry=0;
		while(!s1.empty()||!s2.empty())
		{
			if(!s1.empty())
			{
				x=s1.top();
				s1.pop();
			}
			if(!s2.empty())
			{
				y=s2.top();
				s2.pop();
			}
			sum=(x+y+carry)%2;
			carry=(x+y+carry)/2;
			s3.push(sum);
		}
		if(carry==1)
		{
			s3.push(1);
		}
	}
	void display()
	{
		while(!s3.empty())
		{
			cout<<s3.top()<<"  ";
			s3.pop();
		}
		cout<<endl;
	}
};
int main()
{
	int ch;
	binary b;
	do
	{
		cout<<"1.first binary number"<<endl;
		cout<<"2.second binary number"<<endl;
		cout<<"3.perform addition"<<endl;
		cout<<"4.display addition"<<endl;
		cout<<"enter your choice";
		cin>>ch;
		switch(ch)
		{
		case 1:
			b.inserts1();
			break;
		case 2:
			b.inserts2();
			break;
		case 3:
			b.add();
			break;
		case 4:
			b.display();
			break;
		}
	}while(ch<5);
}
