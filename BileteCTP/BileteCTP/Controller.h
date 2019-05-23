#pragma once
#include "Repo.h"

class Controller
{
private:
	Repo <Station> rs;
	Repo <Ticket> rt;
	Repo <Bus> rb;
	Repo <User> ru;
public:
	void readUser(string link);
	void readStation(string link);
	void readTicket(string link);
	void readBus(string link);
	bool login();
	Controller();
	~Controller();
};

