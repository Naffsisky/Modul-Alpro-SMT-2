#include <iostream>
using namespace std;

int pilihan;
float hasil, s, a, t;

int main(){
    cout << "\t* * * MENU * * *\n";
    cout << "1. Luas persegi\n";
    cout << "2. Luas segitiga\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    if (pilihan == 1){
        cout << "Masukan sisi : ";
        cin >> s;
        hasil = s*s;
        cout << "Luas persegi adalah " << hasil;
    }
    else if (pilihan == 2){
        cout << "Masukan alas : ";
        cin >> a;
        cout << "Masukan tinggi : ";
        cin >> t;
        hasil = (a * t) / 2;
        cout << "Luas segitiga adalah : " << hasil; 
    }
    else{
        cout << "Pilihan tidak ada";
    }
    return 0;
}