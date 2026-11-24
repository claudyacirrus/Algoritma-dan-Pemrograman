
#include <iostream>
using namespace std;
int main()
{
	/* getline = untuk spasi 
	saat ingin membuat inputan, usahakan jangan endl
	saat memberi string nama;"claudya"; sebenernya bisa, cuma ga keliatan. yg keliatan dibagian input
	jika ada tiga inputan, contoh:
	masukan nama anda: klodi
	masukan nama anda: dya
	masukan nama anda: jasmin
	yg terbaca yg mana? yg terbaca yg bawah, soalnya inputan terakhir
	kalo string pake getline
	kalo angka pake cin, pake getline jg boleh
	*/
/*	string nama;
	int harga;
	
	cout << "masukan nama anda : ";
	cin >> nama;
	getline (cin,nama);
	
	cout << "masukan harga buku : ";
	cin >> harga; */
	
	cout << "isikan data di bawah ini : " <<endl;
	cout << "======DATA PENDAFTAR======" <<endl;
	
	cout << "nama="; 
	string nama;
	getline (cin,nama);
	
	cout << "nim=";
	int nim;
	cin >> nim;
	cin.ignore();
	
	cout << "alamat=";
	string alamat;
	getline (cin,alamat); 
	
	
	cout << "=====================" <<endl;
	
	cout << "masukan no daftar = ";
	int no;
	cin >> no;
	cin.ignore();
	
	
	cout << "baik, terima kasih sudah mengisi" <<endl;
	cout << "nama anda " << nama << " dengan nim " << nim <<endl;
	cout << "alamat anda " <<alamat << " tegal" <<endl;
	cout << "no daftar anda " <<no <<endl;
	
	cout << "terima kasih telah mendaftar";
	
	return 0;
}