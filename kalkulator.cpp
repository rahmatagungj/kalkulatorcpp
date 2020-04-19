#include <iostream>
using namespace std;
pertambahan(){
		int garis;
		for(garis=0;garis<=30;garis++){
			cout<<"=";	
		}
			cout<<"\nPERTAMBAHAN\n";
		for(garis=0;garis<=30;garis++){
				cout<<"=";	
		}
		float huruf1,huruf2,hasil;
			cout<<"\nMASUKAN NOMOR PERTAMA = "; cin>>huruf1;
			cout<<"\nMASUKAN NOMOR KEDUA = "; cin>>huruf2;
			hasil = huruf1+huruf2;
			cout<<"\nHASILNYA ADALAH = "<<hasil<<"\n";
}
pengurangan(){
		int garis;
		for(garis=0;garis<=30;garis++){
			cout<<"=";	
		}
			cout<<"\nPENGURANGAN\n";
		for(garis=0;garis<=30;garis++){
				cout<<"=";	
		}
		float huruf1,huruf2,hasil;
			cout<<"\nMASUKAN NOMOR PERTAMA = "; cin>>huruf1;
			cout<<"\nMASUKAN NOMOR KEDUA = "; cin>>huruf2;
			hasil = huruf1-huruf2;
			cout<<"\nHASILNYA ADALAH = "<<hasil<<"\n";
}
perkalian(){
		int garis;
		for(garis=0;garis<=30;garis++){
			cout<<"=";	
		}
			cout<<"\nPERKALIAN\n";
		for(garis=0;garis<=30;garis++){
				cout<<"=";	
		}
		float huruf1,huruf2,hasil;
			cout<<"\nMASUKAN NOMOR PERTAMA = "; cin>>huruf1;
			cout<<"\nMASUKAN NOMOR KEDUA = "; cin>>huruf2;
			hasil = huruf1*huruf2;
			cout<<"\nHASILNYA ADALAH = "<<hasil<<"\n";
}
pembagian(){
		int garis;
		for(garis=0;garis<=30;garis++){
			cout<<"=";	
		}
			cout<<"\nPEMBAGIAN\n";
		for(garis=0;garis<=30;garis++){
				cout<<"=";	
		}
		float huruf1,huruf2,hasil;
			cout<<"\nMASUKAN NOMOR PERTAMA = "; cin>>huruf1;
			cout<<"\nMASUKAN NOMOR KEDUA = "; cin>>huruf2;
			hasil = huruf1/huruf2;
			cout<<"\nHASILNYA ADALAH = "<<hasil<<"\n";
}
pilih(){
	int pilihan;
	cin>>pilihan;
	system("cls");
	if (pilihan == 1) {
		pertambahan();	
	}else if (pilihan == 2) {
		pengurangan();
	}else if (pilihan == 3) {
		perkalian();	
	} else if (pilihan == 4) {
		pembagian();		
	} else {
		cout<<"\nPILIHAN TIDAK BENAR";
	}
}
mainmenu (){
	int garis;
	for(garis=0;garis<=30;garis++){
		cout<<"=";	
	}
	cout<<"\nKALKULATOR SEDERHANA\n";
	for(garis=0;garis<=30;garis++){
		cout<<"=";	
	}
	cout<<"\n1.PERTAMBAHAN";
	cout<<"\n2.PENGURANGAN";
	cout<<"\n3.PERKALIAN";
	cout<<"\n4.PEMBAGIAN\n";
	for(garis=0;garis<=30;garis++){
		cout<<"=";	
	}
	cout<<"\nPILIH JENIS PERHITUNGAN : ";
}
kembali(){
	system("cls");
	return 1;
}
pause(){
	system("pause");
}

int main() {
	mainmenu();
	pilih();
	pause();
	kembali();
}
