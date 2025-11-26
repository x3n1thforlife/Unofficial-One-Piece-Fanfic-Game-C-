#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <conio.h>

using namespace std;

// Universal Values
bool continueGame = true;
char choiceKey;
int bossDamage = 0;
int playerDamage = 0;

// Clear Lines
void clearLines() {
	system("cls");
}

// Wait for Key Press
void pressKey() {
	system("pause");
}

// Separate with a Line
void printLine() {
	for (int i = 0; i < 100; ++i) {
		cout << "-";
	}
	cout << endl;
}

// Input Key
void pressChoice() {
    choiceKey = getch();
}

// Clear Input Key
void clearKey() {
	choiceKey = '\0';
}

// Player Details
string playerName;
string playerNickname;
int playerHP = 50;
int playerATK = 10;
int playerEND = 15;
int playerEP = 5;
int playerREGENEP = 0;

// Boss Details
string bossName = "Arlong the Saw";
string bossNickname = "Arlong";
int bossHP = 2500;
int bossATK = 520;
int bossEND = 600;

// The 8-Year Loop
void loopTraining() {
	for (int i = 1; i <= 48; i++) {
		cout << "Enter number to increase stats: " << endl;
		cout << "1 for HP" << endl;
		cout << "2 for Attack" << endl;
		cout << "3 for Endurance" << endl;
		cout << "4 for Energy Points" << endl;
		cout << "5 for Energy Regeneration" << endl;
		pressChoice();
		switch (choiceKey) {
			case 1:
				playerHP = 21 + 4 * (i - 1);
				cout << "Player HP is now " << playerHP << endl;
				cout << endl;
				printLine();
				pressKey();
				clearLines();
				break;
			case 2:
				playerATK = 11 + 2 * (i − 1);
				cout << "Player ATK is now " << playerATK << endl;
				cout << endl;
				printLine();
				pressKey();
				clearLines();
				break;
			case 3:
				playerEND = 15 + 3 * (i − 1);
				cout << "Player END is now " << playerEND << endl;
				cout << endl;
				printLine();
				pressKey();
				clearLines();
				break;
			case 4:
				playerEP = 15 + 3 * (i − 1);
				cout << "Player EP is now " << playerEP << endl;
				cout << endl;
				printLine();
				pressKey();
				clearLines();
				break;
			case 5:
				playerREGENEP = 2.5 + 0.5 * (i − 1);
				cout << "Player ATK is now " << playerREGENEP << endl;
				cout << endl;
				printLine();
				pressKey();
				clearLines();
				break;
		}
		clearKey();
	}
}

// Boss Turn
void bossTurn() {
	if (bossHP <= 1600 && bossHP >= 901) {
		bossATK = 550;
	}
	else if (bossHP >= 900 && bossHP >= 1) {
		bossATK = 600;
		bossEND = 660;
	}
	dealPlayerDamage();
}

// Max Constant Values
void declareConstant() {
	const int maxPlayerHP = playerHP;
	const int maxBossHP = bossHP;
	const int maxPlayerATK = playerATK;
	const int maxPlayerEND = playerEND;
	const int maxPlayerEP = playerEP;
	const int maxBossATK = bossATK;
	const int maxBossEND = bossEND;
}

// Story Arc 1
void chapter1() {
	cout << endl;
	cout << "Location: " << storySetting[0] << endl;
	cout << endl;
	cout << "The Cocoyashi Village is a place full of prosperity and peace in the world." << endl;
	cout << "You lived there with your love, Nami." << endl;
	cout << "You watched her draw her first map, and glance in front of her eyes." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << "Location: " << storySetting[0] << endl;
	cout << endl;
	cout << "One of your best friends, Bell-mere, checking the budget and price of her delicious mikans." << endl;
	cout << "When things get really rough, you cook extra tasty dishes inside her household, making Bell-mere eat this instead of mikans." << endl;
	cout << "The low demand for mikan lasted for months, as time passes by." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << "Location: " << storySetting[0] << endl;
	cout << endl;
	cout << "Inside of Genzo's house, you started helping him clean the sheriff's office, as this can go really messy." << endl;
	cout << "As you embraced Nami, you realize that the family is in a financial situation." << endl;
	cout << "The next time it came, both Nojiko and Nami have terrible fever, high taxes being paid for living, let alone being 100K Beli for an adult and 50K for children." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << "Location: " << storySetting[0] << endl;
	cout << endl;
	cout << "Everything seemed fine for now, until a hostile enemy just arrived." << endl;
	cout << "Arlong the Saw, a fishman who once lived in the Grandline, home of the strongest people in the planet." << endl;
	cout << "One by one, the enemy pirates took everything in the village." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << "Location: " << storySetting[0] << endl;
	cout << endl;
	cout << "You here the voices of the fishmen stating their demands:" << endl;
	cout << endl;
	cout << "Arlong: \"I came here to colonize this island. Pay tribute to me or BE EXECUTED.\"" << endl;
	cout << endl;
	cout << "Body after body, the corpses of the slain fell down their knees." << endl;
	cout << "Bell-mere opens the door, only to be greeted by the fishermen alone." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << "Location: " << storySetting[0] << endl;
	cout << endl;
	cout << "Bell-mere: \"I cannot pay you real money. How about my children?" << endl;
	cout << endl;
	cout << "But, he does not like people paying any money. He then takes out Bell-mere with one strike." << endl;
	cout << "You can only watch as here body drops to the sand." << endl;
	cout << endl;
	cout << "Arlong: \"Children, huh? Pitiful.\"" << endl;
	cout << "Keigan: Wait, wait, wait, wait a second, what happened?" << endl;
	cout << "Arlong: \"GRRRRRAAAAHHHHH!!!\"" << endl;
	cout << "Keigan: \"*gasps*, *stutters* B-B-B-Bell?\"" << endl;
	cout << "Keigan: \"NOOOOOOOOOOOOOOOOO!!!!!\"" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
}

