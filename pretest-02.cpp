/*
 Nama Program : pretest2
 Nama : Aprischa Nauva
 NPM : 140810180063
 Tanggal buat : 5 Maret 2019
 Deskripsi : pretest 2
 */

#include <iostream>

using namespace std;

void masuk(int arr[],int& n){
    cout << "Masukkan Panjang Data : ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}
void moveZTE(int arr[], int n)
{
    int count=0;
    for (int i=0; i<n;i++)
        if (arr[i] != 0)
            swap(arr[count++], arr[i]);
}
void hasil(int arr[],int n){
    cout << " -> Hasil  : " << endl;
    for (int i = 0;i<n;i++)
        cout << arr[i] << " ";
}


int main()
{
    int arr[100];
    int n;
    masuk(arr,n);
    moveZTE(arr,n);
    hasil(arr,n);
    
    return 0;
}

