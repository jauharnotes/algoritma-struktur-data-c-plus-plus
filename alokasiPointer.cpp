//alokasiPointer.cpp
//mengalokasikan dan menghapus sebuah pointer
#include <iostream>
#include <conio.h>

int main()
{
    using namespace std;
    int variabelLokal = 5;
    int * pLokal= &variabelLokal;
    int * pHeap = new int;
    *pHeap = 7;
 
	cout << "variabelLokal: " << variabelLokal << endl;
    cout << "*pLokal: " << *pLokal << endl;
    cout << "*pHeap: " << *pHeap << endl;
 
	delete pHeap;
 
	pHeap = new int;
    *pHeap = 9;
    cout << "*pHeap: " << *pHeap << endl;
    delete pHeap;
 
	getch();
	return 0;
}