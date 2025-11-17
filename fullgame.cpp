#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <conio.h>

using namespace std;

// Universal Values
bool inMainMenu = true;
bool continueGame = true;
bool pause = false;
char choiceKey;

// Wait for Key
void choice() {
    choiceKey = getch();
}

// Player Details
string playerName = "Keigan";
string playerNickname = "Kei";
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
    system("pause");
    system("cls");
}

// Introduction
void introScreen() {
	cout << endl;
	cout << "            \" R E B O R N \"             " << endl;
	cout << endl;
	cout << "     in East Blue with the Eight Gates    " << endl;
	cout << endl;	
	cout << endl;
	system("pause");
	system("cls");
}

// All Scenes
void sceneView() {
	
}

// All Dialogues
void dialogueScript() {
	vector<string> dialogue;
	dialogue[0] = "\"Hey! Nami! erm... Umm...";
}

// Dealing Boss Damage
int dealBossDamage(int bossDamage) {
	bossDamage = ceil((playerATK - bossEND) / 2);
	return bossDamage;
}

// Player Taking Damage
int dealPlayerDamage(int playerDamage) {
	playerDamage = ceil((bossATK - playerEND) / 2);
	return playerDamage;
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
    cout << endl;
    system("pause");
    system("cls");
}

// Exit Game
void exitGame() {
    cout << "----------------------------------------" << endl;
    cout << "|                                      |" << endl;
    cout << "|    Are you sure you want to quit?    |" << endl;
    cout << "|                                      |" << endl;
    cout << "|     Press Y for Yes, or N for No     |" << endl;
    cout << "|                                      |" << endl;
    cout << "----------------------------------------" << endl;
    choice();
    if (choiceKey == 'y' || choiceKey == 'Y') {
        continueGame = false;
    }
}

// Game Paused
void pauseGame() {
    cout << "----------------------------------------" << endl;
    cout << "|                                      |" << endl;
    cout << "|             Game Paused!             |" << endl;
    cout << "|                                      |" << endl;
    cout << "|         Press C to Continue.         |" << endl;
    cout << "|           Press Q to Quit.           |" << endl;
    cout << "|                                      |" << endl;
    cout << "----------------------------------------" << endl;
}

// Main Menu
void mainMenu() {
    while (inMainMenu) {
        cout << "----------------------------------------" << endl;
        cout << "|                                      |" << endl;
        cout << "|      \"Reborn\" In East Blue With      |" << endl;
        cout << "|           The Eight Gates            |" << endl;
        cout << "|                                      |" << endl;
    	cout << "| A fanfic from the anime \"One Piece\"  |" << endl;
    	cout << "|                                      |" << endl;
        cout << "|    Press any key to start playing.   |" << endl;
        cout << "|           Press Q to Quit.           |" << endl;
        cout << "|                                      |" << endl;
        cout << "----------------------------------------" << endl;
        choice();
        if (choiceKey == 'q' || choiceKey == 'Q') {
            exitGame();
        }
        else {
            warningScreen();
            introScreen();
        }
    }
}

// Game Flow
int main() {
    startScreen(); // Shows Startup Screen
    while (continueGame == true) {
        mainMenu(); // Shows Main Menu
    }
    return 0;
}
