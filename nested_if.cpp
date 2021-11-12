#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float a, b, c, hasil;

    cout << "masukan pendapatan anda hari ini(dalam rupiah): Rp.";
    cin>> a;

    if(a <= 200000)
    {
        hasil = a * 0.1 + 10000;
    }
    else if( a >= 200000)
    {
        hasil = a * 0.15 + 20000;
    }
    else if( a >= 500000)
    {
        hasil = a * 0.2 + 30000;
    }
    else 
    {
        cout<< "masukan nilai yang benar!"<< endl;

    }

    cout<< "pendapatan bersih anda hari ini adalah Rp. " << hasil << " ,-" << endl;


}