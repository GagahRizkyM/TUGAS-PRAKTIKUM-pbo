//Gagah Rizky Mulyawan//
//tugas billing net//



#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main(void){
	int j1,j2,m1,m2,d1,d2,nmrkomp,jml,jumlahdetik;
	int tarif=5000;
	char nama[50];

	cout<<"=============================================="<<endl;
	cout<<"   Program Hitung Biaya Pembayaran Warnet"<<endl;  
	cout<<"--------selamat datang billing net------------\n";
	 cout<<"-------------Gagah Rizky Mulyawan-------------\n";
	 cout<<"----------------20051397045-------------------\n";
	cout<<"=============================================="<<endl; 
	cout <<"Masukkan nomor komputer = ";
	cin >> nmrkomp;
	cout <<"Masukkan nama pengguna  = ";
	cin >> nama;
	cout <<"Masukkan waktu mulai   : "<<endl;
	cout <<" Jam   = ";cin >> j1;
	cout <<" Menit = "; cin>>m1;
	cout <<" Detik = "; cin>>d1;
	cout <<"Masukkan waktu selesai : "<<endl;
	cout <<" Jam   = ";cin >> j2;
	cout <<" Menit = "; cin>>m2;
	cout <<" Detik = "; cin>>d2;

	jumlahdetik = ((j2-j1) * 3600) + ((m2-m1) * 60) + (d2-d1);
	jml = jumlahdetik * tarif / 3600 ;

	cout <<endl ;
    cout<<"=============================================="<<endl;
    cout<<"          Resi Pembayaran Warnet"<<endl;
    cout<<"----------------------------------------------"<<endl;
	cout <<"Nomor Komputer = "<<nmrkomp<<endl;
	cout <<"Nama pengguna  = "<<nama<<endl;
	cout <<"Jumlah jam   = " << (j2-j1) <<" jam"<<endl;
	cout <<"Jumlah menit = " << (m2-m1) << " menit"<<endl;
	cout <<"Jumlah detik = " << (d2-d1) << " detik"<<endl;
	cout <<"Jumlah harga = Rp. "<<jml<<endl;
	cout<<"=============================================="<<endl;
	cout<<"'Terima Kasih Telah Berkunjung di Warnet Kami'"<<endl;

getch();
return 0;
}
