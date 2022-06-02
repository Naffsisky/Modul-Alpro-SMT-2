#include <iostream>
using namespace std;

void obat(){
    int pilihan, pesanan;
    char jawab;
    float bayar, total;

    cout << "\tDaftar Harga Obat\n";
    cout << "1. Enovid Nose Sanitizer (Sodium Chloride, Citric Acid, HPMC, Sodium Nitrite, Benzalkonium Chloride)\n";
    cout << "2. Rebozet (Eltrombopag)\n";
    cout << "3. Vitacimin Fresh Lemon (Vitamin C)\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch (pilihan){
        case 1:
            cout << "\nNama : Enovid Nose Sanitizer (Sodium Chloride, Citric Acid, HPMC, Sodium Nitrite, Benzalkonium Chloride)\n";
            cout << "Tipe : Cair\n";
            cout << "Ukuran : 25 mL\n";
            cout << "Harga : Rp. 650.000/botol\n\n";
            cout << "Apakah anda ingin membeli obat ini? (y/n) : ";
            cin >> jawab;
            if (jawab == 'y'){
                cout << "Masukan jumlah pesanan : ";
                cin >> pesanan;
                cout << "Total harga : Rp. " << pesanan * 650000 << endl;
                cout << "Masukan uang pembayaran : ";
                cin >> bayar;
                total = bayar - pesanan * 650000;
                if (bayar < pesanan * 650000){
                    cout << "Uang pembayaran anda kurang\n";
                }
                else {
                    cout << "Kembalian : Rp. " << total << endl;
                }
            }   
            else {
                cout << "Terima kasih\n\n";
                cout << "Apakah anda ingin membeli obat lain? (y/n) : ";
                cin >> jawab;
                if (jawab == 'y'){
                    obat();
                }
                else {
                    exit(0);
                }
            }
        break;
        case 2:
            cout << "\nNama : Rebozet (Eltrombopag)\n";
            cout << "Tipe : Tablet\n";
            cout << "Ukuran : 25 mg\n";
            cout << "Harga : Rp. 4.316.000/box\n\n";
            cout << "Apakah anda ingin membeli obat ini? (y/n) : ";
            cin >> jawab;
            if (jawab == 'y'){
                cout << "Masukan jumlah pesanan : ";
                cin >> pesanan;
                cout << "Total harga : Rp. " << pesanan * 4316000 << endl;
                cout << "Masukan uang pembayaran : ";
                cin >> bayar;
                total = bayar - pesanan * 4316000;
                if (bayar < pesanan * 4316000){
                    cout << "Uang pembayaran anda kurang\n";
                }
                else {
                    cout << "Kembalian : Rp. " << total << endl;
                }
            }   
            else {
                cout << "Terima kasih\n\n";
                cout << "Apakah anda ingin membeli obat lain? (y/n) : ";
                cin >> jawab;
                if (jawab == 'y'){
                    obat();
                }
                else {
                    exit(0);
                }
            }
        break;
        case 3:
            cout << "\nNama : Vitacimin Fresh Lemon (Vitamin C)\n";
            cout << "Tipe : Tablet Hisap\n";
            cout << "Ukuran : 500 mg\n";
            cout << "Harga : Rp. 2.900/strip\n\n";
            cout << "Apakah anda ingin membeli obat ini? (y/n) : ";
            cin >> jawab;
            if (jawab == 'y'){
                cout << "Masukan jumlah pesanan : ";
                cin >> pesanan;
                cout << "Total harga : Rp. " << pesanan * 2900 << endl;
                cout << "Masukan uang pembayaran : ";
                cin >> bayar;
                total = bayar - pesanan * 2900;
                if (bayar < pesanan * 2900){
                    cout << "Uang pembayaran anda kurang\n";
                }
                else {
                    cout << "Kembalian : Rp. " << total << endl;
                }
            }   
            else {
                cout << "Terima kasih\n\n";
                cout << "Apakah anda ingin membeli obat lain? (y/n) : ";
                cin >> jawab;
                if (jawab == 'y'){
                    obat();
                }
                else {
                    exit(0);
                }
            }
        break;
        default:
            cout << "Pilihan tidak ada\n";
            exit(0);
    }
}
void pasien(){
    int umur, pasien;

    cout << "Masukan nomer urut pasien : ";
    cin >> pasien;
    cout << "Masukan umur pasien : ";
    cin >> umur;
    cout << "\n\nNomer pasien : " << pasien << endl;
    cout << "Umur pasien : " << umur << endl;
    cout << "Dimohon untuk menunggu panggilan receptionist\n";
    exit(0);
}
int main(){
    int pilihan;

    cout << "Selamat datang di klinik\n";
    cout << "Silahkan pilih menu yang tersedia\n";
    cout << "1. Pasien\n";
    cout << "2. Obat\n";
    cout << "3. Keluar\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch (pilihan){
        case 1:
            pasien();
        break;
        case 2:
            obat();
        break;
        case 3:
            exit(0);
        break;
        default:
            cout << "Pilihan tidak ada\n";
            exit(0);
    }
    return 0;
}