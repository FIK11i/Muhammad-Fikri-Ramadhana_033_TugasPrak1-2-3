//Tugas Praktikum 1 Progam Blling Warnet
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	char namapengguna[20];
	int jam,totaljam,menit,totalmenit,detik,totaldetik,totalwaktu;
	
	cout<<"===================================="<<endl;
	cout<<"|          WARNET BAHAGIA          |"<<endl;
	cout<<"===================================="<<endl;
	cout<<" Durasi Waktu Penggunaan ";
	cout<<"\n";
	
	cout<<"| Nama             : "; cin>>namapengguna;
	cout<<"| Penggunaan Jam   : "; cin>>jam;
	cout<<"| Penggunaan Menit : "; cin>>menit;
	cout<<"| Penggunaan Detik : "; cin>>detik;
	cout<<"===================================="<<endl;
	
	totaljam=jam*5000;
	totalmenit=menit*5000/60;
	totaldetik=detik*5000/360;
	totalwaktu=totaljam+totalmenit+totaldetik;
	
	cout<<"\n";
	cout<<"| Biaya Warnet : "<<totalwaktu<<endl;
	
	getch();
	
}
