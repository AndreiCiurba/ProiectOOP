#include "Bus.h"
using namespace std;

Bus::Bus()
{
	this->nr = 0;
	this->minute = 0;
	this->hour = 0;
	this->stationList = {};
}

Bus::Bus(int nr, int hour, int minute, vector<string> sl) {
	this->nr = nr;
	this->minute = minute;
	this->hour = hour;
	this->stationList = sl;

}

int Bus::getNr() {
	return this->nr;
}

int Bus::getHour() {
	return this->hour;
}

int Bus::getMinute()
{
	return this->minute;
}

vector<string> Bus::getStationList()
{
	return this->stationList;;
}


ostream& operator<<(ostream& os, const Bus& b) {
	os << "Bus number: " << b.nr << "\n";
	os << "Hour: " << b.hour << "\n";
	os << "Minute: " << b.minute << "\n\n";
	return os;
}

istream& operator>>(istream& in, Bus& b) {
	in >> b.nr;
	in >> b.hour;
	in >> b.minute;


	return in;
}