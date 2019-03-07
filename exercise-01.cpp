/*
 Nama Program : Fizz Buzz
 Nama         : Aprischa Nauva
 NPM          : 140810180063
 Tanggal buat : 26 Februari 2019
 Deskripsi    : fizz == 3; buzz ==5; fizzbuzz==3==5

 */

#include <iostream>
using namespace std;

void fizzbuzz () {
    for(int i=1;i<=100;i++){
        if(i%3==0)cout<<"Fizz"<<endl;
        else if(i%5==0)cout<<"Buzz"<<endl;
        else if(i%15==0)cout<<"FizzBuzz"<<endl;
        else cout<<i<<endl;
    }}

int main() {

    fizzbuzz();
    }