// Story Settings
string storySetting[2] = {"Cocoyashi Village", "Polar Tang"}

// Disclaimer
void warningScreen() {
	cout << endl;
    cout << "           D I S C L A I M E R          " << endl;
    cout << endl;
    cout << " This is a work of fiction. Any of the  " << endl;
    cout << " characters, events, and objects based  " << endl;
    cout << "   on the original \"One Piece\" anime    " << endl;
    cout << "  are fan-made. All rights go to their  " << endl;
    cout << "           respective owners.           " << endl;
    cout << endl;
    cout << "   Dialogue is transcripted from the    " << endl;
    cout << "   OP/Naru Fanfic and not the official  " << endl;
    cout << "               animation.               " << endl;
    cout << endl;
    cout << "  Viewer Discretion is Advised. (18+)   " << endl;
    cout << endl;
    printLine();
    cout << endl;
    pressKey();
    clearLines();
}

// Introduction
void introScreen() {
	cout << endl;
	cout << "            \" R E B O R N \"             " << endl;
	cout << endl;
	cout << "     in East Blue with the Eight Gates    " << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
}

// Startup Screen
void startScreen() {
    cout << "\"To give, and not to count the cost" << endl;
    cout << "to fight, and not to heed the wounds," << endl;
    cout << "to toil, and not to seek for rest," << endl;
    cout << "to labor, and not to ask for any reward," << endl;
    cout << "save that of knowing that we do thy will\"" << endl;
    cout << endl;
    cout << setw(17) << "- St. Ignatius of Loyola" << endl;
    cout << endl;
    cout << setw(4) << "A D   M A J O R E M   D E I   G L O R I A M" << setw(3) << endl;
    cout << endl;
    cout << setw(6) << "A project of Ateneo de Naga University" << setw(6) << endl;
    cout << setw(0) << endl;
    printLine();
    cout << endl;
	pressKey();
	clearLines();
}

// Exit Game
void exitGame() {
	clearLines();
	cout << "----------------------------------------" << endl;
    cout << "|                                      |" << endl;
    cout << "|    Are you sure you want to quit?    |" << endl;
    cout << "|                                      |" << endl;
    cout << "|     Press Y for Yes, or N for No     |" << endl;
    cout << "|                                      |" << endl;
    cout << "----------------------------------------" << endl;
    pressChoice();
    if (choiceKey == 'y' || choiceKey == 'Y') {
        continueGame = false;
        clearKey();
    }
}

// Enter Name
void enterName() {
	cout << "Before you continue, we want to ask for your name." << endl;
	cout << endl;
	cout << "Enter your name here: ";
	cin >> playerName;
	cout << endl;
	cout << "Enter your nickname here: ";
	cin >> playerNickname;
	clearLines();
}

// Play the Full Game
void playGame() {
   	clearKey();
	clearLines();
	enterName();
   	warningScreen();
    introScreen();
}

// Main Menu
void mainMenu() {
    cout << "----------------------------------------" << endl;
    cout << "|                                      |" << endl;
    cout << "|      \"Reborn\" In East Blue With      |" << endl;
    cout << "|           The Eight Gates            |" << endl;
    cout << "|                                      |" << endl;
	cout << "| A fanfic from the anime \"One Piece\"  |" << endl;
	cout << "|                                      |" << endl;
    cout << "|       Press P to start playing.      |" << endl;
    cout << "|           Press Q to Quit.           |" << endl;
    cout << "|                                      |" << endl;
    cout << "----------------------------------------" << endl;
}

// Game Flow
int main() {
    startScreen(); // Shows Startup Screen
    while (continueGame == true) {
        mainMenu(); // Shows Main Menu
        choice();
        if (choiceKey == 'q' || choiceKey == 'Q') {
        	exitGame(); // Exit Game
		}
		else if (choiceKey == 'p' || choiceKey == 'P') {
			playGame(); // Play Game
		}
    }
    return 0;
}





