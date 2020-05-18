#pragma once
#include <string>
#include<vector>
using namespace std;
enum Nationality {de, en, it, es};
class Person
{
public:
	Person(string name, Nationality nationality);
	void greet(Person other);
	string getname();

private:
	string name_;
	Nationality nationality_;
	
};

