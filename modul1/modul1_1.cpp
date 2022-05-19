#include <iostream>
#include <conio.h>
using namespace std;

int user, i, nilai[50], total;
float hasil;

int main() {
    cout << "Masukan jumlah banyaknya mahasiswa : ";
    cin >> user;
    for (i = 0; i < user; i++) {
        cout << "Masukan nilai mahasiswa ke- " << i+1 << " : ";
        cin >> nilai[i];
        total += nilai[i];
        }

        cout << endl;
        hasil = total / user;
        cout << "Nilai rata-rata adalah : " << hasil << endl;
    
    return 0;
}
