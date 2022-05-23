#include <iostream>
using namespace std;

float nilai;

int main(){
    cout << "Masukan nilai : ";
    cin >> nilai;
    if (nilai >= 0 && nilai <= 34){
        cout << "Anda mendapat nilai E";
    }
    else if (nilai >= 35 && nilai <= 49){
        cout << "Anda mendapat nilai D";
    }
    else if (nilai >= 50 && nilai <= 64){
        cout << "Anda mendapat nilai C";
    }
    else if (nilai >= 65 && nilai <= 79){
        cout << "Anda mendapat nilai B";
    }
    else if (nilai >= 80 && nilai <= 100){
        cout << "Anda mendapat nilai A";
    }
    else{
        cout << "Nilai tidak ditemukan!";
    }
    return 0;
}