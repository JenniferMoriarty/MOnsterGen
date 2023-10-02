#include<iostream>
using namespace std;

void MonsterGen(); //declaration

int main() {
	char input;
	while (1) { //game loop!
		//your text based game goes here!
		MonsterGen();
		cout << "press any key to continue..." << endl;
		cin >> input;
	}

}

void MonsterGen() { //definition
	int num = rand() % 100; //creates a number between 0-99
	if (num < 15) { //15% chance of WITCH
		cout << "A witch spawned." << endl;
		cout << "she has green skin and bony fingers!" << endl;
	}
	else if (num < 20) { //5% chance of a skeley
		cout << "A skeleton appeared!" << endl;
	}
	else if (num < 50) {// 30% chance of an alien!
		cout << "An ALIEN appears!" << endl;
	}
	else if (num < 75) { //25% chance
		cout << "a cookie monster appeared." << endl;
	}
	else {
		cout << "Dr. Mo appears!" << endl;
	}
}
