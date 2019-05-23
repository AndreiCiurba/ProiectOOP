#include "Station.h"

Station::Station(string n, string a)
{
	this->name = n;
	this->area = a;
}

Station::Station()
{
	this->name = "";
	this->area = "";
}

string Station::getName()
{
	return this->name;
}

string Station::getArea()
{
	return this->area;
}


Station::~Station()
{
}

ifstream & operator>>(ifstream & in, Station &obj)
{
	// TODO: insert return statement here
	in >> obj.name;
	in >> obj.area;
	return in;
}