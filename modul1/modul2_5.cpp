#include <iostream>
using namespace std;

int i, user, j;

int main(){
    cout << "Jumlah angka : ";
    cin >> user;
    for (i = 1; i <= user; i++){
        for (j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}