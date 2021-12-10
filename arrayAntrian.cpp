//arrayAntrian.cpp
//mendemonstrasikan antrian
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

class Antrian
{
    private:
        int ukuranMaks;
        vector<int> vectorAntrian;
        int depan;
        int belakang;
        int jumItem;

    public:
        //konstruktor
        Antrian(int s) : ukuranMaks(s), depan(0), belakang(-1), jumItem(0)
        { vectorAntrian.resize(ukuranMaks); }

		void sisip(int j) //menempatkan item di belakang antrian
        {
            if(belakang == ukuranMaks-1) 
                belakang = -1;

			//menginkremen belakang dan menyisipkan
            vectorAntrian[++belakang] = j; 
            jumItem++; //satu item lagi ditambah
        }

		int hapus() //menghapus item dari depan antrian
        {
            //membaca nilai dan menginkremen depan
			int temp = vectorAntrian[depan++]; 
            if(depan == ukuranMaks) 
                depan = 0;

			jumItem--; //satu item berkurang
            return temp;
        }

		int intipDepan() //mengintip di depan antrian
        { return vectorAntrian[depan]; }

		bool apaKosong() //true jika antrian kosong
        { return (jumItem==0); }

		bool apaPenuh() //true jika antrian penuh
        { return (jumItem==ukuranMaks); }

		int ukuran() //jumlah item dalam antrian
        { return jumItem; }
}; //akhir kelas Antrian

int main()
{
    Antrian antrian(5); //Antrian memuat 5 item

	antrian.sisip(10); //menyisipkan 4 item
    antrian.sisip(20);
    antrian.sisip(30);
    antrian.sisip(40);

	antrian.hapus(); //menghapus 3 item
    antrian.hapus(); // (10, 20, 30)
    antrian.hapus();

	antrian.sisip(50); //menyisipkan 4 item lagi
    antrian.sisip(60); 
    antrian.sisip(70);
    antrian.sisip(80);

	while( !antrian.apaKosong() ) //menghapus dan menampilkan
    { // semua item
        int n = antrian.hapus(); //(40, 50, 60, 70, 80)
        cout << n << " ";
    }
    cout << endl;

	getch();
    return 0;
} //akhir main()