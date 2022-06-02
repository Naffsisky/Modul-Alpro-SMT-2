#include <iostream>
using namespace std;

float nilai;

int main() {

    cout << "Masukkan nilai : ";
    cin >> nilai;

    if (nilai == 0.00){
    cout << "Nilai anda adalah E";
    }
    else if (nilai <= 1.00){
    cout << "Nilai anda adalah D";
    }
    else if (nilai <= 2.00){
    cout << "Nilai anda adalah C";
    }
    else if (nilai <= 3.00){
    cout << "Nilai anda adalah B";
    }
    else if (nilai <= 4.00){
    cout << "Nilai anda adalah A";
    }
    else {
        cout << "Nilai yang anda masukkan tidak sesuai";
    }
    return 0;
}