#include<iostream>
using namespace std;

int main() {
    const int jumlahsalesman = 10;
    float penjualan, komisi, totalkomisi = 0;
    
    for (int i = 1; i <= jumlahsalesman; i++) {
        cout << "Masukkan jumlah penjualan untuk salesman " << i << ": ";
        cin >> penjualan;

        if (penjualan <= 500000) {
            komisi = penjualan * 0.10;
        } else {
            komisi = 500000 * 0.10 + (penjualan - 500000) * 0.15;
        }

        cout << "Komisi untuk salesman " << i << ": " << komisi << endl;
        totalkomisi += komisi;  
    }

    cout << "Total komisi yang dibayarkan PT. MURAH HATI: " << totalkomisi << endl;

    return 0;
}
