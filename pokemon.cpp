//John Paul Villamor    //4A    //May 2017
#include<iostream>
#include<stdlib.h>
#include<string>
#include <time.h>
using namespace std;
class Pet{
    private:
        string name;
        int health;
        int xp;
    public:
        Pet();
        void setName(string n);
        string getName();
        int getHealth();
        int getXp();
        void fight();
        void rest();
        void Attributes();
    };
Pet::Pet() {
    name = "Pikachu";
    health = 100;
    xp = 0;
}
void Pet::setName(string n) {
    name = n;
}
string Pet::getName() {
    return name;
}
int Pet::getHealth () {
    return health;
}
int Pet::getXp() {
    return xp;
}
void Pet::fight() {
    int Places[3]; Places[0] = 0;Places[1] = 1;Places[2] = 2;
    srand (time(NULL));
    for (int h = 0; h < 3; h++)
	{
		int index = rand() % 3;
		int temp = Places[h];
		Places[h] = Places[index];
		Places[index] = temp;
	}
	if (Places[0] == 0) {
        health -= 15;
        xp += 5;
        cout << "You lost." << endl;
	}
	else if (Places[0] == 1) {
        health -=10;
        xp += 10;
        cout << "You tied." << endl;
	}
	else if (Places[0] == 2) {
        health -=5;
        xp += 15;
        cout << "You won!" << endl;
	}
}
void Pet::rest() {
    health += 10;
    xp -= 5;
    if (health > 100) {
        health = 100;
    }
    if (xp < 0) {
        xp = 0;
    }
}
void Pet::Attributes() {
    if (getHealth() < 0) {
        health = 0;
    }
    if (getXp() > 100) {
        xp = 100;
    }
    cout << "HP: ";
    for (int g = 0; g < health/5; g++) {
        cout << "-";
    }
    cout << "|" << getHealth() << endl;
    cout << "XP: ";
    for (int s = 0; s < xp/5; s++) {
        cout << "-";
    }
    cout << "|" << getXp() << endl << endl;
}
int main () {
    Pet p;
    string nym;
    cout << "Name your pet: ";
    getline(cin, nym);
    p.setName(nym);
    int opt = 0;
    while (p.getHealth() > 0 && p.getXp() < 100) {
        cout << "(1) Attributes" << endl;
        cout << "(2) Rest" << endl;
        cout << "(3) Fight" << endl;
        cin >> opt;
        if (opt == 1) {
            p.Attributes();
        }
        else if (opt == 2) {
            p.rest();
            p.Attributes();
        }
        else if (opt == 3) {
            int stat1 = p.getXp();
            p.fight();
            cout << endl;
            p.Attributes();
        }
    }
    if (p.getHealth() <= 0) {
        cout << p.getName() << " has fainted!!!" << endl;
    }
    else if (p.getXp() >= 100) {
        cout << p.getName() << " has evolved into Mega-" << p.getName() << "!!!" << endl;
    }
}

