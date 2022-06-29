#include <iostream>
using namespace std;

int user;
int main(){
    cout << "Masukan nomor bulan : ";
    cin >> user;
    switch (user){
        case 1:
            cout << user << " adalah bulan Januari\n";
            break;
        case 2:
            cout << user << " adalah bulan Februari\n";
            break;
        case 3:
            cout << user << " adalah bulan Maret\n";
            break;
        case 4:
            cout << user << " adalah bulan April\n";
            break;
        case 5:
            cout << user << " adalah bulan Mei\n";
            break;
        case 6:
            cout << user << " adalah bulan Juni\n";
            break;
        case 7:
            cout << user << " adalah bulan Juli\n";
            break;
        case 8:
            cout << user << " adalah bulan Agustus\n";
            break;
        case 9:
            cout << user << " adalah bulan September\n";
            break;
        case 10:
            cout << user << " adalah bulan Oktober\n";
            break;
        case 11:
            cout << user << " adalah bulan November\n";
            break;
        case 12:
            cout << user << " adalah bulan Desember\n";
            break;
        default:
            cout << user << " adalah Bulan tidak ditemukan!";
            break;
    }
    return 0;
}
