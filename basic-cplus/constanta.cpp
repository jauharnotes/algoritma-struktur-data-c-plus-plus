#include<iostream>
using namespace std;

#define PANJANG 8
#define LEBAR 5

int main()
{
    cout << "Panjang = " << PANJANG << endl;
    cout << "Lebar = " << LEBAR << endl;
    cout << "Luas (panjang*lebar) = " <<PANJANG*LEBAR << endl << endl;

    const string WEBSITE = "www.jauhar.com";
    const double IPK = 3.99;

    cout << "Sedang belajar bahasa c++ di " << WEBSITE << endl;
    cout << "Semoga dapat IPK " << IPK << endl;

    return 0;
}