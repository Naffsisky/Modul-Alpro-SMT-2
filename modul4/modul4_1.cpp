#include <iostream>
using namespace std;

int main(){
    int x = 0, total = 0, maks = 0, min = 0;
    int i;

    cout << "Masukan banyak nilai : ";
    cin >> x;

    int data[x];

    for (i = 0; i < x; i++){
        cout << "Masukan nilai ke - " << i + 1 << " : ";
        cin >> data[i];
    }
    cout << "\nNilai yang anda masukan adalah : ";
    maks = min = data[0];
    for (i = 0; i < x; i++){
        cout << data[i] << ", ";
        total += data[i];
        if (data[i] > maks){
            maks = data[i];
        }
        if (data[i] < min){
            min = data[i];
        }
    }

    cout << "\n\nJumlah nilai\t : " << total;
    cout << "\nRata-rata nilai\t : " << total/x;
    cout << "\nNilai terkecil\t : " << min;
    cout << "\nNilai terbesar\t : " << maks;

    return 0;
}