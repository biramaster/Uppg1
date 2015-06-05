#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void ov00();
void ex01();
void ex02();
void ex03();
void ex04();
void ex05();
void ex06();
void ex07();

void tellthestory(int GOLD_PIECES, int adventurers, int killed, int survivors,
	string leader);
void ov01();
void ov02();
void ov03();

int main()
{
	locale swedish("swedish");
	locale::global(swedish);
	char done='N';
	while (done != 'Y') {
		ex06();
		cin >> done;
	}
	cout << "Done!YES!";

	

	return 0;
}

void ov00() {	
	cout << "Övning 1: Game Over" << endl;
}

void ex01() {
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;

	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;

	double engineTemp = 6572.89;

	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "playAgain: " << playAgain << endl;
	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;
		 
	int fuel;
	cout << "\nHow much fuel?";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;

}

void ex02() {
	const int ALIEN_POINTS = 150;
	int alienKilled = 10;
	int score = alienKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;

	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;

	enum shipCost { FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50 };
	shipCost myShipCost = BOMBER_COST;
	cout << "\nTo upgrade my ship to a Cruiser will cost "
		<< (CRUISER_COST - myDifficulty) << " Resource Points.\n";
}

void ex03() {
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;
	
	//get the information
	cout << "Welcome to Lost Fortune\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;
	tellthestory(GOLD_PIECES, adventurers, killed, survivors,
		leader);
}

void tellthestory(int GOLD_PIECES, int adventurers, int killed, int survivors,
	string leader) {
	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << "-– in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue, " << leader << ".\n";

	cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventurers, " << killed << " were vanquished, ";
	cout << "leaving just " << survivors << " in the group.\n";

	cout << "\nThe party was about to give up all hope. ";
	cout << "But while laying the deceased to rest, ";
	cout << "they stumbled upon the buried fortune. ";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
	cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
	cout << " pieces to keep things fair of course.\n";
}

void ov01() {
	/*1. Skriv ett program som ber användaren mata in sin ålder och sedan 
	skriver ut "Jaha, så du är x år gammal", där x är hur gammal han är.
	*/

	int alder;
	cout << "Hur gammal är du?" << endl;
	cin >> alder;
	cout << "Jaha, så du är " << alder << " år gammal";
}

void ov02() {
	/*
	2. Skriv ett program som frågar efter tre tal och lagrar de inmatade värdena 
	i variablerna first, second och third. Programmet ska sedan summera talen i
	en variabel summa, samt skriva ut summan. Testa programmet genom att först 
	trycka enter efter varje inmatat värde, därefter testar du programmet med 
	att trycka mellanslag efter varje inmatat värde.
	*/
	int tal1, tal2, tal3;
	cout << "Skriv in tre tal?" << endl;
	cin >> tal1;
	cin >> tal2;
	cin >> tal3;
	cout << "Summa: " << tal1+tal2+tal3 << endl;
}

void ov03() {
	/*
	3. Skriv ett program där man matar in en bokstav och programmet skriver ut 
	de bokstäver som kommer före och efter. (Man kan använda + och - på chars).
	*/
	char bokstav, bokstavfore, bokstavefter;
	cout << "Skriv in ett bokstav?" << endl;
	cin >> bokstav;
	bokstavfore = bokstav - 1;
	bokstavefter = bokstav + 1;
	cout	<< "Bokstav före: "		<< bokstavfore << endl
			<< "Bokstav: "			<< bokstav << endl
			<< "Bokstav efter: "	<< bokstavefter << endl;
}

void ex04() {
	srand(static_cast<unsigned int>(time(0)));  // seed random number generator based on current time

	int randomNumber = rand(); // generate random number

	int die = (randomNumber % 6) + 1; // get a number between 1 and 6
	cout << "You rolled a " << die << endl;
}

void ex05() {
	string word1 = "Game";
	string word2("Over");
	string word3(3, '!');

	string phrase = word1 + " " + word2 + word3;
	cout << "The phrase is: " << phrase << "\n\n";

	cout << "The phrase has " << phrase.size() << " characters in it.\n\n";

	cout << "The character at position 0 is: " << phrase[0] << "\n\n";

	cout << "Changing the character at position 0.\n";
	phrase[0] = 'L';
	cout << "The phrase is now: " << phrase << "\n\n";

	for (unsigned int i = 0; i < phrase.size(); ++i)
	{
		cout << "Character at position " << i << " is: " << phrase[i] << endl;
	}

	cout << "\nThe sequence ’Over’ begins at location ";
	cout << phrase.find("Over") << endl;

	if (phrase.find("eggplant") == string::npos)
	{
		cout << "’eggplant’ is not in the phrase.\n\n";
	}

	phrase.erase(4, 5);
	cout << "The phrase is now: " << phrase << endl;

	phrase.erase(4);
	cout << "The phrase is now: " << phrase << endl;

	phrase.erase();
	cout << "The phrase is now: " << phrase << endl;

	if (phrase.empty())
	{
		cout << "\nThe phrase is no more.\n";
	}


}

void ex06() {
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	int numItems = 0;
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";

	cout << "Your items:\n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";
	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";

	cout << "\nYou find a healing potion.";
	if (numItems < MAX_ITEMS)
	{
		inventory[numItems++] = "healing potion";
	}
	else
	{
		cout << "You have too many items and can't carry another.";
	}
	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}

}

void ex07() {

}