#include <iostream>
using namespace std;

double hitungVolumeBalok(double p, double l, double t){
	double V = p*l*t;
	return V;
}

void tampilVolume(double p, double l, double t){
	double V = hitungVolumeBalok(p, l, t);
	cout<<"Volume balok adalah : "<<V<<endl;
}

int main (){
	double p, l, t;
	cout<<"\tProgram Menghitung Volume Balok\n";
	cout<<"Masukkan nilai panjang : ";
	cin>>p;
	cout<<"Masukkan nilai lebar : ";
	cin>>l;
	cout<<"Masukkan nilai tinggi : ";
	cin>>t;
	tampilVolume(p, l, t);
}