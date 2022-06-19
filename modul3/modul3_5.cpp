#include <iostream>
using namespace std;

void data(string nama,string jurusan,string npm){
	cout<<"Masukkan nama : "<<nama<<endl;
	cout<<"Masukkan jurusan : "<<jurusan<<endl;
	cout<<"Masukkan npm : "<<npm<<endl;
}
int main(){
	string nama, jurusan, npm;
	cout<<"Masukkan nama : ";
	getline(cin, nama);
	cout<<"Masukkan jurusan : ";
	getline(cin, jurusan);
	cout<<"Masukkan npm : ";
	cin>>npm;
	cout<<"\n\n============================\n";
	cout<<"\tOutput\n";
	cout<<"============================\n\n";
	data(nama,jurusan,npm);
}
