//arrayPengurutanPenyisipan.cpp
//Mendemonstrasikan pengurutan penyisipan
#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

class ArrayPenyisipan
{
    private:
        vector<double> v; //vector v
        int jumElemen; //jumlah item data

    public:
        ArrayPenyisipan(int max) : jumElemen(0) //konstruktor
        {
            v.resize(max); //ukuran vector
        }

		void sisip(double nilai) //menempatkan elemen ke dalam array
        {
            v[jumElemen] = nilai; //menyisipkan
            jumElemen++; //menginkremen ukuran
        }

		void tampil() //menampilkan isi array
        {
            for(int j=0; j<jumElemen; j++) //untuk tiap elemen,
                cout << v[j] << " "; //menampilkan
            cout << endl;
        }

		void pengurutanPenyisipan()
        {
            int dalam, luar;
            for(luar=1; luar<jumElemen; luar++) //loop luar sebagai pembagi
            {
                double temp = v[luar]; //menghapus item yang ditandai
                dalam = luar; //menggeser

				while(dalam>0 && v[dalam-1] >= temp) //sampai satu lebih kecil,
                {
                    v[dalam] = v[dalam-1]; //menggeser item ke kanan
                    --dalam; //ke kiri satu posisi
                }
                v[dalam] = temp; //menyisipkan item yang ditandai
            } //akhir for
        } //akhir pengurutanPenyisipan()
}; //akhir kelas ArrayPenyisipan

int main()
{
    int ukuranMaks = 100; //ukuran array
    ArrayPenyisipan arr(ukuranMaks); //menciptakan array

	arr.sisip(77); //menyisipkan 10 item
    arr.sisip(99);
    arr.sisip(44);
    arr.sisip(55);
    arr.sisip(22);
    arr.sisip(88);
    arr.sisip(11);
    arr.sisip(00);
    arr.sisip(66);
    arr.sisip(33);
    arr.tampil(); //menampilkan array

	arr.pengurutanPenyisipan(); //melakukan pengurutan penyisipan

	arr.tampil(); //menampilkan array kembali

	getch();
	return 0;
} //akhir main()