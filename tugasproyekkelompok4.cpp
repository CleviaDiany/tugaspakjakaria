// TUGAS PROYEK KELOMPOK 4 : Amelia Cahyaningtyas(240121057), Clevia Diany(240121088), Dwita Amelia Putri(240121069), Asyifa Amelia Purba(240121086)
// KELAS TIFA 2

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <limits> 

using namespace std;

struct DataHandphone {
    string noFaktur, tanggalJual, merek, jenis, warna, ukuran, memori;
    int hargaJual, jumlahBeli, totalPembayaran;
};

vector<DataHandphone> database;

int inputAngka(string pesan) {
    int angka;
    while (true) {
        cout << pesan;
        cin >> angka;

        if (cin.fail()) { 
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Input harus berupa angka! Coba lagi.\n";
        } else {
            return angka; 
        }
    }
}

bool login() {
    string username, password;
    cout << "=== LOGIN ===" << endl;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;
    return (username == "admin" && password == "1234");
}

void tambahData() {
    DataHandphone hp;
    cout << "\n=== Tambah Data Penjualan Handphone ===" << endl;
    cout << "No. Faktur: ";
    cin >> hp.noFaktur;
    cout << "Tanggal Jual: ";
    cin >> hp.tanggalJual;
    cout << "Merek: ";
    cin >> hp.merek;
    cout << "Jenis: ";
    cin >> hp.jenis;
    cout << "Warna: ";
    cin >> hp.warna;
    cout << "Ukuran: ";
    cin >> hp.ukuran;
    cout << "Memori: ";
    cin >> hp.memori;
    hp.hargaJual = inputAngka("Harga Jual: ");
    hp.jumlahBeli = inputAngka("Jumlah Beli: ");
    hp.totalPembayaran = hp.hargaJual * hp.jumlahBeli;
    database.push_back(hp);
    cout << "Data berhasil ditambahkan!\n";
}

void editData() {
    string faktur;
    cout << "\n=== Edit Data Penjualan Handphone ===" << endl;
    cout << "Masukkan No. Faktur: ";
    cin >> faktur;

    for (auto &hp : database) {
        if (hp.noFaktur == faktur) {
            cout << "Data ditemukan. Masukkan data baru." << endl;
            cout << "Merek: ";
            cin >> hp.merek;
            cout << "Jenis: ";
            cin >> hp.jenis;
            cout << "Warna: ";
            cin >> hp.warna;
            cout << "Ukuran: ";
            cin >> hp.ukuran;
            cout << "Memori: ";
            cin >> hp.memori;
            hp.hargaJual = inputAngka("Harga Jual: ");
            hp.jumlahBeli = inputAngka("Jumlah Beli: ");
            hp.totalPembayaran = hp.hargaJual * hp.jumlahBeli;
            cout << "Data berhasil diperbarui!\n";
            return;
        }
    }
    cout << "Data tidak ditemukan!\n";
}

void hapusData() {
    string faktur;
    cout << "\n=== Hapus Data Penjualan Handphone ===" << endl;
    cout << "Masukkan No. Faktur: ";
    cin >> faktur;

    for (auto it = database.begin(); it != database.end(); ++it) {
        if (it->noFaktur == faktur) {
            database.erase(it);
            cout << "Data berhasil dihapus!\n";
            return;
        }
    }
    cout << "Data tidak ditemukan!\n";
}

void lihatData() {
    cout << "\n=== Data Penjualan Handphone ===" << endl;
    if (database.empty()) {
        cout << "Tidak ada data untuk ditampilkan.\n";
        return;
    }

    cout << setw(10) << "No. Faktur" << setw(15) << "Tanggal Jual" << setw(10) << "Merek"
         << setw(10) << "Jenis" << setw(10) << "Warna" << setw(10) << "Ukuran"
         << setw(10) << "Memori" << setw(10) << "Harga" << setw(10) << "Jumlah"
         << setw(15) << "Total" << endl;

    for (const auto &hp : database) {
        cout << setw(10) << hp.noFaktur << setw(15) << hp.tanggalJual << setw(10) << hp.merek
             << setw(10) << hp.jenis << setw(10) << hp.warna << setw(10) << hp.ukuran
             << setw(10) << hp.memori << setw(10) << hp.hargaJual << setw(10) << hp.jumlahBeli
             << setw(15) << hp.totalPembayaran << endl;
    }
}

void cetakData() {
    cout << "\n=== Cetak Data Penjualan Handphone ===" << endl;
    if (database.empty()) {
        cout << "Tidak ada data untuk dicetak.\n";
        return;
    }
    for (const auto &hp : database) {
        cout << "No. Faktur: " << hp.noFaktur << endl;
        cout << "Tanggal Jual: " << hp.tanggalJual << endl;
        cout << "Merek: " << hp.merek << endl;
        cout << "Jenis: " << hp.jenis << endl;
        cout << "Warna: " << hp.warna << endl;
        cout << "Ukuran: " << hp.ukuran << endl;
        cout << "Memori: " << hp.memori << endl;
        cout << "Harga Jual: " << hp.hargaJual << endl;
        cout << "Jumlah Beli: " << hp.jumlahBeli << endl;
        cout << "Total Pembayaran: " << hp.totalPembayaran << endl;
        cout << "-------------------------------\n";
    }
}

void menuUtama() {
    int pilihan;
    do {
        cout << "\n=== Menu Aplikasi Penjualan Handphone ===" << endl;
        cout << "1. Tambah Data Penjualan Handphone" << endl;
        cout << "2. Edit Data Penjualan Handphone" << endl;
        cout << "3. Hapus Data Penjualan Handphone" << endl;
        cout << "4. Lihat Data Penjualan Handphone" << endl;
        cout << "5. Cetak Data Penjualan Handphone" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: tambahData(); break;
            case 2: editData(); break;
            case 3: hapusData(); break;
            case 4: lihatData(); break;
            case 5: cetakData(); break;
            case 6: cout << "Terima kasih telah menggunakan aplikasi ini.\n"; break;
            default: cout << "Pilihan tidak valid!\n"; break;
        }
    } while (pilihan != 6);
}

int main() {
    if (login()) {
        menuUtama();
    } else {
        cout << "Login gagal. Program dihentikan.\n";
    }
    return 0;
}