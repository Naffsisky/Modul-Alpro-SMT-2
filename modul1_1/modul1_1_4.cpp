#include <iostream>
using namespace std;

float pembelian, barang;

int main(){
    cout << "Masukan total pembelian : ";
    cin >> pembelian;
    cout << "Masukan total barang : ";
    cin >> barang;
        if (pembelian >= 500000 && barang > 5){
            cout << "Anda mendapat bonus setrika";
        }
        else if (pembelian >= 100000 && barang > 3){
            cout << "Anda mendapat bonus payung";
        }
        else if (pembelian >= 50000 && barang > 2){
            cout << "Anda mendapat bonus pena";
        }
        else {
            cout << "Anda tidak mendapat bonus";
        }
    return 0;
}