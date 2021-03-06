//ArrayDuaDimensiRerata.cpp
//Menempatkan skor kuis untuk tiap mahasiswa ke dalam array dua-dimensi 
//Menghitung skor rerata untuk tiap mahasiswa.
//Menghitung skor rerata untuk tiap kuis.
//Menampilkan skor kuis dan reratanya.
#include <iostream>
#include <iomanip>
#include <conio.h>
const int JUMLAH_MAHASISWA = 4, JUMLAH_KUIS = 3;

void hitung_rerata_mahasiswa(const double nilai[][JUMLAH_KUIS], double rerata_mahasiswa[]);
//Prakondisi: konstanta global JUMLAH_MAHASISWA dan JUMLAH_KUIS
//merupakan dimensi dari array nilai. Tiap variabel indeks
//nilai[nomor_mahasiswa− 1, nomor_kuis− 1] memuat skor untuk mahasiswa nomor_mahasiswa 
//pada nomor_kuis.
//Pascakondisi: Setiap rerata_mahasiswa[nomor_mahasiswa− 1] memuat rerata untuk 
//nomor mahasiswa nomor_mahasiswa.

void hitung_rerata_kuis(const double nilai[][JUMLAH_KUIS], double rerata_kuis[]);
//Prakondisi: konstanta global JUMLAH_MAHASISWA dan JUMLAH_KUIS
//merupakan dimensi dari array nilai. Tiap variabel indeks
//nilai[nomor_mahasiswa− 1, nomor_kuis− 1] memuat skor untuk mahasiswa nomor_mahasiswa 
//pada nomor_kuis.
//Pascakondisi: Setiap rerata_kuis[nomor_kuis− 1] memuat rerata untuk
//nomor kuis nomor_kuis.

void tampil(const double nilai[][JUMLAH_KUIS],
const double rerata_mahasiswa[], const double rerata_kuis[]);
//Prakondisi: konstanta global JUMLAH_MAHASISWA dan JUMLAH_KUIS
//merupakan dimensi dari array nilai. Tiap variabel indeks
//nilai[nomor_mahasiswa− 1, nomor_kuis− 1] memuat skor untuk mahasiswa nomor_mahasiswa 
//pada nomor_kuis.
//Setiap rerata_mahasiswa[nomor_mahasiswa− 1] memuat rerata untuk 
//nomor mahasiswa nomor_mahasiswa.
//Setiap rerata_kuis[nomor_kuis− 1] memuat rerata untuk
//nomor kuis nomor_kuis.
//Pascakondisi: Semua data dalam array nilai, rerata_mahasiswa, 
//dan rerata_kuis akan ditampilkan.

int main( )
{
    using namespace std;
    double nilai[JUMLAH_MAHASISWA][JUMLAH_KUIS];
    double rerata_mahasiswa[JUMLAH_MAHASISWA];
    double rerata_kuis[JUMLAH_KUIS];

	nilai[0][0] = 78.5; nilai[0][1]=87.8; nilai[0][2]=76.8;
    nilai[1][0] = 88.5; nilai[1][1]=97.8; nilai[1][2]=86.8;
	nilai[2][0] = 67.2; nilai[2][1]=77.7; nilai[2][2]=66.5;
	nilai[3][0] = 88.7; nilai[3][1]=86.9; nilai[3][2]=79.7;

    hitung_rerata_mahasiswa(nilai, rerata_mahasiswa);
    hitung_rerata_kuis(nilai, rerata_kuis);
    tampil(nilai, rerata_mahasiswa, rerata_kuis);

	getch();
    return 0;
}

void hitung_rerata_mahasiswa(const double nilai[][JUMLAH_KUIS], double rerata_mahasiswa[])
{
    for (int nomor_mahasiswa = 1; nomor_mahasiswa <= JUMLAH_MAHASISWA; nomor_mahasiswa++)
    {//Memprosesu satu nomor_mahasiswa:
        double jum = 0;
        for (int nomor_kuis = 1; nomor_kuis <= JUMLAH_KUIS; nomor_kuis++)
            jum = jum + nilai[nomor_mahasiswa-1][nomor_kuis-1];
 
		//jum memuat penjumlahan atas tiap nilai skor 
		//untuk nomor mahasiswa nomor_mahasiswa.
        rerata_mahasiswa[nomor_mahasiswa-1] = jum/JUMLAH_KUIS;
        //Rerata untuk mahasiswa nomor_mahasiswa adalah nilai 
		//dari rerata_mahasiswa[nomor_mahasiswa-1]
    }
}


void hitung_rerata_kuis(const double nilai[][JUMLAH_KUIS], double rerata_kuis[])
{
    for (int nomor_kuis = 1; nomor_kuis <= JUMLAH_KUIS; nomor_kuis++)
    {//Memproses satu kuis (untuk semua mahasiswa):
        double jum = 0;
 
		for (int nomor_mahasiswa = 1; nomor_mahasiswa <= JUMLAH_MAHASISWA; nomor_mahasiswa++)
            jum = jum + nilai[nomor_mahasiswa-1][nomor_kuis-1];
 
		//jum memuat penjumlahan atas semua skor mahasiswa
		//untuk nomor kuis nomor_kuis.
        rerata_kuis[nomor_kuis-1] = jum/JUMLAH_MAHASISWA;
        //Rerata untuk kuis nomor_kuis 
		//adalah nilai dari rerata_kuis[nomor_kuis-1]
    }
}


void tampil(const double nilai[][JUMLAH_KUIS], const double rerata_mahasiswa[], const double rerata_kuis[])
{
    using namespace std;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << setw(10) << "Mahasiswa"
         << setw(5) << "Rerata"
         << setw(15) << "Kuis\n";
 
	for (int nomor_mahasiswa = 1; nomor_mahasiswa <= JUMLAH_MAHASISWA; nomor_mahasiswa++)
    {//menampilkan untuk satu nomor_mahasiswa:
        cout << setw(10) << nomor_mahasiswa
             << setw(5) << rerata_mahasiswa[nomor_mahasiswa-1] << " ";
 
		for (int nomor_kuis = 1; nomor_kuis <= JUMLAH_KUIS; nomor_kuis++)
            cout << setw(5) << nilai[nomor_mahasiswa-1][nomor_kuis-1];
 
		cout << endl;
    }
 
	cout << "Rerata kuis = ";
    for (int nomor_kuis = 1; nomor_kuis <= JUMLAH_KUIS; nomor_kuis++)
        cout << setw(5) << rerata_kuis[nomor_kuis-1];
 
	cout << endl;
}