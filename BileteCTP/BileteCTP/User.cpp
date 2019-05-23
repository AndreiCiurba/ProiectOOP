#include "User.h"

User::User()
{
	this->name = " ";
	this->password = " ";
	this->listTickets = {};
}

User::User(string name, string password, vector<Ticket> listTickets) {
	this->name = name;
	this->password = password;
	this->listTickets = listTickets;
}

User::User(const User& other) {
	this->name = other.name;
	this->password = other.password;
	this->listTickets = other.listTickets;
}

string User::getName() {
	return this->name;
}

string User::getPassword() {
	return this->password;
}
Ticket User::getListTicket(int pos) {
	return this->listTickets[pos];
}
void User::setListTicket(vector<Ticket> list) {
	for (int i = 0; i < listTickets.size(); i++)
		this->listTickets[i] = list[i];
}

User::~User()
{
}