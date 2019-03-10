#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int levelOne(int outcomes[]) {

	cout << "While digging for treasure in the desert, you find a door to the Lost Temple.\n";
	cout << "You can...\n";
	cout << "1. open it?\n"; 
	cout << "2. dig some more?\n";
	
	int response;
	cin >> response;
	return response;

}

int levelTwo(int outcomes[]) {

	int previousChoice;
	previousChoice = outcomes[0];

	if (previousChoice == 1) {

		cout << "You have reached the temple entrance. In this room there is a door, a long hallway, and a ladder going down.\n";
		cout << "The embankment you built through the original entrance has unfortunately collapsed.\n";
		cout << "You cannot leave the temple the way you came. Got to keep moving.\n";
		cout << "You can...\n";
		cout << "1. open the door?\n";
		cout << "2. go down the hallway?\n";

		int response;
		cin >> response;
		return response;
	}
	else if (previousChoice == 2) {
		
		cout << "Under the door, you find an archway to two descending sets of stairs.\n";
		cout << "Unfortunately, the earth ramp you constructed has collapsed, taking your rope with it.\n";
		cout << "It appears the only way out is forward.\n";
		cout << "You can...\n";
		cout << "3. take the right stairs down?\n";
		cout << "4. take the left stairs down?\n";

		int response;
		cin >> response;
		return response;
	}
}

int levelThree(int outcomes[]) {

	int previousChoice;
	previousChoice = outcomes[1];

	if (previousChoice == 1) {

		cout << "This room has a chair in the middle. There is an iron door and a hallway here.\n";
		cout << "You can...\n";
		cout << "1. open the door?\n";
		cout << "2. sit in the chair?\n";

		int response;
		cin >> response;
		return response;
	}
	else if (previousChoice == 2) {

		cout << "Yikes! This room has a giant spider in it! Let's get out of here!\n";
		cout << "There is another door to your left!\n";
		cout << "You can...\n";
		cout << "3. escape through the left door?\n";
		cout << "4. try to fight the spider?\n";

		int response;
		cin >> response;
		return response;
	}
	else if (previousChoice == 3) {

		cout << "You find an ancient storage chamber with a door, and a stone ladder going up.\n";
		cout << "You can...\n";
		cout << "5. open the door?\n";
		cout << "6. climb up the ladder?\n";

		int response;
		cin >> response;
		return response;
	}
	else if (previousChoice == 4) {

		cout << "This room has an ancient subterranean water canal running through it.\n";
		cout << "You might be able to use the flow to escape using an old wooden boat nearby.\n";
		cout << "You can...\n";
		cout << "7. try to swim out the canal?\n";
		cout << "8. use the boat?\n";

		int response;
		cin >> response;
		return response;
	}
}

int levelFour(int outcomes[]) {

	int previousChoice;
	previousChoice = outcomes[2];

	if (previousChoice == 1) {

		cout << "Unfortunately, the door turns out to be trap.\n";
		cout << "No sooner have you pushed on it than a massive electrical shock runs through you!\n";
		cout << "Game Over!\n";
		cout << "Please play again!\n";

		int response;
		cin >> response;
		return response;
	}

	else if (previousChoice == 2) {

		cout << "When you sit in the chair, treasure falls from the ceiling!\n";
		cout << "You stuff your pockets full of loot and a stone slab grinds open behind you.\n";
		cout << "It's a tunnel back to the surface. You win!\n";
		cout << "Please play again!\n";

		int response;
		cin >> response;
		return response;
	}

	else if (previousChoice == 3) {

		cout << "You have not gone more than half a dozen steps before there is a whooshing noise!\n";
		cout << "Sticky web wraps around you. You fall, trapped.There is no escape now.\n";
		cout << "Game Over!\n";
		cout << "Please play again!\n";

		int response;
		cin >> response;
		return response;
	}

	else if (previousChoice == 4) {

		cout << "Bad move, knucklehead! Fight it with what?\n";
		cout << "The spider pounces on you, rolls you up with web, and hangs you in its larder.\n";
		cout << "Game Over!\n";
		cout << "Please play again!\n";

		int response;
		cin >> response;
		return response;
	}

	else if (previousChoice == 5) {

		cout << "The door turns out to be the entrance to the temple reliquary.\n";
		cout << "There are several valuable artifacts you can carry here. Score!\n";
		cout << "You can dig out of the temple now via an old sand-clogged archway to the surface.\n";
		cout << "You win!\n";
		cout << "Please play again!\n";

		int response;
		cin >> response;
		return response;
	}

	else if (previousChoice == 6) {

		cout << "As you reach the ascending tunnel, you see it leads nowhere. Itfs a trap!\n";
		cout << "The ladder crumbles beneath your fingers and you fall!\n";
		cout << "Game Over!\n";
		cout << "Please play again!\n";

		int response;
		cin >> response;
		return response;
	}

	else if (previousChoice == 7) {

		cout << "Unfortunately, this aqueduct is home to a giant octopus who isnft fond of intruders!\n";
		cout << "Game Over!\n";
		cout << "Please play again!\n";

		int response;
		cin >> response;
		return response;
	}

	else if (previousChoice == 8) {

		cout << "You climb into the boat, realizing you are not the first one to find this temple.\n";
		cout << "There probably isnft any treasure left. It's likely been plundered already.\n";
		cout << "At least the boat carries you out safely at least. Socyou win?h\n";
		cout << "Please play again!\n";

		int response;
		cin >> response;
		return response;
	}
}