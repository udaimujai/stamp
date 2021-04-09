#ifndef PEOPLE_H
#define PEOPLE_H
#include "Birthday.hpp"
#include <iostream>
using namespace std;

class People
{
private:
	string x;
	Birthday dateOfBirth;

public:
	People(string name, Birthday birthdayof);
	void printinfo();
};
#endif