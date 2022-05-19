#include <iostream>
using namespace std;

int user, i, nilai, total, hasil;

int main() {
    cout << "Masukan banyaknya jumlah mata kuliah : ";
    cin >> user;
    for (i = 1; i <= user; i++) {
        cout << "Masukan nilai mahasiswa " << i << " : ";
        cin >> nilai;
        total += nilai;
        }
        hasil = total / user;
        cout << "\nHasil rata-rata nilai mahasiswa adalah " << hasil << endl;
    return 0;
}
