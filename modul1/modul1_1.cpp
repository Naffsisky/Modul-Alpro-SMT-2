#include <iostream>
using namespace std;

float nilai;

int main(){
    cout << "\tMenghitung nilai jabatan\n";
    cout << "Masukan nilai : ";
    cin >> nilai;
    if (nilai >= 1 && nilai <= 5){
        cout << "Jabatan : Operator\n";
    }
    else if (nilai >= 6 && nilai <=8){
        cout << "Jabatan : Staff\n";
    }
    else if (nilai >= 8 && nilai <= 10){
        cout << "Jabatan : Eksekutif\n";
    }
    else if (nilai >= 11 && nilai <=13){
        cout << "Jabatan : Senior Eksekutif\n";
    }
    else if (nilai >= 14 && nilai <= 16){
        cout << "Jabatan : Asisten Manager\n";
    }
    else if (nilai >= 17 && nilai <= 20){
        cout << "Jabatan : Manager\n";
    }
    else{
        cout << "Jabatan tidak ditemukan!";
    }
    return 0;
}