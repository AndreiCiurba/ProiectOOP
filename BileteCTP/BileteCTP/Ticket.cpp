#include "Ticket.h"

Ticket::Ticket()
{
	this->price = 0;
	this->area = "";
	this->code = 0;
	this->station1 = "";
	this->station2 = "";

}

Ticket::Ticket(float price, string area, long int code, string station1, string station2) {
	this->price = price;
	this->area = area;
	this->code = code;
	this->station1 = station1;
	this->station2 = station2;
}

Ticket::Ticket(const Ticket& other) {
	this->price = other.price;
	this->area = other.area;
	this->code = other.code;
	this->station1 = other.station1;
	this->station2 = other.station2;
}
bool Ticket::operator==(const Ticket& other) {
	if (this->price != other.price)
		return false;
	if (this->area != other.area)
		return false;
	if (this->code != other.code)
		return false;
	if (this->station1 != other.station1)
		return false;
	if (this->station2 != other.station2)
		return false;
	return true;
}
float Ticket::getPrice() {
	return this->price;
}

string Ticket::getArea() {
	return this->area;
}
long int Ticket::getCode() {
	return this->code;
}
string Ticket::getStation1() {
	return this->station1;
}
string Ticket::getStation2() {
	return this->station2;
}
void Ticket::setPrice(float newPrice) {
	this->price = newPrice;
}
void Ticket::setArea(string newArea) {
	this->area = newArea;
}
void Ticket::setCode(long int newCode) {
	this->code = code;
}
void Ticket::setStation1(string station1) {
	this->station1 = station1;
}
void Ticket::setStation2(string station2) {
	this->station2 = station2;
}
Ticket::~Ticket()
{
}