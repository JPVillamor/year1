//John Paul Villamor    4A  March 2017
#include<iostream>
#include<vector>
#include<stdlib.h>
#include<string>
using namespace std;
int main ()
{
    int Input1, Input2, p=10, f=0, x, k;
    cin >> Input1; cout << Input1 << " / ";
    cin >> Input2;
    cout << Input1 << " / " << Input2 << endl;
    int whole = Input1/Input2; int rem = Input1%Input2; int d;
    vector<int>Box1;
    do
    {
        int h = (whole%p)/(p/10);
        Box1.push_back(h);
        p*=10;
    }
    while (p<whole*10);
    vector<int>Box; int v = 11 - Box1.size();
    for (int s = Box1.size(); s > 0; s--)
    {
    	int z = Box1[s-1];
        Box.push_back(z);
    }
    while(f<v)
    {
        f++;
        d = (rem*10) / Input2;
        rem = (rem*10) % Input2;
        Box.push_back(d);
    }
    for(int j = 0; j < 10; j++)
    {
		k = j+1;
        for(k; k < 11;k++)
        {
            if (Box[j] == Box[k])
            {
            	x = k+1;
                j=200; k=200;
            }
        }
    }
    for (int r = 0; r < x; r++)
    {
    	if (r == Box1.size())
    	{
    		cout << ".";
		}
    	cout << Box[r];
	}
    return 0;
}

