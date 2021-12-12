//arrayAntrianPrioritas.cpp
//mendemonstrasikan antrian prioritas
#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

class AntrianPrioritas
{
    //vector dalam tatanan terurut, 
	//dari maks pada 0 sampai min pada ukuran-1
    private:
        int ukuranMaks;
        vector<double> vectorAntrian;
        int jumItem;

    public:
		//konstruktor
        AntrianPrioritas(int s) : ukuranMaks(s), jumItem(0) 
        { vectorAntrian.resize(ukuranMaks); }

		void sisip(double item) //menyisipkan item
        {
            int j;
            if(jumItem==0) //jika tida ada item,
                vectorAntrian[jumItem++] = item; //sisip pada 0
            else //jika ada,
            {
                for(j=jumItem-1; j>=0; j--) //mulai di akhir,
                {
	                //jika item baru lebih besar,
					if( item > vectorAntrian[j] ) 
                        vectorAntrian[j+1] = vectorAntrian[j]; 
                    else //jika lebih kecil,
                        break; 
                } //akhir for
                vectorAntrian[j+1] = item; //menyisipkan item
                jumItem++;
            } //akhir else (jumItem > 0)
        } //akhir sisip()

		double hapus() //menghapus item minimum
        { return vectorAntrian[--jumItem]; }

		double intipMin() //mengintip pada item minimum
        { return vectorAntrian[jumItem-1]; }

		bool apaKosong() //true jika antrian kosong
        { return (jumItem==0); }

		bool apaPenuh() //true jika antrian penuh
        { return (jumItem == ukuranMaks); }
}; //akhir kelas AntrianPrioritas

int main()
{
    AntrianPrioritas antrianP(5); //antrian prioritas, ukuran 5

	antrianP.sisip(30); //penyisipan tak-terurut
    antrianP.sisip(50);
    antrianP.sisip(10);
    antrianP.sisip(40);
    antrianP.sisip(20);

	while( !antrianP.apaKosong() )
    { //penghapusan terurut
        double item = antrianP.hapus();
        cout << item << " "; //10, 20, 30, 40, 50
    } //akhir while

	cout << endl;

	getch();
	return 0;
} //akhir main()