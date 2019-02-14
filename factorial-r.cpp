//recursive factorial thingy
#include <iostream>
using namespace std;
int fac(int x) {
    if (x == 1) //base condition
        x *= 1;
    else if (x != 0)
        x = fac(x-1) * (x); //recurses to do fac on the lesser number
    return x;
}
int main () {
    int input;
    cout << "enter integer: ";
    cin >> input;
    cout << fac(input);
    return 0;
}
