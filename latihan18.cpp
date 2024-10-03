#include<iostream>

using namespace std;

int main() {
    int jumlahdata, jumlahbarang, totalpenjualan = 0;

    cout << "Masukkan jumlah data: ";
    cin >> jumlahdata;

    for (int i = 1; i <= jumlahdata; i++) {
    
        cout << "Masukkan jumlah barang yang terjual di toko " << i << ": ";
        cin >> jumlahbarang;

        totalpenjualan += jumlahbarang;
    }

    cout << "Total barang yang terjual di toko adalah: " << totalpenjualan << endl;

    return 0;
}
