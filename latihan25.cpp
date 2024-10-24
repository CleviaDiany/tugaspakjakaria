#include <iostream>
#include <iomanip>  
#include <cstring>  
using namespace std;

int main() {
    char nama[30], jabatan[30], kodeJabatan[10];
    char golongan[10];
    int gaji = 0, tunjangan = 0, pinjaman = 0, pajak = 0;
    int totalGajiKotor, totalGajiBersih;
    char hitungLagi;

    do {
        cout << "Nama Pegawai : "; cin >> nama;
        cout << "Golongan (Ia/Ib/IIa/IIb/IIIa/IIIb): "; cin >> golongan;

        if (strcmp(golongan, "Ia") == 0) gaji = 500000;
        else if (strcmp(golongan, "IIa") == 0) gaji = 750000;
        else if (strcmp(golongan, "IIIa") == 0) gaji = 1000000;
        else if (strcmp(golongan, "Ib") == 0) gaji = 1500000;
        else if (strcmp(golongan, "IIb") == 0) gaji = 1750000;
        else if (strcmp(golongan, "IIIb") == 0) gaji = 2500000;
        else {
            cout << "Golongan tidak valid!\n";
            continue;  
        }

        cout << "Kode Jabatan (Dir/Sek/Wak/Stf): "; cin >> kodeJabatan;

        if (strcmp(kodeJabatan, "Dir") == 0) {
            tunjangan = 450000;
            strcpy(jabatan, "Direktur");
        } else if (strcmp(kodeJabatan, "Sek") == 0) {
            tunjangan = 300000;
            strcpy(jabatan, "Sekretaris");
        } else if (strcmp(kodeJabatan, "Wak") == 0) {
            tunjangan = 375000;
            strcpy(jabatan, "Wakil Direktur");
        } else if (strcmp(kodeJabatan, "Stf") == 0) {
            tunjangan = 200000;
            strcpy(jabatan, "Staf Administrasi");
        } else {
            cout << "Kode Jabatan tidak valid!\n";
            continue;  
        }

        cout << "Pinjaman : Rp "; cin >> pinjaman;

        pajak = gaji * 0.05;

        totalGajiKotor = gaji + tunjangan;
        totalGajiBersih = totalGajiKotor - pinjaman - pajak;

        cout << "========================================\n";
        cout << "         GAJI PEGAWAI PT. TELKOM        \n";
        cout << "========================================\n";
        cout << "Nama Pegawai      : " << nama << endl;
        cout << "Golongan          : " << golongan << endl;
        cout << "Kode Jabatan      : " << kodeJabatan << endl;  
        cout << "Jabatan           : " << jabatan << endl;  
        cout << "Gaji              : Rp. " << gaji << endl;
        cout << "Tunjangan         : Rp. " << tunjangan << endl;
        cout << "Pinjaman          : Rp. " << pinjaman << endl;
        cout << "Pajak             : Rp. " << pajak << endl;
        cout << "Total Gaji Kotor  : Rp. " << totalGajiKotor << endl;
        cout << "Total Gaji Bersih : Rp. " << totalGajiBersih << endl;
        cout << "========================================\n";
        
        cout << "Masih Ingin Menghitung Gaji Lagi? (Y/T): ";
        cin >> hitungLagi;
    } while (hitungLagi == 'Y' || hitungLagi == 'y');

    return 0;
}
