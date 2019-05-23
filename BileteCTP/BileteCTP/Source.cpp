#include <iostream>
#include "Test.h"
using namespace std;
int main()
{
	testStation();
	testRepo();
	testTicket();
	testBus();
	testUser();
	cout << "All tests passed succesfully" << endl;
	int i;
	cin >> i;
	return 0;
}