/* Program Menghitung Gaji Karyawan */
// GAGAH RIZKY MULYAWAN //
// 20051397045 //

#include <iostream>
#include <conio.h>

using namespace std;
int main(void) 
{
	char pilihan, nama [40];
	int jumlah, total, sisa, sisa1;
	int jam=0;
	
	cout<<"================================"<<endl;
	cout<<"Program Menghitung Gaji Karyawan"<<endl;
	cout<<"================================"<<endl;
	cout<<"Nama Karyawan : "; 
	cin>>nama;
	cout<<"Golongan : "; 
	cin>>pilihan;
	cout<<"Jumlah Jam Kerja : ";
	cin>>jam;
	cout<<"================================"<<endl;
	cout<<endl;
	
	if (pilihan == 'A')
	{
		jumlah=5000;
	}
	else if (pilihan == 'B')
	{
		jumlah=7000;
	}
	else if (pilihan == 'C')
	{
		jumlah=8000;
	}
	else if (pilihan == 'D')
	{
		jumlah=10000;
	}
	
	
	if (jam > 48)
	{
		sisa = jam - 48;//sisa = 1
		sisa1 = jumlah * (jam-sisa);
		total = 4000 * sisa;
		jumlah = sisa1 + total;
	}
	
	else 
	{
		jumlah = jumlah * jam;
	}
	
	cout<<"Nama Karyawan : "<<nama<<endl;
	cout<<"Total Gaji    : "<<jumlah<<endl;
}

