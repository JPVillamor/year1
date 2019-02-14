//John Paul Villamor
//4A
//15 December 2016
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
char Under[5][5], Display[5][5];
int R, C;
int Places[25], row, column, guesses = 0, points = 0, treasures = 0, bads = 0;
void input ()
{
    cout << "Please enter a row: " << endl;
    cin >> row;
    row = row - 1;
    cout << "Please enter a column: " << endl;
    cin >> column;
    column = column - 1;
}
void output ()
{
    for (int i = 0; i < 5; i++)
    {
        for (int ii = 0; ii < 5; ii++)
        {
            {
                cout << /*'Display' -->*/Display[i][ii] << "     ";
            }
        }
        cout << " Row " << i + 1 << endl << endl;
    }
    for (int p = 0; p < 5; p++)
    {
        cout << p + 1 << "     ";
    }
    cout << endl << endl;
    cout << setw(15) << "POINTS: " << points << endl << setw(15) << "GUESSES: " << guesses << endl << "BAD GUYS LEFT: " << 5 - bads << endl;
}
int main ()
{
    for (int j = 0; j < 25; j++)
    {
        Places[j] = j + 1;
    }
    for (int t = 0; t < 5; t++)
    {
        for (int u = 0; u < 5; u++)
        {
            {
                Under[t][u] = '#';
                Display[t][u] = Under[t][u];
            }
        }
    }
    srand (time(NULL));
    for (int h = 0; h < 25; h++)
	{
		int index = rand() % 25;
		int temp = Places[h];
		Places[h] = Places[index];
		Places[index] = temp;
	}
	for (int a = 0; a < 10; a++)
    {
    	if (Places[a] <= 5)
		{
			R = 0;
		}
		else if (Places[a] <= 10)
		{
			R = 1;
		}
		else if (Places[a] <= 15)
		{
			R = 2;
		}
		else if (Places[a] <= 20)
		{
			R = 3;
		}
		else if (Places[a] <= 25)
		{
			R = 4;
		}
		C = Places[a] % 5;
        Under[R][C] = '$';
    }
    for (int b = 10; b < 15; b++)
    {
        if (Places[b] <= 5)
		{
			R = 0;
		}
		else if (Places[b] <= 10)
		{
			R = 1;
		}
		else if (Places[b] <= 15)
		{
			R = 2;
		}
		else if (Places[b] <= 20)
		{
			R = 3;
		}
		else if (Places[b] <= 25)
		{
			R = 4;
		}
		C = Places[b] % 5;
        Under[R][C] = 'L';
    }
    while(treasures < 10 && bads < 5)
    {
        output();
        cout << endl;
        input();
        cout << endl;
        if (Under[row][column] == '$')
        {
            Display[row][column] = Under[row][column];
            treasures++;
            points++;
            guesses++;
        }
        else if (Display[row][column] != '#')
        {
            cout << "You guessed that already." << endl;
        }
        else if (Under[row][column] == '#')
        {
            Display[row][column] = 'X';
            guesses++;
        }
        else if (Under[row][column] == 'L')
        {
            Display[row][column] = 'L';
            guesses++;
            bads++;
            if (points > 1)
            {
                points = points - 2;
            }
            else if (points == 1)
            {
                points = points - 1;
            }
            else if (points == 0)
            {
                points = points;
            }

        }
    }
    if (treasures == 10)
    {
        output();
        cout << endl;
        cout << endl << "GAME COMPLETE" << endl << "-------------" << endl;
    	if (bads > 0 && points > 0)
        {
            cout << "That took you " << guesses << " guesses. " << endl << "The Bad Guys took some of your gold, and left you with " << points << "." << endl;
        }
        else if (points == 10)
        {
            cout << "You are a treasure hunting god!" << endl << "That's all 10 points in " << guesses << " guesses!" << endl;
        }
	}
	else if (bads == 5 && treasures < 10)
    {
        output();
        cout << endl;
        cout << "         _,.-------.,_" << endl;
        cout << "     ,;~'             '~;," << endl;
   		cout << "   ,;                     ;," << endl;
   		cout << "  ;                         ;" << endl;
   		cout << " ,'                         '," << endl;
   		cout << ",;                           ;," << endl;
   		cout << "; ;      .           .      ; ;" << endl;
   		cout << "| ;   ______       ______   ; |" << endl;
   		cout << "|  ` ~'     -' . '-     '~ '  |" << endl;
   		cout << "|  ~  ,-~~~^~, | ,~^~~~-,  ~  |" << endl;
   		cout << " |   |        }:{        |   |" << endl;
   		cout << " |   |       / | \\       |   |" << endl;
   		cout << " .~  (__,.--\" ; ; \"--.,__)  ~." << endl;
   		cout << " |     ---;' / | \\ `;---     |" << endl;
   		cout << "  \\__.       \\/^\\/       .__/" << endl;
		cout << "   V| \\                 / |V" << endl;
		cout << "    | |T~\\___!___!___/~T| |" << endl;
		cout << "    | |`IIII_I_I_I_IIII'| |" << endl;
		cout << "    |  \\,III I I I III,/  |" << endl;
		cout << "     \\   `~~~~~~~~~~'    /" << endl;
		cout << "      \\   .       .   /  " << endl;
		cout << "         \\.    ^    ./" << endl;
		cout << "           ^~~~^~~~^" << endl;
    }
    return 0;
}

