#include <iostream>
using namespace std;

int main()
{
	
	/* 
	rumus array
	tipe_data nama_variabel [jumlah elemen]
	string nama [10]
	*/
	
	/*
	int nilai [5];
	
	nilai [0] = 11;
	nilai [1] = 12;
	nilai [2] = 13;
	nilai [3] = 14;
	nilai [4] = 15;
	
	cout << "isi array pertama adalah " << nilai [0] <<endl;
	cout << "isi array kedua adalah " << nilai [1] <<endl;
	cout << "isi array ketiga adalah " << nilai [2] <<endl;
	cout << "isi array keempat adalah " << nilai [3] <<endl;
	cout << "isi array kelima adalah " << nilai [4] <<endl;
	
	int angka [5] = {1, 2, 3, 4, 5};
	string nama [3] = {"claudya" , "kageyama" , "hinata"};
	
	cout << "coba angka " << angka [0] << " "<<angka [1] << " " << angka [2] <<endl;
	cout << "coba teks " << nama [2] << endl; 
	*/
	
	
	string matkul [] = {"aljabar dan linear & matriks", "algoritma & pemrograman", "praktikum algoritma pemrograman", "sistem operasi", "praktikum sistem operasi", "pengantar teknologi informasi", "organisasi & arsitektur komputer", "bahasa inggris", "basis data", "orientasi studi"};
	
	cout << "isi data di bawah ini : " <<endl;
	
	string nama;
	int nim;
	string prodi;
	
	cout << "nama : "; 
	cin >> nama;
	getline (cin, nama);
	
	cout << "nim : ";
	cin >> nim;
	
	cout << "prodi : ";
	cin >> prodi;
	getline (cin, prodi);
	
	cout << "== DAFTAR MATA KULIAH ==" <<endl;
	cout << "mata kuliah " << matkul [0] <<endl;
	cout << "mata kuliah " << matkul [1] <<endl;
	cout << "mata kuliah " << matkul [2] <<endl;
	cout << "mata kuliah " << matkul [3] <<endl;
	cout << "mata kuliah " << matkul [4] <<endl;
	cout << "mata kuliah " << matkul [5] <<endl;
	cout << "mata kuliah " << matkul [6] <<endl;
	cout << "mata kuliah " << matkul [7] <<endl; 
	cout << "mata kuliah " << matkul [8] <<endl; 
	cout << "mata kuliah " << matkul [9] << endl;
	
	cout << "========================" <<endl;
	
	cout << "===pilih 3 mata kuliah pilihan===" <<endl;
	cout << "mata kuliah " << matkul [1] <<endl;
	cout << "mata kuliah " << matkul [2] <<endl;
	cout << "mata kuliah " << matkul [3] <<endl;
	
	return 0;
}