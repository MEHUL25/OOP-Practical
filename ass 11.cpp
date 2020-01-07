//============================================================================
// Name        : ass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<list>
#include<cstdlib>
using namespace std;
class queue
{
	list<int>l;
public:
	void insert()
	{
		int val;
		cin>>val;
		l.push_back(val);
	}
	void delete1()
	{
		l.pop_front();
	}
	int front()
	{
		return(l.front());
	}
	int back()
	{
		return(l.back());
	}
	int size()
	{
		return(l.size());
	}
	void display()
	{
		list<int>::iterator i;
		cout<<"QUEUE IS:"<<endl;
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
};
int main()
{
		int ch,item;
		queue s;
		do
		{
			cout<<"1.push operation"<<endl;
			cout<<"2.pop operation"<<endl;
			cout<<"3.size of queue"<<endl;
			cout<<"4.top of queue"<<endl;
			cout<<"5.display queue"<<endl;
			cout<<"enter your choice";
			cin>>ch;
			switch(ch)
			{
			case 1:
			{
				item=s.front();
				cout<<"enter element"<<endl;
				s.insert();
				break;
			}
			case 2:
			{
				item=s.front();
				s.delete1();
				cout<<"element get removed"<<item<<endl;
				break;
			}
			case 3:
			{
				cout<<"size of queue:";
				cout<<s.size()<<endl;
				break;
			}
			case 4:

			{
				cout<<"top element of queue is:";
				cout<<"queue front "<<s.front()<<endl;
				cout<<"queue back "<<s.back()<<endl;
				break;
			}
			case 5:
				s.display();
				break;
			}
		}while(ch<6);
		return 0;
}
