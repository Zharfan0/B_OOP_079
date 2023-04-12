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