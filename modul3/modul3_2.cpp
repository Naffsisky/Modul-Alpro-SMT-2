#include <iostream>
using namespace std;


void hitung() {

    float nilai;

    cout << "Masukkan nilai : ";
    cin >> nilai;
    if (nilai >= 80){
        cout << "Nilai anda adalah A";
    }
    else if (nilai >= 75){
        cout << "Nilai anda adalah A-";
    }
    else if (nilai >= 70){
        cout << "Nilai anda adalah B+";
    }
    else if (nilai >= 66){
        cout << "Nilai anda adalah B";
    }
    else if (nilai >= 62){
        cout << "Nilai anda adalah B-";
    }
    else if (nilai >= 58){
        cout << "Nilai anda adalah C+";
    }
    else if (nilai >= 55){
        cout << "Nilai anda adalah C";
    }
    else if (nilai >= 51){
        cout << "Nilai anda adalah C-";
    }
    else {
        cout << "Nilai anda tidak sesuai";
    }
    
}

int main(){
    hitung();
    return 0;
}
