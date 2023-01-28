#include<iostream>
#include<stdlib.h>
using namespace std;
/*
Nama        : Ages Gelar Pangestu
Kelas       : 1B Teknik Informatika
Mata Kuliah : Dasar Pemrograman
Tugas       : UAS
Tanggal     : 26, Januari, 2023



 
*/
void dh(){
	kembali:
		system ("cls");
	cout << "======================================\n";
	cout << "=============DAFTAR HARGA=============\n";
	string nm [9]={"Beras       \t:", "Minyak Goreng\t:", "Susu     \t:", "Cuka       \t:", "Gula Pasir \t:", "Terigu   \t:", "Telur     \t:","Daging   \t:","Garam    \t:"};
	string nama [9]={"Beras      \t:", "Minyak Goreng\t:", "Susu       \t:", "Cuka         \t:", "Gula Pasir      \t:", "Terigu          \t:", "Telur         \t:","Daging         \t:","Garam   \t:"};
	int harga [9]={10000,20000,10000,15000,15000,15000,25000,35000,2000}; 
	string pilih;
	string ktgr[9]={" liter "," liter "," liter "," liter "," kg "," kg "," kg "," kg ","  bungkus "};

		for (int a = 0 ; a < 9; a++){
		cout << nm [a]  ;
		cout << harga [a];

		cout << "/";
		cout << ktgr [a];
		cout << endl;	
}

		cout << "===================================\n";
		cout << "===================================\n";
		cout << "masukan jumlah yang akan anda beli\n";

	int byr[9];

	int jmlh [9];
	int tot;



		for (int a = 0 ; a < 9; a++){
		cout <<"berapa"<< ktgr [a] << nama [a] ;

		cin >> jmlh [a];		

}
system ("cls");
for (int i = 0 ; i < 9; i++){
	byr[i] = harga [i]*jmlh[i];
	cout << nm[i] <<byr [i] << endl;

}

tot = byr [0]+byr[1]+byr[2]+byr[3]+byr[4]+byr[5]+byr[6]+byr[7]+byr[8];
	if (tot >= 300000){
		cout << "selamat anda mendapatkan discount sebesar 20%" << endl;
		cout << "harga sebelumnya \t:"<< tot  << endl;
		cout << "harga yang harus anda bayar:"<< tot * 0.85 << endl;

	}
	else if (tot >= 200000){
		cout << "selamat anda mendapatkan discount sebesar 10%" << endl;
		cout << "harga sebelumnya \t:"<< tot  << endl;
		cout << "harga yang harus anda bayar:"<< tot * 0.95 << endl;

		}
	else{

		cout << "harga yang harus anda bayar:"<< tot << endl <<endl << endl;


	}
		cout << "===================================\n";
		cout << "===================================\n";
		cout << "ketik ya untuk kembali kepembelian \n";
		cout << "ketik tidak untuk selesai \n";
		cout << "<ya/tidak>  :";
		cin >> pilih ;
		if (pilih == "ya"){
			goto kembali;
		}




}


int main()
{

	cout << "=================================================\n";
	cout << "=============TOKO SEMBAKO AGES GELAR===============\n";
	cout << "=================================================\n";

string b;
cout << "ketik ya untuk melanjutkan \nketik tidak untuk berhenti \n<ya/tidak>  : ";
cin >> b;



if (b=="ya"){

	dh();





}
else {
	cout << "program telah berhenti";
}





	return 0;
}
