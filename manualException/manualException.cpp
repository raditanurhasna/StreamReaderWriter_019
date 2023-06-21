#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5; //melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	cath  (int a) {
		//blok ini akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	casth(...) {
		/*jika selain integer maka block ini akan dieksekusi*/
		cout << "default Pengecualian Dieksekusi " << endl;
	}
	return 0;
}
