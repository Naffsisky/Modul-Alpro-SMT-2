#include <iostream>
using namespace std;

int user, i, nilai, total, hasil;

int main() {
    cout << "Masukan jumlah banyaknya mahasiswa : ";
    cin >> user;
    for (i = 1; i <= user; i++) {
        cout << "Masukan nilai " << i << " : ";
        cin >> nilai;
        nilai = nilai + nilai;
        }
        hasil = nilai / user;
        cout << hasil << endl;
        cout << nilai << endl;
        cout << user << endl;
    return 0;
}