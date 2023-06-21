#include <iostream>
#include <exception>
//untuk obyek exception yang digunakan
#include <array>
//untuk obyek array yang kita gunakan
using namespace std;
int main()
{
	cout << "Awal Program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 3, 5, 7 };
		//pesan array integer 3 elemen
		cout << data.at(5) << endl;
		//memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan obyek exception
		cout << e.what() << endl;
		/*akan diekseskusi karna array data hanya memiliki 3 elemen*/
	}
	cout << "Baris Program Yang Terakhrir" << endl;
	/*Penanda 2 : bahasa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
	return 0;
}
