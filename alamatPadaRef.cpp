//alamatPadaRef.cpp
#include <iostream>
#include <conio.h>

int main()
{
    using namespace std;
    int intSatu;
    int &rSuatuRef = intSatu;

    intSatu = 5;
    cout << "intSatu: " << intSatu << endl;
    cout << "rSuatuRef: " << rSuatuRef << endl;

    cout << "&intSatu: " << &intSatu << endl;
    cout << "&rSuatuRef: " << &rSuatuRef << endl;

    getch();
	return 0;
}