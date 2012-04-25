#include <iostream>
#include <sstream>
using namespace std;

string Test(int i)
{
	stringstream  TestString; 
	TestString <<  "The Number Passed Was " << i;
	return TestString.str();
}

int main()
{
	int i;	

	cout << "Hello World!" << endl;
	cout << "Welcome to C++ Programming" << endl;
	cout << "Testing out vi as an editor" << endl;
	cout << "Please enter a number: ";
	cin >> i;

	string TestString; 
	TestString = Test(i);
	
	cout << TestString << endl;
	return 0;
}

