//============================================================================
// Name        : ass10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<list>
using namespace std;
class link
{
	list<int>l;
public:
	void get()
	{
		int a;
		cin>>a;
		l.push_front(a);
	}
	void pop()
	{
		int ele=l.front();
		l.pop_front();
	}
	void size()
	{
		cout<<"size of stack is:"<<l.size()<<endl;
	}
	void display()
	{
		cout<<"stack is:"<<endl;
		list<int>::iterator i;
		if(l.size()==0)
		{
			cout<<"EMPTY"<<endl;
		}
		else
		{
			for(i=l.begin();i!=l.end();i++)
			{
				cout<<"   "<<*i;
			}
			cout<<endl;
		}
	}
	void top()
	{
		int m=l.front();
		cout<<"top is:"<<m<<endl;
	}
};
int main()
{
	int ch;
	link s;
	do
	{
		cout<<"1.push operation"<<endl;
		cout<<"2.pop operation"<<endl;
		cout<<"3.size of stack"<<endl;
		cout<<"4.top of stack"<<endl;
		cout<<"5.display stack"<<endl;
		cout<<"enter your choice";
		cin>>ch;
		switch(ch)
		{
		case 1:
		{
			cout<<"enter element"<<endl;
			s.get();
			break;
		}
		case 2:
		{
			s.pop();
			cout<<"element get removed"<<endl;
			break;
		}
		case 3:
			s.size();
			break;
		case 4:
			s.top();
			break;
		case 5:
			s.display();
			break;
		}
	}while(ch<6);
	return 0;
}
