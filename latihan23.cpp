#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	const int maxKaryawan = 50;
	string namaKaryawan[maxKaryawan];
	int jamKerja[maxKaryawan];
	float gajiPerJam[maxKaryawan];
	float gajiTotal[maxKaryawan];
	int jumlahKaryawan = 0;
	char lagi;
	
	do {
		cout << "Masukkan nama karyawan ke-" << jumlahKaryawan + 1 << ": ";
		cin >> namaKaryawan[jumlahKaryawan];
		cout << "Masukkan jumlah jam kerja " << namaKaryawan[jumlahKaryawan] << ": ";
		cin >> jamKerja[jumlahKaryawan];
		cout << "Masukkan gaji per jam untuk " << namaKaryawan[jumlahKaryawan] << ": ";
		cin >> gajiPerJam[jumlahKaryawan];
		
		gajiTotal[jumlahKaryawan] = jamKerja[jumlahKaryawan] * gajiPerJam[jumlahKaryawan];
		
		jumlahKaryawan++;
		
		cout << "Apakah Anda ingin imput data lagi? (Y/T): ";
		cin >> lagi;
		
	} while (lagi == 'y' || lagi == 'Y');
	
	cout << "\n===========================================\n";
	cout << setw(15) << left << "Nama" << endl;
	cout << setw(15) << "Jam Kerja" << endl;
	cout << setw(15) << "Gaji Per Jam" << endl;
	cout << setw(15) << "Gaji Total" << endl;
	cout << "\n===========================================\n";
	
	for (int i = 0; i < jumlahKaryawan; i++) {
		cout << setw(15) << left << namaKaryawan[i]
		<< setw(15) << jamKerja[i]
		<< setw(15) << gajiPerJam[i]
		<< setw(15) << gajiTotal[i] << endl;
	}
	
	cout << "\n===========================================\n";
	
	return 0;

}
