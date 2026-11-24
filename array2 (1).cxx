#include <iostream>
using namespace std;
int main()
{
	string nama, nim;
	string makanan [3];
	
	cout << "nama = ";
	getline (cin, nama);
	
	cout << "nim = ";
	getline (cin, nim);
	
	cout << "makanan fav 1 ";
	getline (cin, makanan[0]);
	
	cout << "makanan fav 2 ";
	getline (cin, makanan[1]);
	
	cout << "makanan fav 3 ";
	getline (cin, makanan[2]);
	
	cout << "daftar makanan favorit "<<endl;
	cout << makanan [0] <<endl;
	cout << makanan [1] <<endl;
	cout << makanan [2] <<endl;
	
	cout << "makanan paling terfavorit" <<endl;
	cout << makanan [0];
	
	return 0;
}