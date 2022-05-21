#include <iostream>
using namespace std;

int pilihan;
float luas, s, volum;
int main(){
    cout << "\t* * * MENU * * *\n";
    cout << "1. Kubus\n";
    cout << "2. Limas\n";
    cout << "3. Prisma\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
        cout << "\t* * * Hitung * * *\n";
        cout << "1. Luas\n";
        cout << "2. Volume\n";
        cout << "3. Keduanya\n";
        cout << "Masukan pilihan : ";
        cin >> pilihan;
        switch(pilihan){
            case 1:
            cout << "Masukan panjang rusuk : ";
            cin >> s;
            luas = 6 * (s*s);
            cout << "Luas permukaan dari kubus dengan panjang rusuk " << s << " adalah " << luas;
            break;

            case 2:
            cout << "Masukan panjang rusuk : ";
            cin >> s;
            volum = s*s*s;
            cout << "Volume permukaan dari kubus dengan panjang rusuk " << volum << " adalah " << volum;
            break;

            case 3:
            cout << "Masukan panjang rusuk : ";
            cin >> s;
            luas = 6 * (s*s);
            volum = s*s*s;
            cout << "Luas permukaan dari kubus dengan panjang rusuk " << s << " adalah " << luas << endl;
            cout << "Volume permukaan dari kubus dengan panjang rusuk " << s << " adalah " << volum;
            break;
        }
        break;
    }
}