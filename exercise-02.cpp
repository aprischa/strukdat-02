/*
Nama Program      : Temperature
Nama              : Aprischa Nauva
NPM               : 140810180063
Tanggal Buat      : 26 februari 2019
Deskripsi Program : Konversi Suhu
*/

#include <iostream>

using namespace std;

float konversiFahrenheit(int temp){
    return temp*9/5+32;
}

int main()
{
    int celcius;
    cout << "KONVERSI CELCIUS KE FAHRENHEIT"<<endl;
    cout << "Celcius    = ";
    cin >> celcius;
    cout << "Fahrenheit = " << konversiFahrenheit(celcius);
    return 0;
}
