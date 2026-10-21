//header
#pragma once
#include <string>
using namespace std;

class Greetings{
private:
	string Name;
	int YOB;
	string MakeGreeting(); //concatidation
	

public: 
	Greetings(string, int);
	void PrintGreeting();
};

