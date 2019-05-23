#pragma once
#include <string>
#include <fstream>
using namespace std;
class Ticket
{
private:
	float price;
	string area;
	long int code;
	string station1;
	string station2;
public:
	Ticket();
	Ticket(float price, string area, long int code, string station1, string station2);
	Ticket(const Ticket& other);
	float getPrice();
	string getArea();
	long int getCode();
	string getStation1();
	string getStation2();
	void setPrice(float newPrice);
	void setArea(string newArea);
	void setCode(long int newCode);
	void setStation1(string station1);
	void setStation2(string station2);
	bool operator==(const Ticket& other);
	friend istream& operator>>(istream& in, Ticket& A) {
		in >> A.price >> A.area >> A.code >> A.station1 >> A.station2;
		return in;
	}

	friend ostream& operator<<(ostream& output, const  Ticket& A) {
		output << A.price << A.area << A.code << A.station1 << A.station2 << '\n';
		return output;
	}
	~Ticket();
};