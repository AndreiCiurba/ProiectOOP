#include "Controller.h"



void Controller::readUser(string link)
{
	ru.readEntity(link);
}

void Controller::readStation(string link)
{
	rs.readEntity(link);
}

void Controller::readTicket(string link)
{
	//rt.readEntity(link);
}

void Controller::readBus(string link)
{
	//rb.readEntity(link);
}

bool Controller::login()
{
	return false;
}

Controller::Controller()
{
}


Controller::~Controller()
{
}
