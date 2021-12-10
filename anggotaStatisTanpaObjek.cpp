//anggotaStatisTanpaObjek.cpp
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

void FungsiTelepati();

int main()
{
    const int KucingMaks = 5; int i;
    Kucing *RumahKucing[KucingMaks];

    for (i = 0; i < KucingMaks; i++)
	{
        RumahKucing[i] = new Kucing(i);
		FungsiTelepati();
	}

    for (i = 0; i < KucingMaks; i++)
    {
        delete RumahKucing[i];
        FungsiTelepati();
    }
 
    getch();
    return 0;
}

void FungsiTelepati()
{
    cout << "Terdapat ";
    cout << Kucing::BrpBanyakKucing << " kucing hidup!" << endl;
}
