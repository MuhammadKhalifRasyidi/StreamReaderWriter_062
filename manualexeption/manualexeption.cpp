#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "selamat belajat di prodi ti umy" << endl;
		throw 0.5; //melemparkan sebuah integer maka
		cout << "pengecualian tidak akan diseksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		/*jika selain int maka blok ini akan dieksekusi*/
		cout << "default pengecualian dieksekusi" << endl;
	}

	return 0;
}