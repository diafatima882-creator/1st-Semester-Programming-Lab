#include<iostream>
using namespace std;
int main()
{
	// 5 different data types
	int age;
	char grade;
	float marks;
	double salary;
	bool pass;
	
	// Taking input from user
	cout << "Enter Age: ";
	cin >> age;
	cout << "Enter Grade: ";
	cin >> grade;
	cout << "Enter Marks: ";
	cin >> marks;
	cout << "Enter Salary: ";
	cin >> salary;
	cout <<"Enter Pass (1/0): ";
	cin >> pass;
	
	// Showing outputs
	cout << "\nResult:" << endl;
	cout << "Age = " << age << endl;
	cout << "Grade = " << grade << endl;
	cout << "Marks = " << marks << endl;
	cout << "Salary = "	<< salary << endl;
	cout << "Pass = " <<pass << endl;
	return 0;
}
