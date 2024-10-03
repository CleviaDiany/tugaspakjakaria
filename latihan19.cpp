#include<iostream>

using namespace std;

int main() {

    char lagi = 'Y';
    int jumlahdata, jumlahbarang, totalpenjualan = 0;

    while (lagi == 'Y' || lagi == 'y') {
        cout << "Masukkan jumlah barang yang terjual di toko: ";
        cin >> jumlahbarang;

        totalpenjualan += jumlahbarang;

        cout << "Total barang yang terjual di toko adalah: " << totalpenjualan << endl;

        cout << "Apakah mau input lagi [Y/T]: ";
        cin >> lagi;
    }

    return 0;
}
