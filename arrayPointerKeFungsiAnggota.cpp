//arrayPointerKeFungsiAnggota.cpp
#include <iostream>
#include <conio.h>
using std::cout;
using std::endl;

class Anjing
{
public:
    void Bicara()const { cout << "Guk Guk!" << endl; }
    void Bergerak() const { cout << "Mencari perhatian..." << endl; }
    void Makan() const { cout << "Menelan makanan..." << endl; }
    void Mengendus() const { cout << "Shhhgrrgrg" << endl; }
    void Mengeluh() const { cout << "Mengeluh..." << endl; }
    void Berguling() const { cout << "Berguling-guling..." << endl; }
    void Pura_PuraMati() const
    { cout << "Bermain pura-pura mati" << endl; }
};

typedef void (Anjing::*PDF)()const ;

int main()
{
    const int FungsiMaks = 7;
    PDF FungsiAnjing[FungsiMaks] =
    {&Anjing::Bicara,
     &Anjing::Bergerak,
     &Anjing::Makan,
     &Anjing::Mengendus,
     &Anjing::Mengeluh,
     &Anjing::Berguling,
     &Anjing::Pura_PuraMati };

     Anjing* pAnjing =0;
 
	 int Metode;
     bool fKeluar = false;

    while (!fKeluar)
    {
        cout << "(0)Keluar (1)Bicara (2)Bergerak (3)Makan (4)Mengendus";
        cout << " (5)Mengeluh (6)Berguling (7)Pura-Pura Mati: ";
        std::cin >> Metode;
        if (Metode <= 0 || Metode >= 8)
        {
            fKeluar = true;
        }

        else
        {
            pAnjing = new Anjing;
            (pAnjing->*FungsiAnjing[Metode-1])();
            delete pAnjing;
        }
    }
 
	getch();
	return 0;
}