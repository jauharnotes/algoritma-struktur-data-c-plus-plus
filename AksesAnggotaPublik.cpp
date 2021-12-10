//AksesAnggotaPublik.cpp
#include <iostream>
#include <conio.h>

class Kucing // mendeklarasikan kelas Kucing
{
public: 
    int umurNya; // variabel anggota
    int beratNya; // variabel anggota
}; // perhatikan titik-koma

int main()
{
    Kucing Meonk;
    Meonk.umurNya = 5; // menugaskan kepada variabel anggota
    std::cout << "Meonk adalah kucing yang berumur " ;
    std::cout << Meonk.umurNya << " tahun.\n";
 
	getch();
	return 0;
}