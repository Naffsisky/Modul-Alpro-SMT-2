#include <iostream>
using namespace std;

int i, user, j;

int main(){
    cout << "Jumlah bintang : ";
    cin >> user;
    for (i = 1; i <= user; i++){
        for (j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}