#include<iostream>
#include<math.h>
// GAGAH RIZKY MULYAWAN //
// 20051397045 //

using namespace std;

main(){
  	int pil,sisi1,sisi2,sisi3,keliling,panjang,luas;
  	char ulang;
    do{
    cout<<endl;
    cout<<"============================================="<<endl;
    cout<<"||                                         ||"<<endl;
    cout<<"||         MENU SEGITIGA SIKU-SIKU         ||"<<endl;
    cout<<"||                       by Gagah Rizky M. ||"<<endl;
    cout<<"||                                         ||"<<endl;
	cout<<"|| 1. Hitung Panjang Sisi Miring           ||"<<endl;
 	cout<<"|| 2. Hitung Luas                          ||"<<endl;
	cout<<"|| 3. Hitung Keliling                      ||"<<endl;
	cout<<"|| 4. Keluar Program                       ||"<<endl;
    cout<<"=============================================\n";
 	cout<<"Masukkan Pilihan Anda : ";
	cin>>pil;

	switch(pil){
	case 1:	cout<<"Masukkan alas segitiga   : ";
			cin>>sisi1;
			cout<<"Masukkan tinggi segitiga : ";
			cin>>sisi2;
			panjang=sqrt((sisi1*sisi1)+(sisi2*sisi2));
			cout<<"Panjang sisi miring adalah : "<<panjang;
			break;
    case 2: cout<<"Masukkan alas segitiga   : ";
            cin>>sisi1;
            cout<<"Masukkan tinggi segitiga : ";
            cin>>sisi2;
            luas=sisi1*sisi2/2;
            cout<<"Luas segitiga adalah : "<<luas;
            break;
    case 3: cout<<"Masukkan panjang sisi ke-1 : ";
            cin>>sisi1;
            cout<<"Masukkan panjang sisi ke-2 : ";
            cin>>sisi2;
            cout<<"Masukkan panjang sisi ke-3 : ";
            cin>>sisi3;
            keliling=sisi1+sisi2+sisi3;
            cout<<"Keliling Segitiga adalah : "<<keliling;
            break;
    case 4: cout<<"Yakin mau Keluar?(Y/T)";
    		cin>>ulang;
    		break;
    default:cout<<"Maaf Inputan Salah";
			break;
    }
	} 
    while (ulang=='t'||ulang=='T');
    cout<<endl;
    cout<<"\nTerimah Kasih Telah Menggunakan Program Ini :)";
}

