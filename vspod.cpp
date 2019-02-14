//John Paul Villamor    //4A    //May 2017
#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>
using namespace std;
struct SONG {
    string Title;
    string Artist;
    int Length;
};
int steve = 0;
void addSong(vector<SONG>&vspod) {
    SONG temp;
    temp.Title = "Teardrop";
    temp.Artist = "Massive Attack";
    temp.Length = (5*60) + 33;
    cout << "Title: "; cin.ignore();
    getline(cin, temp.Title);
    cout << "Artist: ";
    getline(cin, temp.Artist);
    cout << "Length: ";
    cin >> temp.Length;
    vspod.push_back(temp);
}
void displayPlaylist(vector<SONG>&vspod) {
	for (int i = 0; i < vspod.size(); i++) {
		cout << "| Title: " << vspod[i].Title << " | Artist: " << vspod[i].Artist << " | Length: " << vspod[i].Length << "s |\n";
	}
}
void sort(vector<SONG>&vspod) {
	string tempTitle, tempArtist; 
	int tempLength;
	if (steve == 2) {
		for (int f = 0; f < vspod.size(); f++) {
        for (int g = f+1; g < vspod.size(); g++) {
            if (vspod[f].Title > vspod[g].Title) {
                tempTitle = vspod[g].Title;
                vspod[g].Title = vspod[f].Title;
                vspod[f].Title = tempTitle;
                tempArtist = vspod[g].Artist;
                vspod[g].Artist = vspod[f].Artist;
                vspod[f].Artist = tempArtist;
                tempLength = vspod[g].Length;
                vspod[g].Length = vspod[f].Length;
                vspod[f].Length = tempLength;
            }
        }
    }
	}
	else if (steve == 3) {
		for (int f = 0; f < vspod.size(); f++) {
        for (int g = f+1; g < vspod.size(); g++) {
            if (vspod[f].Artist > vspod[g].Artist) {
                tempTitle = vspod[g].Title;
                vspod[g].Title = vspod[f].Title;
                vspod[f].Title = tempTitle;
                tempArtist = vspod[g].Artist;
                vspod[g].Artist = vspod[f].Artist;
                vspod[f].Artist = tempArtist;
                tempLength = vspod[g].Length;
                vspod[g].Length = vspod[f].Length;
                vspod[f].Length = tempLength;
            }
        }
    }
	}
	else {
		for (int f = 0; f < vspod.size(); f++) {
        for (int g = f+1; g < vspod.size(); g++) {
            if (vspod[f].Length > vspod[g].Length) {
                tempTitle = vspod[g].Title;
                vspod[g].Title = vspod[f].Title;
                vspod[f].Title = tempTitle;
                tempArtist = vspod[g].Artist;
                vspod[g].Artist = vspod[f].Artist;
                vspod[f].Artist = tempArtist;
                tempLength = vspod[g].Length;
                vspod[g].Length = vspod[f].Length;
                vspod[f].Length = tempLength;
            }
        }
    }
	}
}
int main () {
    vector<SONG>vspod;
    cout << "Welcome to vsPod." << endl << endl;
    while (steve != 6) {
    	cout << endl << " -------------MENU--------------" << endl;
        cout << "|	(1) Add songs		|" << endl;
        cout << "| 	(2) Sort by Title	|" << endl;
        cout << "|	(3) Sort by Artist	|" << endl;
        cout << "|	(4) Sort by Length	|" << endl;
		cout << "|	(5) Show playlist	|" << endl;
        cout << "|	(6) Exit		|" << endl;
        cout << " -------------------------------" << endl << endl;
        cin >> steve;
        if (steve == 1) {
        	addSong(vspod);
		}
		else if (steve != 1 && vspod.size() < 1) {
			cout << "Maybe you should try adding songs." << endl;
		}
		else if (steve == 2 || steve == 3 || steve == 4 ) {
			sort(vspod);
		}
		else if (steve == 5) {
			displayPlaylist(vspod);
			for (int u = 0; u < vspod.size(); u++) {
				if (vspod[u].Artist == "Justin Bieber") {
					cout << endl << "Justin Bieber? Seriously?" << endl;
				}
				else {
					cout << endl << "Decent enough music taste, I guess." << endl;
				}
			}
		}
    }
    return 0;
}


