#include <iostream>
using namespace std;

int tinggi[100], berat[100], i, n;

int main(){
    cout << "\tProgram Pengumpulan Data Mahasiswa\n";
    cout << "Masukan banyak data : ";
    cin >> n;

    for (i = 1; i <= n; i++){
        cout << " Masukkan Tinggi badan mahasiswa ke-" << i << " : ";
        cin >> tinggi[i];
        cout << " Masukkan Berat badan mahasiswa ke-" << i << " : ";
        cin >> berat[i];
    }

    cout << "\n\n\tData Tinggi dan berat mahasiswa\n" << endl;

    for (i=1; i<=n; i++){
        cout << "Tinggi Mahasiswa ke-" << i << " : " << tinggi[i] << endl;
        cout << "Berat Mahasiswa ke-" << i << " : " << berat[i] << endl;
    }
}