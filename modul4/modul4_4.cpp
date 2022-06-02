#include <iostream>
using namespace std;

int main() {
    int i, max, angka1 = 0, angka2 = 1, next = 0;

    cout << "Masukan jumlah maksimal : ";
    cin >> max;

    cout << "Angka Fibonacci : ";

    for (i = 1; i <= max; ++i) {
        if(i == 1) {
            cout << angka1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << angka2 << ", ";
            continue;
        }
        next = angka1 + angka2;
        angka1 = angka2;
        angka2 = next;
        
        cout << next << ", ";
    }
    cout << "\nAngka terakhir Fibonacci : " << angka2;
    return 0;
}