#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Station.h"
using namespace std;
class Bus {
private:
	int nr;
	int minute;
	int hour;
	vector<string> stationList;
public:
	Bus();
	Bus(int nr, int hour, int minute, vector<string> sl);
	~Bus() {}
	int getNr();
	int getHour();
	int getMinute();
	vector<string> getStationList();
	friend ostream& operator<<(ostream& os, const Bus& b);
	friend istream& operator>>(istream& in, Bus& b);
};