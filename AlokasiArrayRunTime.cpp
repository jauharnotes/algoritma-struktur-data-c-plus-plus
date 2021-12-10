//AlokasiArrayRunTime.cpp
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int UkuranAlokasi = 5;
    int *pArrayAngka = new int[UkuranAlokasi];
    int ElemenDigunakanSejauhIni = 0;
    int MaksElemenDiijinkan = UkuranAlokasi;
    int AngkaMasukan = -1;

    cout << endl << "Angka selanjutnya = ";
    cin >> AngkaMasukan;

    while ( AngkaMasukan > 0 )
    {
        pArrayAngka[ElemenDigunakanSejauhIni++] = AngkaMasukan;

        if ( ElemenDigunakanSejauhIni == MaksElemenDiijinkan )
        {
            int *pArrayBesar =
                new int[MaksElemenDiijinkan+UkuranAlokasi];

            for ( int SalinIndeks = 0;
            SalinIndeks < MaksElemenDiijinkan;
            SalinIndeks++ )
            {
                pArrayBesar[SalinIndeks] = pArrayAngka[SalinIndeks];
            };

            delete [] pArrayAngka;
            pArrayAngka = pArrayBesar;
            MaksElemenDiijinkan+= UkuranAlokasi;
        };
        cout << endl << "Angka selanjutnya = ";
        cin >> AngkaMasukan;
    }

    for (int Indeks = 0; Indeks < ElemenDigunakanSejauhIni; Indeks++)
    {
        cout << pArrayAngka[Indeks] << endl;
    }
 
	getch();
	return 0;
}