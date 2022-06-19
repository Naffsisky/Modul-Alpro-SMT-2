#include<iostream>
using namespace std;

int main(){
    string namadepan[100], namabelakang[100], namalengkap[100];
    int i, n;

    cout << "Masukan banyak data : ";
    cin >> n;
    for (i = 1; i <= n; i++){
        cout << "Masukan nama depan ke " << i << " : ";
        cin >> namadepan[i];
        cout << "Masukan nama belakang ke " << i << " : ";
        cin >> namabelakang[i];
    }
    cout << "\n\nData : \n";
    for (i = 1; i <= n; i++){
        cout << i << ". " << namadepan[i] << " "; 
        cout << namabelakang[i] << "\n";
    }
    return 0;
} 