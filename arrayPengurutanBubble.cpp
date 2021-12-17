//arrayPengurutanBubble.cpp
//Mendemonstrasikan pengurutan Bubble
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

class ArrayBub
{
    private:
        vector<double> v; //vector v
        int jumElemen; //jumlah item data

	void tukar(int satu, int dua) //fungsi anggota private
    {
        double temp = v[satu];
        v[satu] = v[dua];
        v[dua] = temp;
    }

    public:
        ArrayBub(int maks) : jumElemen(0) //konstruktor
        {
            v.resize(maks); //ukuran vector
        }

		void sisip(double nilai) //menempatkan elemen ke dalam array
        {
            v[jumElemen] = nilai; //menyisipkan
            jumElemen++; //mengdalamkremen ukuran
        }

	    void tampil() //menampilkan isi array
        {
            for(int j=0; j<jumElemen; j++) //untuk tiap elemen,
                cout << v[j] << " "; //menampilkan
            cout << endl;
    }

	void pengurutanBubble() //mengurutkan array
    {
        int luar, dalam;
        
		for(luar=jumElemen-1; luar>1; luar--) //loop luar (mundur)
            for(dalam=0; dalam<luar; dalam++) //loop dalam (maju)
                if( v[dalam] > v[dalam+1] )   //tidak terurut?
                    tukar(dalam, dalam+1); //tukar them
    } //akhir pengurutanBubble()
}; //akhir kelas ArrayBub

int main()
{
    int ukuranMaks = 100; //ukuran array
    ArrayBub arr(ukuranMaks); //menciptakan array

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
    arr.pengurutanBubble(); //melakukan pengurutan Bubble
    arr.tampil(); //menampilkan array

	getch();
	return 0;
} //akhir main()