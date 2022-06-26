#include<iostream>
using namespace std;

int pilihan, jml_nama, n_nama;
string kembali;

struct Nama {
    int id;
    char nama_depan[50];
    char nama_belakang[50];
} s_nama[100];

int main(){
    menu:
    cout << "\tMenu\n";
    cout << "1. Tambah nama\n";
    cout << "2. Lihat nama\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
        tambah_anggota:
            jml_nama += 0;
            s_nama[jml_nama].id = jml_nama;
            cout << "\tTambah Nama\n";
            cout << "Nama depan\t: ";
            cin >> s_nama[jml_nama].nama_depan;
            cout << "Nama belakang\t: ";
            cin >> s_nama[jml_nama].nama_belakang;

            jml_nama++;
            cout <<  "Data Anda Sukses Ditambahkan\n\n";
            cout << "Kembali ke manu? y/n\n";
            cout << "Masukan pilihan : ";
            cin >> kembali;  
            if(kembali == "Y" || kembali == "y"){
                goto menu;
            }
            else{
                exit(0);
            }  
            break;
        case 2:
        cout << "\nMengecek Data Anggota\n";
            log_nama:
            for(n_nama = 0; n_nama < jml_nama; n_nama++){
                cout << "Nama anggota\t: " << s_nama[n_nama].nama_depan << endl;
                cout << "Prodi anggota\t: " << s_nama[n_nama].nama_belakang << endl << endl;
            }
            cout << "Kembali ke menu? y/n\n";
            cout << "Masukan pilihan : ";
            cin >> kembali;    
            if(kembali == "Y" || kembali == "y"){
                goto menu;
            }
            else{ 
                exit(0);
            }
            break;
    }
} 
