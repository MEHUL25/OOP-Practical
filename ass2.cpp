#include <iostream>
using namespace std;
class student
		{
	int n;
	char NAME,ROLLNO,CLAS,DIV;
	string mob,bloodgroup,name,div,clas,rollno;
		public:
	student()
	{cout<<"in constructor";
	NAME='0';
	ROLLNO='0';
	CLAS='0';
	DIV='0';
	n=0;
	}
	/*student(char X,char Y)
	{
		NAME=X;
		ROLLNO=Y;
		cout<<NAME;
		cout<<ROLLNO;

	}*/


			void get()
	{
		cout<<"enter no of students";
		cin>>n;
		cout<<"enter the following details";
		for(int i=0;i<n;i++)
		{
			cout<<"\nenter name of the student\n";
			cin>>name[i];
			cout<<"\nenter roll no";
			cin>>rollno[i];
			cout<<"\nenter class and division";
			cin>>clas[i]>>div[i];
			cout<<"\nenter mobile no:";
			cin>>mob[i];

		}
	}
			~student()
			{
				cout<<"in destructor";
				NAME='0';
				ROLLNO='0';
				CLAS='0';
				DIV='0';
				n=0;

			}
		};

int main() {
	student *o1;*o2;
	o1=new student;
	o2=new student('a','b')

	o1->get();
	delete(o1);
	return 0;
}
