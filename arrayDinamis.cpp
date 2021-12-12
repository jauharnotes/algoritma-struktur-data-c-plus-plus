//arrayDinamis.cpp
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <conio.h>

typedef int* IntArrayPtr;

void isi_array(int a[], int ukuran);

int main( )
{
    using namespace std;
    cout << "Program ini mengisi array melalui keyboard.\n";

    int ukuran_array;
    cout << "Berapa besar ukuran array?: ";
    cin >> ukuran_array;

    IntArrayPtr a;
    a = new int[ukuran_array];

    isi_array(a, ukuran_array);

    cout << "Elemen-elemen array adalah: \n";
    for (int indeks = 0; indeks < ukuran_array; indeks++)
        cout << a[indeks] << " ";
    cout << endl;

    delete [] a;

    getch();
	return 0;
}

void isi_array(int a[], int ukuran)
{
    using namespace std;
    cout << "Masukkan sebanyak " << ukuran << " buah integer.\n";
    for (int indeks = 0; indeks < ukuran; indeks++)
        cin >> a[indeks];
}
