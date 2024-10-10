#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    const int maxData = 100;
    string namaBarang[maxData];
    int harga[maxData], jumlahJual[maxData];
    float totalHarga[maxData], diskon[maxData], totalBayar[maxData];
    int count = 0;
    char lagi;
    float totalPendapatan;

    do {
        cout << "\nPENJUALAN BARANG ELEKTRONIK\n";
        cout << "--------------------------------\n";

        cout << "Nama Barang: ";
        cin >> namaBarang[count];
        cout << "Harga: ";
        cin >> harga[count];
        cout << "Jumlah Jual: ";
        cin >> jumlahJual[count];

        totalHarga[count] = harga[count] * jumlahJual[count];
        diskon[count] = 0.10 * totalHarga[count];
        totalBayar[count] = totalHarga[count] - diskon[count];

        cout << "Total Harga: " << totalHarga[count] << endl;
        cout << "Diskon: " << diskon[count] << endl;
        cout << "Total Bayar: " << totalBayar[count] << endl;

        totalPendapatan += totalBayar[count];

        count++;

        if (count >= maxData) {
            cout << "Data penuh, tidak bisa input lagi.\n";
            cin >> lagi;
        }

        cout << "Apakah Mau Input Lagi [Y/T] = ";
        cin >> lagi;

    } while (lagi == 'y' || lagi == 'Y');

    cout << "\nTotal Pendapatan: " << totalPendapatan << endl;

    return 0;
}
