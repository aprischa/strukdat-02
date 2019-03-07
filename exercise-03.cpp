/*
Nama Program      : Swap
Nama              : Aprischa Nauva
NPM               : 140810180063
Tanggal Buat      : 26 februari 2019
Deskripsi Program : Swap
*/

#include <iostream>
using namespace std;


void swap (int& x, int& y) {
    int temp;
    temp = x;
    x=y;
    y=temp;
}

int main() {
    int x,y;
    cout <<"x :";
    cin >>x;
    cout<<"y :";
    cin>>y;

    swap(x,y);

    cout<<"\nSWAP\n"<<endl;
    cout<<"X :"<<x<<endl;
    cout<<"Y :"<<y<<endl;

}
