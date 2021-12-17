//ArrayIsiObjek.cpp
#include <iostream>
#include <conio.h>
using namespace std;

class Kucing
{
public:
    Kucing() { umurNya = 1; beratNya=5; }
    ~Kucing() {}
    int GetUmur() const { return umurNya; }
    int GetBerat() const { return beratNya; }
    void SetUmur(int umur) { umurNya = umur; }

private:
    int umurNya;
    int beratNya;
};

int main()
{
    Kucing arrayKucing[5];
    int i;
    for (i = 0; i < 5; i++)
        arrayKucing[i].SetUmur(2*i +1);

    for (i = 0; i < 5; i++)
    {
        cout << "Kucing #" << i+1<< ": ";
        cout << arrayKucing[i].GetUmur() << endl;
    }
 
	getch();
	return 0;
}