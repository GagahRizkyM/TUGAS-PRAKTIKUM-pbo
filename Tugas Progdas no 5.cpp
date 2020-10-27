#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int A=0, B, C, jumlah=0, i,n;
	
	cout <<"================================================================================"<<endl;
	cout <<"||  	        Menghitung jumlah Deret Bilangan                              ||"<<endl;
	cout <<"||                                                                            ||"<<endl;   
	cout <<"||                                                   by Gagah Rizky Mulyawan  ||"<<endl;                  
	cout <<"================================================================================"<<endl;
	cout <<"Masukkan Bilangan Awal : ";
	cin >>A;
	cout <<"Masukkan selisih angka : ";
	cin >>B;
	cout <<"Masukkan Jumlah Deret ke-n : ";
	cin >>n;
	
	cout <<"Deret ke-"<<n<<" : ";
	cout <<A<<",";
	jumlah=jumlah+A;
	for(i=0; i<n-1; i++){
		C=A+B;
		A=C;
		cout <<C<<",";
		jumlah=jumlah+C;
	}
	cout <<"\nJumlah Deret Ke-"<<n<<" : ";
	cout <<jumlah;
	
	getch();
	return 0;
}
