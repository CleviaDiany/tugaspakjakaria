#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream file("data.txt");
	string line;
	
	if (file.is_open()) {
		file << "STMIK Penusa\n";
		file << "Belajar Algoritma Pemrograman.";
		file.close();
	} else {
		cout << "File Tidak Bisa Dibuka";
	}
	
	return 0;
}