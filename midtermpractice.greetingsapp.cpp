//application
#include "Greetings.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	int y;

	cout << "Hello, welcome.\n Please enter your name here ==> ";
	getline(cin, n); //better for strings because user can use spaces between words
	cout << "Now, please enter your year of birth here ==> ";
	cin >> y;
	
	Greetings greeting1(n, y);
	greeting1.PrintGreeting();


}

