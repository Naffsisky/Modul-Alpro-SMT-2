#include <iostream>
using namespace std;

int a, b, c;
float sin, cos, tan, cosec, sec, cot;
int main(){
    cout << "Menghitung Trigonometri Segitiga Siku-siku\n";
    cout << "Masukan panjang sisi segitiga : ";
    cin >> c;
    cout << "Masukan alas segitiga : ";
    cin >> b;
    cout << "Masukan tinggi segitiga : ";
    cin >> a;

    sin = a / c;
    cos = b / c;
    tan = a / b;
    cosec = 1 / sin;
    sec = 1 / cos;
    cot = 1 / tan;

    cout << "Sin : " << sin << endl;
    cout << "Cos : " << cos << endl;
    cout << "Tan : " << tan << endl;
    cout << "Cosec : " << cosec << endl;
    cout << "Sec : " << sec << endl;
    cout << "Cot : " << cot << endl;
    
    return 0;
}