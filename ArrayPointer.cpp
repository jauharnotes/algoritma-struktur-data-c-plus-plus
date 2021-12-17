//ArrayPointer.cpp
#include <iostream>
#include <conio.h>
using namespace std;

class Kucing
{
public:
    Kucing() { umurNya = 1; beratNya=5; }
    ~Kucing() {} // destruktor
    int GetUmur() const { return umurNya; }
    int GetBerat() const { return beratNya; }
    void SetUmur(int umur) { umurNya = umur; }

private:
    int umurNya;
    int beratNya;
};

int main()
{
    Kucing * Famili[500];
    int i;
    Kucing * pKucing;
    for (i = 0; i < 500; i++)
    {
        pKucing = new Kucing;
        pKucing->SetUmur(2*i +1);
        Famili[i] = pKucing;
    }

    for (i = 0; i < 500; i++)
    {
        cout << "Kucing #" << i+1 << ": ";
        cout << Famili[i]->GetUmur() << endl;
    }
 
	getch();
	return 0;
}