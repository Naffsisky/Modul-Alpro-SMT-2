#include <iostream>
using namespace std;

char pilihan;
string nama, presiden;
long int ktp;

int main(){
cout << "Apakah anda ingin memilih presiden? (Y/N) : ";
cin >> pilihan;

if (pilihan== 'Y' || pilihan== 'y'){
    cout << "Masukkan Nama anda : ";
    cin >> nama;
    cout << "Masukkan Nama Presiden yang anda pilih : ";
    cin >> presiden;
    cout << "Masukkan No. KTP anda : ";
    cin >> ktp;
    cout << endl;

    cout << "Nama anda adalah " << nama << endl;
    cout << "Nama presiden yang anda pilih adalah " << presiden << endl;
    cout << "No. KTP anda adalah " << ktp << endl;
}
else if (pilihan== 'N' || pilihan== 'n'){
    cout << "Anda tidak memilih presiden" << endl;
}
else{
    cout << "Anda salah memasukan pilihan" << endl;
}

return 0;
}