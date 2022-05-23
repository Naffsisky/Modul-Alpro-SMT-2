#include <iostream>
using namespace std;

int pilihan;
float luas, s, volum, a, t;
int main(){
    cout << "\t* * * MENU * * *\n";
    cout << "1. Kubus\n";
    cout << "2. Limas\n";
    cout << "3. Prisma\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        // kubus
        case 1:
        cout << "\t* * * Hitung * * *\n";
        cout << "1. Luas\n";
        cout << "2. Volume\n";
        cout << "3. Keduanya\n";
        cout << "Masukan pilihan : ";
        cin >> pilihan;
        switch(pilihan){
            case 1:
            cout << "\nMasukan panjang rusuk : ";
            cin >> s;
            luas = 6 * (s*s);
            cout << "Luas permukaan dari kubus dengan panjang rusuk " << s << " adalah " << luas;
            break;

            case 2:
            cout << "\nMasukan panjang rusuk : ";
            cin >> s;
            volum = s*s*s;
            cout << "Volume permukaan dari kubus dengan panjang rusuk " << volum << " adalah " << volum;
            break;

            case 3:
            cout << "\nMasukan panjang rusuk : ";
            cin >> s;
            luas = 6 * (s*s);
            volum = s*s*s;
            cout << "Luas permukaan dari kubus dengan panjang rusuk " << s << " adalah " << luas << endl;
            cout << "Volume permukaan dari kubus dengan panjang rusuk " << s << " adalah " << volum;
            break;
        }
        break;
        // limas
        case 2:
        cout << "\t* * * Limas * * *\n";
        cout << "1. Limas Segitiga\n";
        cout << "2. Limas Segiempat\n";
        cout << "3. Limas Segilima\n";
        cout << "4. Limas Segienam\n";
        cout << "Masukan pilihan : ";
        cin >> pilihan;
        switch(pilihan){
            // limas segitiga
            case 1:
            cout << "\t* * * Hitung * * *\n";
            cout << "1. Luas\n";
            cout << "2. Volume\n";
            cout << "3. Keduanya\n";
            cout << "Masukan pilihan : ";
            cin >> pilihan;
            switch(pilihan){
                case 1:
                cout << "\nMasukan panjang alas : ";
                cin >> a;
                cout << "Masukan tinggi : ";
                cin >> t;
                cout << "Masukan luas sisi tegak : ";
                cin >> s;
                luas = (1/2 * a * t) + (3 * s);
                cout << "Luas permukaan dari limas segitiga dengan panjang alas " << a << ", tinggi " << t << " dan luas sisi tegak " << s << " adalah " << luas;
                break;

                case 2:
                cout << "\nMasukan panjang alas : ";
                cin >> a;
                cout << "Masukan tinggi : ";
                cin >> t;
                volum = 1/3 * (1/2 * a * t) * t;
                cout << "Volume permukaan dari limas segitiga dengan panjang alas " << a << ", tinggi " << t << " adalah " << volum;
                break;

                case 3:
                cout << "\nMasukan panjang alas : ";
                cin >> a;
                cout << "Masukan tinggi : ";
                cin >> t;
                cout << "Masukan luas sisi tegak : ";
                cin >> s;
                luas = (1/2 * a * t) + (3 * s);
                volum = 1/3 * (1/2 * a * t) * t;
                cout << "Luas permukaan dari limas segitiga dengan panjang alas " << a << ", tinggi " << t << " dan luas sisi tegak " << s << " adalah " << luas << endl;
                cout << "Volume permukaan dari limas segitiga dengan panjang alas " << a << ", tinggi " << t << " adalah " << volum;
                break;
            }
        break;
            // limas segiempat
        case 2:
            cout << "\t* * * Hitung * * *\n";
            cout << "1. Luas\n";
            cout << "2. Volume\n";
            cout << "3. Keduanya\n";
            cout << "Masukan pilihan : ";
            cin >> pilihan;
            switch(pilihan){
                case 1:
                cout << "\nMasukan sisi alas : ";
                cin >> a;
                cout << "Masukan luas sisi tegak : ";
                cin >> s;
                luas = (s * s) + (4 * s);
                cout << "Luas permukaan dari limas segiempat dengan sisi alas " << a << " dan luas sisi tegak " << s << " adalah " << luas;
                break;

                case 2:
                cout << "\nMasukan sisi alas : ";
                cin >> a;
                cout << "Masukan tinggi : ";
                cin >> t;
                volum = 1/3 * (s * s) * t;
                cout << "Volume permukaan dari limas segiempat dengan sisi alas " << a << " dan tinggi " << t << " adalah " << volum;
                break;

                case 3:
                cout << "\nMasukan sisi alas : ";
                cin >> a;
                cout << "Masukan tinggi : ";
                cin >> t;
                cout << "Masukan luas sisi tegak : ";
                cin >> s;
                luas = (s * s) + (4 * s);
                volum = 1/3 * (s * s) + (4 * s);
                cout << "Luas permukaan dari limas segiempat dengan panjang alas " << a << ", tinggi " << t << " dan luas sisi tegak " << s << " adalah " << luas << endl;
                cout << "Volume permukaan dari limas segiempat dengan panjang alas " << a << ", tinggi " << t << " adalah " << volum;
                break;
            }
        break;
            // limas segilima
        case 3:
            cout << "\t * * * Hitung * * *\n";
            cout << "1. Luas\n";
            cout << "2. Volume\n";
            cout << "3. Keduanya\n";
            cout << "Masukan Pilihan : ";
            cin >> pilihan;
            switch(pilihan){
                case 1:
                cout << "\nMasukan sisi alas : ";
                cin >> a;
                cout << "Masukan luas sisi tegak : ";
                cin >> s;
                luas = (1.72 * s * s) + (5 * s);
                cout << "Luas permukaan dari limas segilima dengan sisi alas " << a << " dan luas sisi tegak " << s << " adalah " << luas;
                break;

                case 2:
                cout << "\nMasukan sisi alas : ";
                cin >> a;
                cout << "Masukan tinggi : ";
                cin >> t;
                volum = 1/3 * (1.72 * s * s) * t;
                cout << "Volume permukaan dari limas segilima dengan sisi alas " << a << " dan tinggi " << t << " adalah " << volum;
                break;

                case 3:
                cout << "\nMasukan sisi alas : ";
                cin >> a;
                cout << "Masukan tinggi : ";
                cin >> t;
                cout << "Masukan luas sisi tegak : ";
                cin >> s;
                luas = (1.72 * s * s) + (5 * s);
                volum = 1/3 * (1.72 * s * s) * t;
                cout << "Luas permukaan dari limas segilima dengan panjang alas " << a << ", tinggi " << t << " dan luas sisi tegak " << s << " adalah " << luas << endl;
                cout << "Volume permukaan dari limas segilima dengan panjang alas " << a << ", tinggi " << t << " adalah " << volum;
                break;
            }
        break;
            // limas segienam
        case 4:
            cout << "\t * * * Hitung * * *\n";
            cout << "1. Luas\n";
            cout << "2. Volume\n";
            cout << "3. Keduanya\n";
            cout << "Masukan Pilihan : ";
            cin >> pilihan;
            switch(pilihan){
                case 1:
                cout << "\nMasukan sisi alas : ";
                cin >> a;
                cout << "Masukan luas sisi tegak : ";
                cin >> s;
                luas = (2.598 * s * s) + (6 * s);
                cout << "Luas permukaan dari limas segienam dengan sisi alas " << a << " dan luas sisi tegak " << s << " adalah " << luas;
                break;

                case 2:
                cout << "\nMasukan sisi alas : ";
                cin >> a;
                cout << "Masukan tinggi : ";
                cin >> t;
                volum = 1/3 * (2.598 * s * s) * t;
                cout << "Volume permukaan dari limas segienam dengan sisi alas " << a << " dan tinggi " << t << " adalah " << volum;
                break;

                case 3:
                cout << "\nMasukan sisi alas : ";
                cin >> a;
                cout << "Masukan tinggi : ";
                cin >> t;
                cout << "Masukan luas sisi tegak : ";
                cin >> s;
                luas = (2.598 * s * s) + (6 * s);
                volum = 1/3 * (2.598 * s * s) * t;
                cout << "Luas permukaan dari limas segienam dengan panjang alas " << a << ", tinggi " << t << " dan luas sisi tegak " << s << " adalah " << luas << endl;
                cout << "Volume permukaan dari limas segienam dengan panjang alas " << a << ", tinggi " << t << " adalah " << volum;
                break;
            }
        break;
        }
        break;
        // prisma
        case 3:
        cout << "\t* * * Hitung * * *\n";
        cout << "1. Luas\n";
        cout << "2. Volume\n";
        cout << "3. Keduanya\n";
        cout << "Masukan pilihan : ";
        cin >> pilihan;
        switch(pilihan){
            case 1:
            cout << "\nMasukan luas alas : ";
            cin >> a;
            cout << "Masukan tinggi : ";
            cin >> t;
            cout << "Masukan keliling alas : ";
            cin >> s;
            luas = (2 * a) + (s * t);
            cout << "Luas permukaan dari prisma dengan luas alas " << a << ", tinggi " << t << " dan keliling alas " << s << " adalah " << luas;
            break;

            case 2:
            cout << "\nMasukan luas alas : ";
            cin >> a;
            cout << "Masukan tinggi : ";
            cin >> t;
            volum = a * t;
            cout << "Volume permukaan dari prisma dengan luas alas " << a << " dan tinggi " << t << " adalah " << volum;
            break;

            case 3:
            cout << "\nMasukan luas alas : ";
            cin >> a;
            cout << "Masukan tinggi : ";
            cin >> t;
            cout << "Masukan keliling alas : ";
            cin >> s;
            luas = (2 * a) + (s * t);
            volum = a * t;
            cout << "Luas permukaan dari prisma dengan luas alas " << a << ", tinggi " << t << " dan keliling alas " << s << " adalah " << luas << endl;
            cout << "Volume permukaan dari prisma dengan luas alas " << a << " dan tinggi " << t << " adalah " << volum;
            break;
        }
        break;
    }
}