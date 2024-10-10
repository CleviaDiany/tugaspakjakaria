#include <iostream>
using namespace std;

int main() {
	int nilai[10], total = 0;
	float rataRata;
	// Input nilai 
	for (int i = 0; i < 10; i++) {
		cout << "Masukkan nilai ke-" << i + 1 << ": ";
		cin >> nilai [i];
		total += nilai[i]; // Menghitung total
		//total = total + nilai[i]
	}
	// Menghitung rata-rata
	rataRata = total / 10.0;
	// Menampilkan hasil
	cout << "Total nilai: " << total << endl;
	cout << "Rata-rata nilai: " << rataRata << endl;
	return 0;
}
