#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string namabarang;
    double harga, jumlahjual, totalharga, diskon, totalbayar;

    cout << "PENJUALAN BARANG ELEKTRONIK\n";
    cout<< "---------------------------" << endl;

    cout << "Nama Barang: ";
    cin >> namabarang;

    cout << "Harga: ";
    cin >> harga;

    cout << "Jumlah Jual: ";
    cin >> jumlahjual;

    totalharga = harga*jumlahjual;
    diskon = 0.10*totalharga;
    totalbayar = totalharga-diskon;

    cout << "Total Harga: Rp. " << totalharga << endl;
    cout << "Diskon: Rp. " << diskon << endl;
    cout << "Total Bayar: Rp. " << totalbayar << endl;

    return 0;
}
