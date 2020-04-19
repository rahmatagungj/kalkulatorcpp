#include <iostream>
using namespace std;

int main() {
	
	int garis,garis2;
	int pertambahan,pilihan;
	for(garis=0;garis<=30;garis++){
		cout<<"=";	
	}
	cout<<"\nKALKULATOR SEDERHANA\n";
	for(garis2=0;garis2<=30;garis2++){
		cout<<"=";	
	}
	cout<<"\n1.PERTAMBAHAN";
	cout<<"\n2.PENGURANGAN";
	cout<<"\n3.PERKALIAN";
	cout<<"\n4.PEMBAGIAN";
	cout<<"\nPILIH JENIS PERHITUNGAN : ";
	cin>>pertambahan;
	pilihan = pertambahan;
	system("cls");
	if (pilihan == 1) {
			for(garis=0;garis<=30;garis++){
			cout<<"=";	
			}
			cout<<"\nPERTAMBAHAN\n";
			for(garis2=0;garis2<=30;garis2++){
				cout<<"=";	
			}
			float huruf1,huruf2,hasil;
			cout<<"\nMASUKAN NOMOR PERTAMA = "; cin>>huruf1;
			cout<<"\nMASUKAN NOMOR KEDUA = "; cin>>huruf2;
			hasil = huruf1+huruf2;
			cout<<"\nHASILNYA ADALAH = "<<hasil;
	}else if (pilihan == 2) {
			for(garis=0;garis<=30;garis++){
			cout<<"=";	
			}
			cout<<"\nPENGURANGAN\n";
			for(garis2=0;garis2<=30;garis2++){
				cout<<"=";	
			}
			float huruf1,huruf2,hasil;
			cout<<"\nMASUKAN NOMOR PERTAMA = "; cin>>huruf1;
			cout<<"\nMASUKAN NOMOR KEDUA = "; cin>>huruf2;
			hasil = huruf1-huruf2;
			cout<<"\nHASILNYA ADALAH = "<<hasil;
	}else if (pilihan == 3) {
			for(garis=0;garis<=30;garis++){
			cout<<"=";	
			}
			cout<<"\nPERKALIAN\n";
			for(garis2=0;garis2<=30;garis2++){
				cout<<"=";	
			}
			float huruf1,huruf2,hasil;
			cout<<"\nMASUKAN NOMOR PERTAMA = "; cin>>huruf1;
			cout<<"\nMASUKAN NOMOR KEDUA = "; cin>>huruf2;
			hasil = huruf1*huruf2;
			cout<<"\nHASILNYA ADALAH = "<<hasil;
	} else if (pilihan == 4) {
			for(garis=0;garis<=30;garis++){
			cout<<"=";	
			}
			cout<<"\nPEMBAGIAN\n";
			for(garis2=0;garis2<=30;garis2++){
				cout<<"=";	
			}
			float huruf1,huruf2,hasil;
			cout<<"\nMASUKAN NOMOR PERTAMA = "; cin>>huruf1;
			cout<<"\nMASUKAN NOMOR KEDUA = "; cin>>huruf2;
			hasil = huruf1/huruf2;
			cout<<"\nHASILNYA ADALAH = "<<hasil;
	} else {
		cout<<"\nPILIHAN TIDAK BENAR";
	}
}
