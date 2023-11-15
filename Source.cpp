#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

// 

class Player {
public:
	string name;
	string race;
	string classification;
	string society;


	Player(string inputName, string inputRace, string inputClass) {
		name = inputName;
		race = inputRace;
		classification = inputClass;

	};
};


void createSpace() {
	cout << "\n";
}


void createQuestLine(Player player) {

	string arrPossession[] = { "Gear", "Trinket", "Weapon", "Family", "Friend", "Evildoer", "Hero", "Ability", "Experience", "Information" };
	string arrVices[] = {"Justice", "Power", "Money", "Material Gain", "Carnal Desire", "Fame",
		"Achievements", "Restfulness", "Escapism", "Resentment", "Spite", "Overindulgence", "Experience"};
	
	int arrPossessionSize = sizeof(arrPossession) / sizeof(arrPossession[0]);
	int arrVicesSize = sizeof(arrVices) / sizeof(arrVices[0]);

	int randNumPossession = rand() % arrPossessionSize;
	int randNumVice = rand() % arrVicesSize;
	
	string randPossession = arrPossession[randNumPossession];
	string randVice = arrVices[randNumVice];
	
	cout << player.name << " wants a(an) " << randPossession << " for the sake of " << randVice << "\n";

	if (randPossession == "Information") {
		createQuestLine(player);
	}

	/*
	Object - Trinket, Gear, Weapon
	Person - Family, Evildoer, Friend, Hero
	Ability
	Experience
	Information
	*/
}


int main() {
	srand(time(NULL));
	string namePlayer1 = "Jack";
	string racePlayer1 = "Human";

	Player player1 = Player("Jeff", "Human", "Fighter");
	Player player2 = Player("John", "Dwarf", "Paladin");
	Player player3 = Player("Jack", "Tiefling", "Bard");
	Player player4 = Player("Joseph", "Half-Elf", "Sorcerer");

	Player players[4] = { player1, player2, player3, player4 };

	for (int i = 0; i < 4; i++) {
		createQuestLine(players[i]);
		createSpace();
	}

	return 0;
}





