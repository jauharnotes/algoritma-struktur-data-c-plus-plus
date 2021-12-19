//arrayTumpukanBalikKarakter.cpp
//Tumpukan dipakai untuk membalik sebuah kata
#include <iostream>
#include <vector>
#include <string>
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

class Pembalik
{
    private:
        string masukan;  //string masukan
        string keluaran; //string keluaran

    public:
        Pembalik(string in) : masukan(in) //konstruktor
        { }

		string lakukanPembalikan() //membalikkan kata
        {
            int ukuranTumpukan = masukan.length(); //membaca ukuran tumpukan maks
            Tumpukan tumpukan(ukuranTumpukan); //menciptakan tumpukan

			for(int j=0; j<masukan.length(); j++)
            {
                char ch = masukan[j]; //membaca sebuah char dari masukan
                tumpukan.push(ch); //menempatkan pada tumpukan
            }
            keluaran = "";
            
			while( !tumpukan.apaKosong() )
            {
                char ch = tumpukan.pop(); //menghapus sebuah char,
                keluaran = keluaran + ch; //menempelkan pada keluaran
            }
            return keluaran;
        } //akhir lakukanPembalikan()
}; //akhir kelas Pembalik

int main()
{
    string masukan, keluaran;

	while(true)
    {
		cout << "Masukkan sebuah kata: ";
        cin >> masukan; //membaca sebuah kata
        if( masukan.length() < 2 ) //keluar jika satu karakter
            break;

		//menciptakan sebuah Pembalik
        Pembalik pembalik(masukan);
        keluaran = pembalik.lakukanPembalikan(); 
		cout << "Dibalik: " << keluaran << endl;
    } //akhir while

	getch();
	return 0;
} //akhir main()