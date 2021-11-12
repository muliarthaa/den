#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float a, b, c, hasil;
    cout<<endl;
    cout<< "menu pilihan : " << endl;
    cout<< "1. PENJUMLAHAN" << endl;
    cout<< "2. PENGURANGAN" << endl;
    cout<< "3. perkalian" << endl;
    cout<< "4. pembagian" << endl;
    cout<< endl;
    cout<< "masukan pilihan: ";
    cin>> a;

    cout<< "masukan angka pertama: ";
    cin>>b;
    cout<<"masukan angka ke-dua: ";
    cin>>c;

    if(a==1)
    {
        hasil= b+c;
        cout<< "hasilnya adalah "<< hasil<< endl;

    }
    else if(a==2)
    {
        hasil= b-c;
        cout<< "hasilnya adalah "<< hasil<< endl;

    }
    else if(a==3)
    {
        hasil= b*c;
        cout<< "hasilnya adalah "<< hasil << endl;
    }
    else if(a==4)
    {
        hasil= b/c;
        cout<< "hasilnya adalah "<< hasil<< endl;
    }
    else cout<< "ulangi masukan menu pilihan";
    getch ();
}