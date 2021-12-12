//arrayAntrianTanpaJumItem.cpp
//mendemonstrasikan antrian tanpa variabel jumItem
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

    public:
        //konstruktor
        Antrian(int s) : ukuranMaks(s), depan(0), belakang(-1)
        { vectorAntrian.resize(ukuranMaks); }

        void sisip(int j) //menempatkan item di belakang antrian
        {
            if(belakang == ukuranMaks-1) 
                belakang = -1;

            //menginkremen belakang dan menyisipkan
            vectorAntrian[++belakang] = j; 
        }

        int hapus() //menghapus item dari depan antrian
        {
            //membaca nilai dan menginkremen depan
            int temp = vectorAntrian[depan++]; 
            if(depan == ukuranMaks) 
                depan = 0;
            return temp;
        }

        int intipDepan() //mengintip di depan antrian
        { return vectorAntrian[depan]; }

        bool apaKosong() //true jika antrian kosong
        { return (belakang+1==depan || (depan+ukuranMaks-1==belakang)); }

        bool apaPenuh() //true jika antrian penuh
        { return (belakang+2==depan || (depan+ukuranMaks-2==belakang)); }

        int ukuran() //jumlah item dalam antrian
        { 
			if(belakang >= depan) 
                return belakang-depan+1;
            else 
                return (ukuranMaks-depan) + (belakang+1);
        }
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

