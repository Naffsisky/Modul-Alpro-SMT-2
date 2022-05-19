#include <iostream>
using namespace std;

int user, i;

int main() {
    cout << "Masukan nilai maksimal : ";
    cin >> user;
    for (i = 1; i <= user; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    return 0;
}