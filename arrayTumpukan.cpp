//arrayTumpukan.cpp
//Mendemonstrasikan tumpukan menggunakan array.
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

class Tumpukan
{
    private:
        int ukuranMaks; //ukuran tumpukan vector
        vector<double> tumpukanVector; //tumpukan vector
        int atas; //atas dari tumpukan

    public:
        Tumpukan(int s) : ukuranMaks(s), atas(-1) //konstruktor
        {
            tumpukanVector.reserve(ukuranMaks); //ukuran vector
        }

	    void push(double j) //menempatkan item ke atas tumpukan
        {
            tumpukanVector[++atas] = j; //menginkremen atas,
        } //menyisipkan item

		double pop() //mengambil item dari atas
        {
            return tumpukanVector[atas--]; //mengakses item,
        } //mendekremen atas

		double peek() //menengok ke atas tumpukan
        {
            return tumpukanVector[atas];
        }

		bool apaKosong() //true jika tumpukan kosong
        {
            return (atas == -1);
        }

		bool apaPenuh() //true jika tumpukan penuh
        {
            return (atas == ukuranMaks-1);
        }
}; //akhir kelas Tumpukan

int main()
{
    Tumpukan tumpukan(10); //menciptakan tumpukan baru, ukuran 10
    tumpukan.push(20); //menempatkan item pada tumpukan
    tumpukan.push(40);
    tumpukan.push(60);
    tumpukan.push(80);

	while( !tumpukan.apaKosong() ) //sampai kosong,
    { //menghapus item dari tumpukan
        double nilai = tumpukan.pop();
        cout << nilai << " "; //menampilkan
    } //akhir while
    cout << endl;

	getch();
	return 0;
} //akhir main()