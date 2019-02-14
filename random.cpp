//"Random" Number Generator
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
int main ()
{
	srand(time(NULL));
	int r = rand() % 19 + 1; //range of numbers between 1 and 20.
}
