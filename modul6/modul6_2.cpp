#include <iostream>
using namespace std;

int i, a;
string nama;

int main(){
    cout << "Masukan huruf : ";
    cin >> nama;
    i = nama.length()-1;
    for ( i = i; i >= 0; i--){
        for (a = 0; a <= i; a++){
            cout << nama[a];
        }
        cout << endl;
    }
    return 0;
}