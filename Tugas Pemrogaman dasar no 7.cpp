#include<iostream>
#include<conio.h>

//Gagah Rizky M
//20051397045
//2020A
using namespace std;
main() {
int n,i,j;
cout<<"Masukkan Segitiga Angka : ";
cin>>n;
cout<<"\n";
	for (i=1; i<=n; i++){
	 for (j=1;j<=i;j++){
		cout<<" "<<j;
		}
	cout<<" \n";
	}
	for (i=n-1;i>=1;i--){ 
	 for(j=1;j<=i;j++){
		cout<<" "<<j;
		}
	cout<<" \n";
	}
getch();
}
