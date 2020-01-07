//============================================================================
// Name        : ass12.cpp
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
	void insert1()
	{
		int val1;
		cin>>val1;
		l.push_back(val1);

	}
	void insert2()
	{
		int val2;
		cin>>val2;
		l.push_front(val2);
	}
	void delete1()
	{
		l.pop_back();
	}
	void delete2()
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
		cout<<"DEQUE IS:"<<endl;
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
		int ch,item,item1;
		queue s;
		do
		{
			cout<<"1.push operation at end"<<endl;
			cout<<"2.push operation at begining"<<endl;
			cout<<"3.pop operation at end"<<endl;
			cout<<"4.pop operation at begining"<<endl;
			cout<<"5.size of queue"<<endl;
			cout<<"6.top of deque"<<endl;
			cout<<"7.display deque"<<endl;
			cout<<"enter your choice";
			cin>>ch;
			switch(ch)
			{
			case 1:
			{
				item=s.front();
				cout<<"enter element"<<endl;
				s.insert1();
				break;
			}
			case 2:
			{
				cout<<"enter element"<<endl;
				s.insert2();
				break;
			}
			case 3:
			{
				item1=s.back();
				s.delete1();
				cout<<"end element get removed"<<item1<<endl;
				break;
			}
			case 4:
			{
				item=s.front();
				s.delete2();
				cout<<"front element get removed"<<item<<endl;
				break;
			}
			case 5:
			{
				cout<<"size of queue:";
				cout<<s.size()<<endl;
				break;
			}
			case 6:

			{
				cout<<"top element of queue is:"<<endl;
				cout<<"dequeue front "<<s.front()<<endl;
				cout<<"dequeue back "<<s.back()<<endl;
				break;
			}
			case 7:
				s.display();
				break;
			}
		}while(ch<8);
		return 0;
}
