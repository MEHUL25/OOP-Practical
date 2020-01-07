//============================================================================
// Name        : ass8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
 int roll,ph;
 string name,add;
 ofstream o;
   cout<<"STUDENT DATABASE"<<endl;
 cout<<"enter name"<<endl;
 cin>>name;
 cout<<"enter roll no"<<endl;
 cin>>roll;
 cout<<"enter your phone no"<<endl;
 cin>>ph;
 cout<<"enter your address"<<endl;
 cin>>add;
      o.open("t1.txt");
 o<<"name is:\t"<<name<<endl;
 o<<"roll no is:\t"<<roll<<endl;
 o<<"contact no is:\t"<<ph<<endl;
 o<<"address is:\t"<<add;
 o.close();
 ifstream i;
      i.open("t1.txt");
  i>>name;
 i>>roll;
 i>>ph;
 i>>add;
 return 0;

}
