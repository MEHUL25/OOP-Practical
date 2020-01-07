//============================================================================
// Name        : ass7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template <class T>
class bubblesort
{
	T v[10],temp;
	int size;
public:


	void create();
	void display();
	void bubble();

};
template <class T>
void bubblesort<T>::create()
{
	cout<<"enter size";
	cin>>size;
cout<<"enter elements"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>v[i];
	}
}
template <class T>
void bubblesort<T>::display()
{int i;
	cout<<"entered elements are"<<endl;
	cout<<"(";
		for( i=0;i<size-1;i++)
		{
		cout<<v[i]<<",";
			}
		cout<<v[i]<<")";

}
template <class T>
void bubblesort<T>::bubble()
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=size-1;i<j;j--)
		{
			if(v[j]<v[j-1])
			{
			temp=v[j];
			v[j]=v[j-1];
			v[j-1]=temp;
			}
		}
	}
}








int main()
{int ch;
	bubblesort<int> b;
	bubblesort<float>c;
	bubblesort<string> d;
	do
	{
		cout<<"enter 1 for integer"<<endl;
		cout<<"enter 2 for float"<<endl;
		cout<<"enter 3 for string"<<endl;
		cout<<"enter choice"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
		{
			cout<<"for integer"<<endl;
			b.create();
			b.display();
			b.bubble();
			cout<<"after bubble sort"<<endl;
			b.display();
			break;

		}
		case 2:
		{
			cout<<"for float"<<endl;
			            c.create();
						c.display();
						c.bubble();
						cout<<"after bubble sort"<<endl;
						c.display();
						break;

		}
		case 3:
		{
			cout<<"for string"<<endl;
			d.create();
			d.display();
			d.bubble();
			cout<<"after bubble sort"<<endl;
			d.display();
			break;

		}
		}
}
	while(ch<4);



	return 0;
}
