#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;

float sudut, phi, gravitasi, v, rad, jarak;
int main(){
    phi = 3.14;
    gravitasi = 9.8;

    cout << "Masukan sudut (derajat) : ";
    cin >> sudut;
    cout << "Masukan kecepatan : ";
    cin >> v;

    rad = sudut * phi / 180;
    jarak = 2 * pow(v, 2) * sin(rad) * cos(rad) / gravitasi;
    cout << "Nilai gravitasi adalah : " << gravitasi << endl;
    cout << "Jarak peluru ke tempat terbang adalah : " << jarak << endl;

    return 0;
}
