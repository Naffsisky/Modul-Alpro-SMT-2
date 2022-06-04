#include <iostream>
using namespace std;

int main(){
    int arr[1001] = {0}, n, input, modus, count =0;
    float total, mean;

    cout << "Masukan banyak data : ";
    cin >> n;
    cout << " Masukkan nilai yang anda ingin input : "; //Masukkan angka dengan space, bukan di enter
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr[input]++;
    }
        
    for (int i = 0; i < 1001; i++)
    {
        if (arr[i] >= count)
        {
            count = arr[i];
            modus = i;
        }
    }

    total += input;
    mean = total/n;
    cout << endl;
    cout << "Nilai yang sering muncul adalah : "<< modus << endl; 
    cout << "Rata-rata dari nilai adalah : " << mean << endl;

return 0;
}