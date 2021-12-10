//anggotaDataStatis.cpp
#include <iostream>
#include <conio.h>
using namespace std;

class Kucing
{
public:
    Kucing(int umur):umurNya(umur){BrpBanyakKucing++; }
    virtual ~Kucing() { BrpBanyakKucing--; }
    virtual int GetUmur() { return umurNya; }
    virtual void SetUmur(int umur) { umurNya = umur; }
    static int BrpBanyakKucing;

private:
    int umurNya;
};

int Kucing::BrpBanyakKucing = 0;

int main()
{
    const int KucingMaks = 5; int i;
    Kucing *RumahKucing[KucingMaks];

    for (i = 0; i < KucingMaks; i++)
        RumahKucing[i] = new Kucing(i);

    for (i = 0; i < KucingMaks; i++)
    {
        cout << "Terdapat ";
        cout << Kucing::BrpBanyakKucing;
        cout << " kucing!" << endl;
        cout << "Menghapus kucing yang berumur ";
        cout << RumahKucing[i]->GetUmur();
        cout << " tahun" << endl;
        delete RumahKucing[i];
        RumahKucing[i] = 0;
    }
 
	getch();
	return 0;
}