//OOReadWrite.cpp
#include <iostream>
#include <string>
using namespace std;

class student
{
private:
	int RollNumber;
	string Name;
	string Address;
public:	
	
	friend ostream & operator << (ostream & , student & );
	friend istream & operator >> (istream & , student & );
	
}; 
ostream & operator << (ostream & TempOut, student & TempStudent)
	{
		TempOut << "Roll Number is " << TempStudent.RollNumber << "\n";
		TempOut << "Name is " << TempStudent.Name << "\n";
		TempOut << "Address is " << TempStudent.Address << "\n";
		return  TempOut;
	}
istream & operator >> (istream & TempIn, student & TempStudent)
	{
		cout << " Please Enter Roll Number  " ;
		TempIn >> TempStudent.RollNumber;
		cout << "\n";
		cout << "Please Enter The Name " ; 
		cin >> TempStudent.Name;
		cout << "\n";
		cout << "Please Enter The Address  " ;
		cin >> TempStudent.Address;
		cout << "\n";
		return TempIn;
	}
void main()
{
	student CaptainStudent;
	
	cin >> CaptainStudent;
	
	cout << "Following is CaptainStudent's data \n" 
		<< CaptainStudent << "\n Bye! \n";
}



