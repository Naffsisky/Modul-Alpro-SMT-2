#include <iostream>
using namespace std;

int main(){
    int input, hitung, output, hasil;

    hitung = 2;
    output = 0;
    cout << "Masukan jumlah maksimal : ";
    cin >> input;
    while (output < input){
        hasil = 0;
        for (int i = 1; i <= hitung; i++){
            if (hitung % i == 0){
                hasil++;
            }
        }
        if (hasil == 2){
            cout << hitung << " ";
            output++;
        }
        hitung++;
    }
}