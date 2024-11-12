#include <iostream>
#include <string>
using namespace std;

struct Pegawai {
    string nama;
    char golongan;
    string kodeJabatan;
    int pinjaman;
    string jabatan;
    int gaji;
    int tunjangan;
    float pajak;
    int totalGajiKotor;
    int totalGajiBersih;
};

int getGaji(char golongan) {
    switch (golongan) {
        case '1': return 500000;
        case '2': return 750000;
        case '3': return 1000000;
        case '4': return 1500000;
        case '5': return 1750000;
        case '6': return 2500000;
        default: return 0;
    }
}

int getTunjangan(string kodeJabatan, string &jabatan) {
    if (kodeJabatan == "Dr") {
        jabatan = "Direktur";
        return 450000;
    } else if (kodeJabatan == "Sek") {
        jabatan = "Sekretaris";
        return 300000;
    } else if (kodeJabatan == "Wak") {
        jabatan = "Wakil Direktur";
        return 375000;
    } else if (kodeJabatan == "Stf") {
        jabatan = "Staf Administrasi";
        return 200000;
    } else {
        jabatan = "Tidak Diketahui";
        return 0;
    }
}

void hitungGaji(Pegawai &peg) {
    peg.gaji = getGaji(peg.golongan);
    peg.tunjangan = getTunjangan(peg.kodeJabatan, peg.jabatan);
    peg.pajak = 0.05 * peg.gaji;
    peg.totalGajiKotor = peg.gaji + peg.tunjangan;
    peg.totalGajiBersih = peg.totalGajiKotor - peg.pinjaman - peg.pajak;
}

void tampilkanGaji(const Pegawai &peg) {
    cout << "\nGAJI PEGAWAI PT. TELKOM\n";
    cout << "---------------------------------------------\n";
    cout << "Nama Pegawai   : " << peg.nama << endl;
    cout << "Golongan       : " << peg.golongan << endl;
    cout << "Kode Jabatan   : " << peg.kodeJabatan << endl;
    cout << "Jabatan        : " << peg.jabatan << endl;
    cout << "Gaji           : " << peg.gaji << endl;
    cout << "Tunjangan      : " << peg.tunjangan << endl;
    cout << "Pinjaman       : " << peg.pinjaman << endl;
    cout << "Pajak          : " << peg.pajak << endl;
    cout << "          Total Gaji Kotor : " << peg.totalGajiKotor << endl;
    cout << "          Total Gaji Bersih : " << peg.totalGajiBersih << endl;
    cout << "---------------------------------------------\n";
}

int main() {
    Pegawai peg;
    char pilihan;

    do {
        cout << "Masukkan Nama Pegawai: ";
        cin >> peg.nama;
        cout << "Masukkan Golongan (1-6): ";
        cin >> peg.golongan;
        cout << "Masukkan Kode Jabatan (Dr/Sek/Wak/Stf): ";
        cin >> peg.kodeJabatan;
        cout << "Masukkan Jumlah Pinjaman: ";
        cin >> peg.pinjaman;

        hitungGaji(peg);
        tampilkanGaji(peg);

        cout << "Masih Ingin Menghitung Gaji Lagi [Y/T]: ";
        cin >> pilihan;
    } while (pilihan == 'Y' || pilihan == 'y');

    return 0;
}