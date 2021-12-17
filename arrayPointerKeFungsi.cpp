//arrayPointerKeFungsi.cpp
#include <iostream>
#include <conio.h>
using namespace std;

void Kuadrat (int&,int&);
void Kubik (int&, int&);
void Tukar (int&, int&); 
void GetNilai(int&, int&);
void TampilNilai(int, int);

int main()
{
    int nilSatu=1, nilDua=2;
    int pilihan, i;
	const int ArrayMaks = 5;
	void (*pArrayFungsi[ArrayMaks])(int&, int&);

    for (i=0; i < ArrayMaks; i++)
    {
        cout <<"(0)Keluar (1)Ubah Nilai (2)Kuadrat (3)Kubik (4)Tukar: ";
        cin >> pilihan;
        switch (pilihan)
        {
            case 1: pArrayFungsi[i] = GetNilai; break;
            case 2: pArrayFungsi[i] = Kuadrat; break;
            case 3: pArrayFungsi[i] = Kubik; break;
            case 4: pArrayFungsi[i] = Tukar; break;
            default: pArrayFungsi[i] = 0;
        }
    }

    for (i=0; i < ArrayMaks; i++)
    {
        if ( pArrayFungsi[i] == 0 )
            continue;
        pArrayFungsi[i](nilSatu,nilDua);
        TampilNilai(nilSatu,nilDua);
   }
 
    getch();
    return 0;
 }

void TampilNilai(int x, int y)
{
    cout << "x: " << x << " y: " << y << endl;
}

void Kuadrat (int & rX, int & rY)
{
    rX *= rX;
    rY *= rY;
}

void Kubik (int & rX, int & rY)
{
    int tmp;

    tmp = rX;
    rX *= rX;
    rX = rX * tmp;

    tmp = rY;
    rY *= rY;
    rY = rY * tmp;
}

void Tukar(int & rX, int & rY)
{
    int temp;
    temp = rX;
    rX = rY;
    rY = temp;
}

void GetNilai (int & rNilaiSatu, int & rNilaiDua)
{
    cout << "Nilai baru untuk nilSatu: ";
    cin >> rNilaiSatu;
    cout << "Nilai baru untuk nilDua: ";
    cin >> rNilaiDua;
}
