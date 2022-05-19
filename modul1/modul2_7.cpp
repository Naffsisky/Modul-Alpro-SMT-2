#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int x[100][100], y[100][100], z[100][100];
    int baris, kolom, i, j, user;

    cout << "Masukan baris : ";
    cin >> baris;
    cout << "Masukan kolom : ";
    cin >> kolom;
    cout << "\nMasukan nilai matriks A\n";
    for (i=0; i<baris; i++)
    {
        for (j=0; j<kolom; j++)
        {
            cout << "Nilai [" << 1+i << "]" << "[" << 1+j << "] : ";
            cin >> x[i][j];
        }
    }
    cout << "\nMasukan nilai matriks B\n";
    for (i=0; i<baris; i++)
    {
        for (j=0; j<kolom; j++)
        {
            cout << "Nilai [" << 1+i << "]" << "[" << 1+j << "] : ";
            cin >> y[i][j];
        }
    }
    cout << "\nPilih operasi : \n";
    cout << "1. Penambahan (+)\n";
    cout << "2. Pengurangan (-)\n";
    cout << "Masukan pilihan : ";
    cin >> user;
    if (user == 1){
        cout << "\nHasil penjumlahan matriks : \n";
        for (i=0; i<baris; i++)
        {
            for (j=0; j<kolom; j++)
            {
                z[i][j] = x[i][j] + y [i][j];
                cout << z[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else if (user == 2){
        cout << "\nHasil pengurangan matriks : \n";
        for (i=0; i<baris; i++)
        {
            for (j=0; j<kolom; j++)
            {
                z[i][j] = x[i][j] - y [i][j];
                cout << z[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else {
        cout << "Pilihan tidak ada";
    }
    return 0;
}