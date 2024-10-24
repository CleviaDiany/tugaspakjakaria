//Nama: Clevia Diany, NIM: 240121088, Jurusan: Teknik Informatika, Kelas: TIFA 2.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string namamahasiswa, npm, kodejurusan, jurusan;
    int pembayaranawal, jumlahcicilan, besarcicilan, pembayaranke;
    char pilihan;
    
    do {
        cout << "Masukkan Nama Mahasiswa: ";
        getline(cin, namamahasiswa);
        cout << "Masukkan NPM: ";
        getline(cin, npm);
        cout << "Masukkan Kode Jurusan (SI/TI/KA/MI): ";
        cin >> kodejurusan;
        
        if (kodejurusan == "SI") {
            jurusan = "Sistem Informasi";
            pembayaranawal = 2100000;
            jumlahcicilan = 7;
            besarcicilan = 300000;
        } else if (kodejurusan == "TI") {
            jurusan = "Teknik Informatika";
            pembayaranawal = 2500000;
            jumlahcicilan = 7;
            besarcicilan = 300000;
        } else if (kodejurusan == "KA") {
            jurusan = "Komputer Akuntansi";
            pembayaranawal = 1750000;
            jumlahcicilan = 6;
            besarcicilan = 200000;
        } else if (kodejurusan == "MI") {
            jurusan = "Manajemen Informatika";
            pembayaranawal = 1500000;
            jumlahcicilan = 6;
            besarcicilan = 250000;
        } else {
            cout << "Kode Jurusan tidak valid.\n";
            continue;
        }

        cout << "Masukkan pembayaran ke (1-" << jumlahcicilan << "): ";
        cin >> pembayaranke;

        if (pembayaranke < 1 || pembayaranke > jumlahcicilan) {
            cout << "Pembayaran ke tidak valid.\n";
            continue;
        }

        int uangkuliah = pembayaranawal + (jumlahcicilan * besarcicilan);
        int uangkuliahterbayar = pembayaranawal + (pembayaranke * besarcicilan);
        int sisauangkuliah = uangkuliah - uangkuliahterbayar;
        
        cout << "\n\n===============================================" << endl;
        cout << "            PEMBAYARAN UANG KULIAH                " << endl;
        cout << "===============================================" << endl;

        cout << "Nama Mahasiswa          : " << namamahasiswa << endl;
        cout << "NPM                     : " << npm << endl;
        cout << "Kode Jurusan            : " << kodejurusan << endl;
        cout << "Jurusan                 : " << jurusan << endl;
        cout << "Pembayaran Awal Rp      : Rp. " << pembayaranawal << endl;
        cout << "Jumlah Cicilan          : " << jumlahcicilan << endl;
        cout << "Besar Cicilan Rp        : Rp. " << besarcicilan << endl;
        cout << "Pembayaran Ke           : " << pembayaranke << endl;
        cout << "Uang Kuliah Rp          : Rp. " << uangkuliah << endl;
        cout << "Uang Kuliah Terbayar Rp : Rp. " << uangkuliahterbayar << endl;
        cout << "Sisa Uang Kuliah Rp     : Rp. " << sisauangkuliah << endl;

        cout << "===============================================\n";

        cout << "Masih ingin menghitung [Y/T]: ";
        cin >> pilihan;
        cin.ignore();  

    } while (pilihan == 'Y' || pilihan == 'y');
    
    return 0;
}