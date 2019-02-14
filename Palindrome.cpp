//John Paul Villamor
//4A
//10 January 2017
#include <iostream>
using namespace std;
int main ()
{
    string input;
    cout << "\"Sarah Palin-drome\"" << endl << "Enter something: " << endl;
    getline(cin, input);
    int a;
    for (int i = 0; i <= a; i++)
    {
        if (input[i] == ' ')
        {
            input.erase(i, 1);
        }
        a = input.length() - 1;
    }
    string output = input;
    for (int i = 0; i <= a; i++)
    {
        output[i] = input[a-i];
    }
    cout << output << endl << "- - - - - - -" << endl;
    if (output == input)
    {
        cout << input << " is indeed a palindrome." << endl;
    }
    else if (output != input)
    {
        cout << "Does \"" << output << "\" look like \"" << input << "\" to you?!" << endl;
    }
    return 0;
}
