#include <iostream>
using namespace std;

int main(){
    int x = 0, total = 0;
    int i, j, kelembaban[i], totalk, thn, data;

    cout << "\t \t Settings\n";
    cout << "Pilih perhitungan hari\n";
    cout << "1. Hari\n";
    cout << "2. Minggu\n";
    cout << "3. Bulan\n";
    cout << "4. Tahun\n";
    cout << "Masukan pilihan : ";
    cin >> x;
    switch (x){
        case 1:
            int data[7];
            for (i = 0; i < 7; i++){
                cout << "Masukan suhu hari ke " << i + 1 << " : ";
                cin >> data[i];
                cout << "Masukan kelembaban hari ke " << i + 1 << " : ";
                cin >> kelembaban[i];     
            }
            cout << "\nSuhu yang anda masukan : ";
            for (i = 0; i < 7; i++){
                cout << data[i] << ", ";
                total += data[i];
                
            }
            cout << endl;
            cout << "\nKelembaban yang anda masukan : ";
            for (i = 0; i < 7; i++){
                cout << kelembaban[i] << ", ";
                totalk += kelembaban[i];
            }
            cout << endl;
            cout << "Rata-rata suhu : " << total / 7 << endl;
            cout << "Rata-rata kelembaban : " << totalk / 7 << endl;
        break;
        case 2:
            data[4];
            for (i = 0; i < 4; i++){
                cout << "Masukan suhu minggu ke " << i + 1 << " : ";
                cin >> data[i];
                cout << "Masukan kelembaban minggu ke " << i + 1 << " : ";
                cin >> kelembaban[i]; 
            }
            cout << "\nSuhu yang anda masukan : ";
            for (i = 0; i < 4; i++){
                cout << data[i] << ", ";
                total += data[i];
            }
            cout << endl;
            cout << "\nKelembaban yang anda masukan : ";
            for (i = 0; i < 4; i++){
                cout << kelembaban[i] << ", ";
                totalk += kelembaban[i];
            }
            cout << endl;
            cout << "Rata-rata suhu : " << total / 4 << endl;
            cout << "Rata-rata kelembaban : " << totalk / 4 << endl;
        break;
        case 3:
            data[12];
            for (i = 0; i < 12; i++){
                cout << "Masukan suhu bulan ke " << i + 1 << " : ";
                cin >> data[i];
                cout << "Masukan kelembaban bulan ke " << i + 1 << " : ";
                cin >> kelembaban[i]; 
            }
            cout << "\nSuhu yang anda masukan : ";
            for (i = 0; i < 12; i++){
                cout << data[i] << ", ";
                total += data[i];
            }
            cout << endl;
            cout << "\nKelembaban yang anda masukan : ";
            for (i = 0; i < 12; i++){
                cout << kelembaban[i] << ", ";
                totalk += kelembaban[i];
            }
            cout << endl;
            cout << "Rata-rata suhu : " << total / 12 << endl;
            cout << "Rata-rata kelembaban : " << totalk / 12 << endl;
        break;
        case 4:
            data[thn];
            cout << "Masukan jumlah tahun : ";
            cin >> thn;
            for (i = 0; i < thn; i++){
                cout << "Masukan suhu tahun ke " << i + 1 << " : ";
                cin >> data[i];
                cout << "Masukan kelembaban tahun ke " << i + 1 << " : ";
                cin >> kelembaban[i]; 
            }
            cout << "\nSuhu yang anda masukan : ";
            for (i = 0; i < thn; i++){
                cout << data[i] << ", ";
                total += data[i];
            }
            cout << endl;
            cout << "\nKelembaban yang anda masukan : ";
            for (i = 0; i < thn; i++){
                cout << kelembaban[i] << ", ";
                totalk += kelembaban[i];
            }
            cout << endl;
            cout << "Rata-rata suhu : " << total / thn << endl;
            cout << "Rata-rata kelembaban : " << totalk / thn << endl;
        break;
    }

    return 0;
}