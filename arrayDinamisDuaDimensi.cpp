//arrayDinamisDuaDimensi.cpp
#include <iostream>
#include <conio.h>
using namespace std;

typedef int* IntArrayPtr;

int main( )
{
    int d1, d2;
    cout << "Masukkan dimensi baris dan kolom dari array:\n";
    cin >> d1 >> d2;

    IntArrayPtr *m = new IntArrayPtr[d1];
 
	int i, j;
 	for (i = 0; i < d1; i++)
        m[i] = new int[d2];
    //m sekarang merupakan array berukuran d1 kali d2.

    cout << "Masukkan sejumlah " << d1 << " baris dengan  "
         << d2 << " buah integer pada tiap barisnya:\n";
    for (i = 0; i < d1; i++)
        for (j = 0; j < d2; j++)
            cin >> m[i][j];

	cout << "Array dua-dimensi:\n";
    for (i = 0; i < d1; i++)
    {
        for (j = 0; j < d2; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
 
	for (i = 0; i < d1; i++)
        delete[] m[i];
    delete[] m;

    getch();
	return 0;
}