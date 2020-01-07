//============================================================================
// Name        : assi9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
using namespace std;
class diary
{
	char name[20];
	char phn;
public:
	void get();
	void show();
};
void diary::get()
{
	cout<<"enter name";
	cin>>name;
	cout<<"enter phone number";
	cin>>phn;
}
void diary::show()
{
	cout<<setw(10)<<"name:"<<setw(30)<<"phone no:"<<endl;
	cout<<setw(10)<<name<<setw(30)<<phn<<endl;
}
int main()
{
	int ch,found=0;
	char nm[20],phno[10];
	diary d;
	fstream file;
	do
	{
		cout<<"1.add new contact"<<endl;
		cout<<"2.display contact list"<<endl;
		cout<<"3.search name"<<endl;
		cout<<"4.search phone number"<<endl;
		cout<<"5.udate phone number"<<endl;
		cout<<"enter your choice";
		cin>>ch;
		switch(ch)
		{
		case 1:
		{
			ofstream file;
			d.get();
			file.open("/home/student/Desktop/janhavi304/address.txt",ios::binary|ios::app);
			file.write((char *)&d,sizeof(d));
			file.close();
			break;
		}
		case 2:
		{
			ifstream file;
			cout<<"*********RECORD OF PHONE BOOK*********"<<endl;
			file.open("/home/student/Desktop/janhavi304/address.txt",ios::in|ios::binary);
			while(file)
			{
				file.read((char *)&d,sizeof(d));
				if(!file.eof())
					d.show();
			}
			file.close();
			break;
		}
		case 3:
		{
			ifstream file;
			cout<<"enter name you want to search";
			cin>>nm;
			file.open("/home/student/Desktop/janhavi304/address.dat",ios::in|ios::binary|ios::ate);
			file.seekg(0,ios::beg);
			while(file)
			{
				file.read((char *)&d,sizeof(d));
				if(strcmp(nm,d.get())==0)
				{
					found=1;
				}
				if(found==1)
				{
					d.show();
				}
				else
				{
					cout<<"number not found"<<endl;
				}
			}
		}
		case 4:
		{
			cout<<"enter phone number  for search";
			cin>>phno;
			ifstream file;
			file.open("/home/student/Desktop/janhavi304/address.dat",ios::in|ios::binary|ios::ate);
			file.seekg(0,ios::beg);
			while(file)
			{
				file.read((char *)&d,sizeof(d));
				if(strcmp(phno,phn))==0)
				{
					found=1;
				}
				if(found==1)
				{
					d.show();
				}
				else
				{
					cout<<"number not found"<<endl;
				}
			}
		}
	}while(ch<6);
	file.close();
	return 0;
}
