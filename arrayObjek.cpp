//arrayObjek.cpp
//Elemen-elemen array sebagai objek-objek kelas
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;

class Orang
{
    private:
        string namaBelakang;
        string namaDepan;
        int usia;

    public:
        Orang(string belakang, string depan, int a) : //konstruktor
        namaBelakang(belakang), namaDepan(depan), usia(a)
        { }

		void tampilOrang()
        {
            cout << "Nama belakang: " << namaBelakang;
            cout << ", Nama depan: " << namaDepan;
            cout << ", usia: " << usia << endl;
        }

		string getBelakang() //membaca nama belakang
        { return namaBelakang; }
}; //akhir kelas Orang

class KelasDataArray
{
    private:
        vector<Orang*> v; //vector memuat pointer-pointer
        int jumElemen;    //jumlah item data

    public:
        KelasDataArray(int max) : jumElemen(0) //konstruktor
        { v.resize(max); } //menciptakan array

		~KelasDataArray() //destruktor
        {
            for(int j=0; j<jumElemen; j++) //menghapus tiap elemen
                delete v[j];
        }

		Orang* cari(string namaDicari)
        { //mencari nilai tertentu
            int j;
            for(j=0; j<jumElemen; j++) //untuk tiap elemen,
                if( v[j]->getBelakang() == namaDicari ) //ditemukan?
                    break; //keluar loop sebelum end

            if(j == jumElemen) //sampai akhir?
                return NULL; //ya, tidak ditemukan
            else
                return v[j]; //tidak, item ditemukan
        }; //akhir cari()

		//menempatkan Orang ke dalam array
        void sisip(string belakang, string depan, int usia)
        {
            v[jumElemen] = new Orang(belakang, depan, usia);
            jumElemen++; //menginkremen
        }

		bool hapus(string namaDicari) //menghapus objek Orang dari array
        {
	        int j;
            for(j=0; j<jumElemen; j++) //mencari
                if( v[j]->getBelakang() == namaDicari )
                    break;

			if(j==jumElemen) //tidak ditemukan
                return false;
            else //item ditemukan
            {
                delete v[j]; //menghapus objek Orang 
                for(int k=j; k<jumElemen; k++) //menggeser ke bawah
                    v[k] = v[k+1];
                jumElemen--; //mendekreman
                return true;
            }
        } //akhir hapus()

        void tampilArray() //menampilkan isi array
        {
            for(int j=0; j<jumElemen; j++) //untuk tiap elemen,
                v[j]->tampilOrang(); //menampilkan
        }
}; //akhir kelas KelasDataArray

int main()
{
    int ukuranMaks = 100; //ukuran array
    KelasDataArray arr(ukuranMaks); //array

	arr.sisip("Rismon", "Sianipar", 24); //sisip 10 items
    arr.sisip("Robert", "Tohonan", 37);
    arr.sisip("Rico", "Chandra", 43);
    arr.sisip("Rotua", "Marolop", 63);
    arr.sisip("Rini", "Meika", 21);
    arr.sisip("Eva", "Teti", 29);
    arr.sisip("Patricia", "Siahaan", 72);
    arr.sisip("Vivian", "Jozen", 54);
    arr.sisip("Jodi", "Pratama", 22);
    arr.sisip("Jonathan", "Sitanggang", 18);
    arr.tampilArray(); //menampilkan isi array

	string kunciPencarian = "Eva"; //mencari item
    cout << "Mencari Eva" << endl;
    Orang* ditemukan;
    ditemukan = arr.cari(kunciPencarian);

	if(ditemukan != NULL)
    {
        cout << "Ditemukan ";
        ditemukan->tampilOrang();
    }

	else
        cout << "Tidak ditemukan " << kunciPencarian << endl;

	cout << "Menghapus Rismon, Jodi, dan Rotua" << endl;
    arr.hapus("Rismon"); //menghapus 3 item
    arr.hapus("Jodi");
    arr.hapus("Rotua");
    arr.tampilArray(); //menampilkan array kembali

	getch();
    return 0;
} //akhir main()