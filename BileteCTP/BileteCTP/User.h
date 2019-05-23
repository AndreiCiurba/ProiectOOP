#pragma once
#include <vector>
#include "Ticket.h"
using namespace std;
class User
{
private:
	string name;
	string password;
	vector<Ticket> listTickets;

public:
	User();
	User(string name, string password, vector<Ticket> listTickets);
	User(const User& other);
	User operator=(const User& other) {
		this->name = other.name;
		this->password = other.password;
		for (int i = 0; i < listTickets.size(); i++)
			this->listTickets[i] = other.listTickets[i];
		return *this;
	}

	string getName();
	string getPassword();
	Ticket getListTicket(int pos);
	bool operator==(const User& other);
	void setListTicket(vector<Ticket> list);
	friend istream& operator>>(istream& in, User& A) {
		in >> A.name >> A.password;
		return in;
	}

	friend ostream& operator<<(ostream& output, const  User& A) {
		output << A.name << " " << A.password << '\n';
		return output;
	}

	~User();
};