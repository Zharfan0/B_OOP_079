#include <iostream>
using namespace std;

class mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "masukan NIM: ";
		cin >> nim;
		cout << "masukan nama: ";
		cin >> nama;
		cout << "masukan nilai: ";
		cin >> nilai;
	}
	void printData();
};

void mahasiswa::printData() {
	cout << "\nData Mahasiswa: ";
	cout << "\nNIM: " << nim;
	cout << "\nNama: " << nama;
	cout << "\nNilai: " << nilai;
}

class mataKuliah {
private:
	string kode;
	string namaMK;
	int sks;
public:
	void inputMk() {
		cout << "\n\nMasukan kode matakuliah: ";
		cin >> kode;
		cout << "Masukan nama matakuliah: ";
		cin >> namaMK;
		cout << "Masukan SKS: ";
		cin >> sks;
	}
	void tampil() {
		cout << "\nData Matakuliah";
		cout << "\nKode Matakuliah: " << kode;
		cout << "\nNama Matakuliah" << namaMK;
		cout << "\nsks: " << sks;
	}
};

int main() {
	mahasiswa mhs;
	mataKuliah mk;

	mhs.input();
	mhs.printData();

	mk.inputMk();
	mk.tampil();
}