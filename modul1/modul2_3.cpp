#include <iostream>
using namespace std;

int user, i, tgenap, tganjil, tsgenap, tsganjil;

int main() {
    cout << "Masukan nilai maksimal : ";
    cin >> user;
    cout << "Angka Genap : ";
    for (i = 1; i <= user; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            tgenap = tgenap + 1;
            tsgenap = tsgenap + i;
        }
    }
    cout << "\nTotal angka banyak angka genap : " << tgenap;
    cout << "\nTotal hasil penjumlahan seluruh angka genap : " << tsgenap;
    cout << "\n\nAngka Ganjil : ";
    for (i = 1; i <= user; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            tganjil = tganjil + 1;
            tsganjil = tsganjil + i;
        }
    }
    cout << "\nTotal angka banyak angka ganjil : " << tganjil;
    cout << "\nTotal hasil penjumlahan seluruh angka ganjil : " << tsganjil;

    return 0;
}