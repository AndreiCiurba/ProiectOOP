#include "UI.h"



void UI::readFile()
{
	c.readBus("Bus.txt");
	c.readStation("Station.txt");
	c.readUser("User.txt");
}

void UI::run()
{
	if (c.login())
	{
		showLoggedMenu();
	}
	else
		showMenu();
}

UI::UI()
{
}


UI::~UI()
{
}
