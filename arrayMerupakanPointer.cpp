//arrayMerupakanPointer.cpp
#include <iostream>
#include <conio.h>
using namespace std;

typedef int* IntPtr;

int main( )
{
    IntPtr p;
    int a[10];
    int indeks;

    for (indeks = 0; indeks < 10; indeks++)
        a[indeks] = indeks;

    p = a;

    for (indeks = 0; indeks < 10; indeks++)
        cout << p[indeks] << " ";
    cout << endl;

    for (indeks = 0; indeks < 10; indeks++)
        p[indeks] = p[indeks] + 1;

    for (indeks = 0; indeks < 10; indeks++)
        cout << a[indeks] << " ";
    cout << endl;

    getch();
	return 0;
}