#include <iostream>
using namespace std;

int pilihan;
float k, luas, jari, ltotal, ktotal;

int main(){
    cout << "1. Luas lingkaran\n";
    cout << "2. Keliling lingkaran\n";
    cout << "3. Keduanya\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
            cout << "\nMasukan jari-jari : ";
            cin >> jari;
            cout << "\nLuas Lingkaran adalah " << 3.14*jari*jari << endl;
            break;
        case 2:
            cout << "\nMasukan jari-jari : ";
            cin >> jari;
            cout << "\nKeliling Lingkaran adalah " << 2*3.14*jari << endl;
            break;
        case 3:
            cout << "\nMasukan jari-jari : ";
            cin >> jari;
            ltotal = 3.14*jari*jari;
            ktotal = 2*3.14*jari;
            cout << "\nLuas Lingkaran adalah " << ltotal << endl;
            cout << "Keliling Lingkaran adalah " << ktotal << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia!\n";
    }
}