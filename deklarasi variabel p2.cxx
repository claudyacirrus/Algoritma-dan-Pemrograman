
#include <iostream>
using namespace std;
int main( )
{
	
	/*cout adalah perintah untuk mencetak
	nama saya claudya jasmine
	alamat saya ada di jalan ketepeng 
	cout<<"nama saya claudya jasmine";*/
	
	//tipe data nama_variabel = nilai; (deklarasi variabel)
	//untuk variabel lebih baik digabung saja, jangan double atau dua kali
	//setiap ada variabel, pasti ada pemanggilnya
	//untuk menampilkan teksnya tetap menggunakan cout
	// tanda // gunanya untuk komentar (tidak terlihat di tampilan nantinya). bisa juga menggunakan /* (isi teks) */
	//untuk pemanggil varuabel memakai <<
	// cout << nama << " " << alamat
	
/*	string nama="claudya jasmine";
	string alamat="kabupaten tegal";
	int umur=17;
	double ipk=4.00;
	
	cout << nama <<endl;
	cout << alamat << endl;
	cout << umur <<endl;
	cout << ipk <<endl; */
	// cout << "nama saya " << name <<endl
	
	cout<< "buat 3 variabel" <<endl;
	cout<< "nama, nim, prodi" <<endl;
	
	cout<< "kemudian cetak seperti berikut:" <<endl;
	
	cout << "======DATA MHS=====" <<endl;
	string name="claudya"; 
	int nim=2602009;
	string prodi="teknik informatika";
	string alamat="kabupaten tegal";
	int kodepos=123456;
	
	cout << "nama saya " << name <<endl;
	cout << "nim saya "  <<nim <<endl;
	cout << "prodi saya " <<prodi <<endl;
	cout <<"alamat saya " << alamat << " kode pos saya " <<kodepos <<endl;
	cout <<"=============";

	
	return 0;
	
	
}