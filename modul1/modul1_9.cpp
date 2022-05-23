#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int hasil, tebak, angka;

int main(){
    cout << "\t * * * GAME TEBAK ANGKA * * *\n";
    cout << "Masukan tebakan angka dari 0 - 99 : ";
    cin >> tebak;
    srand(time(0));
    for (angka=0; angka <100; angka++){
        hasil = (rand() % 100);
        if (hasil == tebak){
            cout << "Selamat anda menang!\n";
            cout << "Angka yang benar adalah " << hasil;
            break;
        }
        else if (angka == 99){
            cout << "Anda kalah!";
            cout << "Angka yang benar adalah " << hasil;
        }
    }
    return 0;
}