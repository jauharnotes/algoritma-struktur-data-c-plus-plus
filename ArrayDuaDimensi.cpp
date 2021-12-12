//ArrayDuaDimensi.cpp
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int Array2D[2][5] = { {0,1,2,3,4}, {0,2,4,6,8}};
    for (int i = 0; i<2; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout << "Array2D[" << i << "][" << j << "]: ";
            cout << Array2D[i][j]<< endl;
        }
    }
 
	getch();
	return 0;
}