//arrayInteger.cpp
#include <iostream>
#include <conio.h>

int main()
{
    int arrayKu[5]; // Array memuat 5 integer
    int i;
    for ( i=0; i<5; i++) // 0-4
    {
        std::cout << "Nilai untuk arrayKu[" << i << "]: ";
        std::cin >> arrayKu[i];
    }
 
	for (i = 0; i<5; i++)
        std::cout << i << ": " << arrayKu[i] << std::endl;
 
	getch();
	return 0;
}