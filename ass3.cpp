//============================================================================
// Name        : ass3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;


	class complex
	{
		int real,a=5;float img,b=5;
	public:
		complex()
	{
			real=0;
			img=0;
	}
		void getdata()
		{
			cout<<"enter real and imaginary part"<<endl;
			cin>>real>>img;
		}
		complex operator+(complex c2)
		{
		complex c3;
		c3.real=real+c2.real;
		c3.img=img+c2.img;
		cout<<"\naddition of real parts of the 2 complex nos is\n"<<c3.real<<endl;
		cout<<"\naddition of the imaginary parts of the 2 complex nos is\n"<<c3.img<<endl;
		return c3;
		}
		complex operator-(complex c2)
				{
				complex c4;
				c4.real=real-c2.real;
				c4.img=img-c2.img;
				cout<<"\n subtraction of real parts of the 2 complex nos is\n"<<c4.real<<endl;
				cout<<"\nsub of the imaginary parts of the 2 complex nos is\n"<<c4.img<<endl;
				return c4;
				}
		complex operator*(complex c2)
		{
			complex c5;
			c5.real=real*c2.real;
			c5.img=img*c2.img;
			cout<<"\nproduct of the real parts is\n"<<c5.real<<endl;
			cout<<"\nproduct of the 2 imaginary parts is\n"<<c5.img<<endl;
            return c5;
		}
		complex operator/(complex c2)
				{
				complex c6;
				c6.real=real/c2.real;
				c6.img=img/c2.img;
				cout<<"\ndiv of real parts of the 2 complex nos is\n"<<c6.real<<endl;
				cout<<"\ndiv of the imaginary parts of the 2 complex nos is\n"<<c6.img<<endl;
				return c6;
				}

			friend istream &operator >>(istream &cin, complex &c2)
			{   cout<<"enter real and imaginary";
				cin>>c2.real;
				cin>>c2.img;
				return cin;
			}
			friend ostream &operator <<(ostream &cout,complex &c2)
		{cout<<"real and img of c2 is";
				cout<<c2.real;
				cout<<c2.img;
				return cout;
		}


	};
int main()
{int ch,m;
	complex c,c1,c2,c3,c4,c5,c6;


		c1.getdata();
	    c2.getdata();

	    cin>>c2;
	    cout<<c2;





	do
	{
	cout<<"1 for addition"<<endl;
	cout<<"2 for sub"<<endl;
	cout<<"3 for mul"<<endl;
	cout<<"4 for div"<<endl;
	 cout<<"enter 5 to end"<<endl;
		cout<<"enter choice"<<endl;
    cin>>ch;

    switch(ch)
    	{
    	case 1:(c3=c1+c2);
    			break;
    	case 2:(c4=c1-c2);
    			break;
    	case 3:(c5=c1*c2);
    			break;
    	case 4:(c6=c1/c2);
    			break;
    	case 5:goto m;


    	}
    	}
    		while(9);


    	return 0;
    }
