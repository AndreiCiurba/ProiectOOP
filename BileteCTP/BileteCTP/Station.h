#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "Bus.h"
using namespace std;
class Station
{
private:
	string name;
	string area;
	

public:
	Station();
	Station(string n, string a);
	string getName();
	string getArea();
	friend ifstream & operator>>(ifstream & in, Station &obj);
	~Station();
};