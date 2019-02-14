//John Paul Villamor
//4A
//10 January 2017
#include <iostream>
using namespace std;
int main ()
{
    string input;
    getline(cin, input);
    int a; a = input.length() - 1;
    string output = input;
    for (int i = 0; i <= a; i++)
    {
        output[i] = input[a-i];
    }
    cout << output << endl << "- - - - - - -" << endl;
    return 0;
}

