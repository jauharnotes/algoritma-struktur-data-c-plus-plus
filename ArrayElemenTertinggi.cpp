 //Membaca 5 skor dan menunjukkan bagaimana setiap skor
 //berbeda dari skor tertinggi
 #include <iostream>
 #include <conio.h>
 using namespace std;

 int main( )
 {
     using namespace std;
     int i, skor[5], maks;
     cout << "Masukkan 5 skor:\n";
     cin >> skor[0];
     maks = skor[0];
 
	 for (i = 1; i < 5; i++)
     {
         cin >> skor[i];
         if (skor[i] > maks)
             maks = skor[i];
             //maks merupakan elemen tertinggi dari skor[0],..., skor[i].
     }
 
	 cout << "Skor tertinggi adalah " << maks << endl
          << "Daftar skor dan selisihnya dari \n"
          << "skor tertinggi adalah:\n";
 
	 for (i = 0; i < 5; i++)
		 cout << skor[i] << ", selisih dari elemen tertinggi adalah: "  << (maks - skor[i]) << endl;
 
	 getch();

	 return 0;
 }