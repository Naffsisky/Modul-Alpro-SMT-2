#include <iostream>
using namespace std;

int usia;

int main(){

cout << "Masukkan usia anda : ";
cin >> usia;

    if (usia >= 1 && usia <= 16){
        cout << " Anak- Anak" << endl;
    }
    else if (usia >= 17 && usia <= 25){
        cout << " Remaja" << endl;
    }
    else if (usia >= 26 && usia <= 45){
        cout << " Dewasa" << endl;
    }
    else if (usia>=45){
        cout << " tua banget" << endl;
    }
    else{
        cout << " usia anda tidak valid" << endl;
    }

    return 0;
}