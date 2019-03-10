#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::string;
#include "Adventure.h"

int main()
{
	const int levels = 4;
	int outcomes[levels];

	cout << "Welcome to the Lost Temple of Jaxlahtu\n";
	cout << "-------------------------------------------\n";
	char name[50];
	cout << "\nWhat is your name, traveler?\n";
	cin.getline(name, 50);
	cout << "\nTreasure awaits you, " << name << ". But so does danger...\n";

	char response;
	cout << "Are you ready to begin your adventure? (y/n)\n";
	cin >> response;

	while (response == 'y') {
	outcomes[0] = levelOne(outcomes);

	outcomes[1] = levelTwo(outcomes);

	outcomes[2] = levelThree(outcomes);

	outcomes[3] = levelFour(outcomes);

	}

    return 0;
}

