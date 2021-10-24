//Progam Menghitung Gaji Karyawan Mingguan
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int lembur_1=0;
	char nama[20],golongan,jam,lembur,totalakhir;
	float hasil;
	string operasi;
	
	cout<<"==========================================="<<endl;
	cout<<"|              Gaji Karyawan              |"<<endl;
	cout<<"==========================================="<<endl;
	cout<<"\n";
	
	cout<<"| Nama Karyawan               : "; cin>>nama;
	cout<<"| Golongan (A/B/C/D)          : "; cin>>golongan;
	cout<<"| Jumlah Jam Kerja (seminggu) : "; cin>>jam;
	cout<<"==========================================="<<endl;
	cout<<"\n";
	
	lembur=jam-48;
	if (jam>48)
	{
		switch(golongan){
		case 'A' :
			{
				 hasil = (48*5000)+(lembur*4000);
				 break;
			}
		case 'B' :
			{
				hasil = (48*7000)+(lembur*4000);
				break;
			}
		case 'C' :
			{
				hasil = (48*8000)+(lembur*4000);
				break;
			}
		case 'D' :
			{
				hasil = (48*10000)+(lembur*4000);
				break;
			}
		default :
			cout<<"Terjadi Kesalahan"<<endl;
		}
	}
	else if (jam<48)
	{
		switch(golongan){
		case 'A' :
			{
				 hasil = (48*5000);
				 break;
			}
		case 'B' :
			{
				hasil = (48*7000);
				break;
			}
		case 'C' :
			{
				hasil = (48*8000);
				break;
			}
		case 'D' :
			{
				hasil = (48*10000);
				break;
			}
		default :
			cout<<"Terjadi Kesalahan"<<endl;
		}
	}
		
	cout<<"---------------------------------------------"<<endl;
	cout<<"|         Hasil Data Gaji Karyawan          |"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"| Nama Karyawan : "<<nama<<endl;
	cout<<"| Gaji          : "<<hasil<<endl;
	cout<<"---------------------------------------------"<<endl;
	
	getch();
	

}
