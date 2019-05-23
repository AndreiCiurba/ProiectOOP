#pragma once
#include "Controller.h"
class UI
{
	Controller c;

public:
	void readFile();
	void run();
	void showMenu()
	{
		cout << "options"<<endl;
	}
	void showLoggedMenu()
	{
		showMenu();
		cout << "choose options" << endl;
	}
	UI();
	~UI();
};

