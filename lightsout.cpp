#include <iostream>
using namespace std;
int main ()
{
    int r;
    int board[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int k = 0; k < 8; k++)
        {
            board[i][k] = 0;
        }
    }
    cout << "r = ";
    cin >> r;
    for (int a = 0; a < r; a++)
    {
        string on;
        getline(cin, on);
        int l = on.length();
        string y = on.substr(0, 1);
        int yon = atoi(y.c_str());
        for (int b = 1; b < l; b++)
        {
            string x = on.substr(b, 1);
            int xon = atoi(x.c_str());
            board[yon][xon] = 1;
        }
    }
    string last; getline(cin, last);
    string row = last.substr(0, 1);
    int introw = atoi(row.c_str());
    string column = last.substr(1, 1);
    int intcolumn = atoi(column.c_str());
    int brow = introw - 1; int bcol = intcolumn - 1;

    for (int d = -2; d < 3; d++)
    {
    	if (brow + d >= 0 && brow + d < 8)
    	{
    		
		}
	}
    //if statement condition brow + d >= 0 && < 8
    return 0;
}

