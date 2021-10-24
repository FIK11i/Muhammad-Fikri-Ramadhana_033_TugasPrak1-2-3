#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	char yn;
	int menu;
	float alas,tinggi,sisi_miring,luas,keliling,hasil;
	
	cout<<"================================="<<endl;
    cout<<"|    MENU SEGITIGA SIKU-SIKU    |"<<endl;
    cout<<"================================="<<endl;
	cout<<"| 1. Hitung Panjang sisi miring |"<<endl;
	cout<<"| 2. Hitung Luas                |"<<endl;
	cout<<"| 3. Hitung Keliling            |"<<endl;
	cout<<"| 4. Keluar program             |"<<endl;
	cout<<"================================="<<endl;
	cout<<"\n";
	
	cout<<" Masukkan Menu Tabel : "; cin>>menu;
	cout<<" Masukkan Alas       : "; cin>>alas;
	cout<<" Masukkan Tinggi     : "; cin>>tinggi;
	
	switch (menu)
	{
		case 1 :
			cout<<" Menghitung Sisi Miring Segitiga "<<endl;
			cout<<"---------------------------------"<<endl;
			cout<<"\n";
			sisi_miring=sqrt((alas*alas)+(tinggi*tinggi));
			cout<<" Sisi Miring Segitiga = "<<sisi_miring<<endl;
		break;
		
		case 2 :
			cout<<" Menghitung Luas Segitiga "<<endl;
			cout<<"--------------------------"<<endl;
			cout<<"\n";
			luas=0.5*alas*tinggi;
			cout<<" Luas Segitiga = "<<luas<<endl;
		break;
		
		case 3 :
			cout<<" Menghitung Luas Segitiga "<<endl;
			cout<<"--------------------------"<<endl;
			cout<<"\n";
			keliling=alas+tinggi+sisi_miring;
			cout<<" Keliling Segitiga = "<<keliling<<endl;
		break;
		
		case 4 :
			cout<<" Tekan enter lagi untuk keluar progam "<<endl;
	}

getch();

}
