//implementation
#include "Greetings.h"
#include <iostream>
#include <string>
using namespace std;

Greetings::Greetings(string n, int y) {
	this -> Name = n;
	this -> YOB = y;
	// this-> signifies class variable
}
string Greetings::MakeGreeting() {
	string g = "Hello " + this->Name + ", you are " + to_string(2026 - YOB) + " years old.\n"; //concatination 
	return g;
}
void Greetings::PrintGreeting() {
	cout << this->MakeGreeting();
}


