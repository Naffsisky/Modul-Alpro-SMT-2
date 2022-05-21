#include <iostream>
using namespace std;

float luas_persegi_panjang,keliling_persegi_panjang,luas_bujur_sangkar,keliling_bujur_sangkar,luas_segitiga,keliling_segitiga;
int panjang, lebar, alas, tinggi, sisi, pilihan;


int main(){
cout<< "Program menghitung luas dan keliling"<< endl;
cout<< "1. Persegi panjang"<< endl;
cout<< "2. Segitiga"<< endl;
cout<< "3. Bujur sangkar"<< endl;
cout << "Masukan pilihan : ";
cin >> pilihan;

switch (pilihan){
    case 1:
    cout << "\tMenghitung luas dan keliling persegi panjang\n";
    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar : ";
    cin >> lebar;
    luas_persegi_panjang = panjang * lebar;
    keliling_persegi_panjang = 2 * (panjang + lebar);
    cout << "luas persegi panjang adalah : " << luas_persegi_panjang << endl;
    cout << "keliling persegi panjang adalah : " << keliling_persegi_panjang << endl;
    break;

    case 2:
    cout << "\tMenghitung luas dan keliling segitiga\n";
    cout << "Masukkan alas : ";
    cin >> alas;
    cout << "Masukkan tinggi : ";
    cin >> tinggi;
    luas_segitiga = (alas * tinggi) / 2;
    keliling_segitiga = alas + alas + alas;
    cout << "luas segitiga adalah : " << luas_segitiga << endl;
    cout << "keliling segitiga adalah : " << keliling_segitiga << endl;
    break;

    case 3:
    cout << "\tMenghitung luas dan keliling bujur sangkar\n";
    cout << "Masukkan sisi : ";
    cin >> sisi;
    luas_bujur_sangkar = sisi * sisi;
    keliling_bujur_sangkar = 4 * sisi;
    cout << "luas bujur sangkar adalah : " << luas_bujur_sangkar << endl;
    cout << "keliling bujur sangkar adalah : " << keliling_bujur_sangkar << endl;
    break;
    }
    return 0;
}

