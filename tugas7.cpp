// Clevia Diany (240121088)

#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;

int gajiPokok(int jamKerja) {
    return jamKerja * 2000;
}

int uangLembur(int jamKerja) {
    int lemburJam = (jamKerja > 7) ? jamKerja - 7 : 0;
    return lemburJam * 3000;
}

int uangMakan(int jamKerja) {
    if (jamKerja >= 8 && jamKerja <= 10)
        return 1500;
    else if (jamKerja > 10)
        return 2500;
    else
        return 0;
}

int jasaLembur(int jamKerja) {
    return (jamKerja >= 9) ? 3000 : 0;
}

int main() {
    string nama;
    string input;

    while (true) {
        cout << "Masukkan nama karyawan (ketik 'x' untuk selesai): ";
        getline(cin, nama);

        if (nama == "x" || nama == "X") {
            cout << "Program selesai." << endl;
            break;
        }

        cout << "Masukkan jam kerja " << nama << ": ";
        cin >> input;
        cin.ignore(); 

        int jamKerja = stoi(input);

        int gaji = gajiPokok(jamKerja);
        int lembur = uangLembur(jamKerja);
        int makan = uangMakan(jamKerja);
        int jasa = jasaLembur(jamKerja);

        int totalGaji = gaji + lembur + makan + jasa;

        cout << endl;
        cout << "PT REJEKI NOMPLOK" << endl;
        cout << "------------------------------------------" << endl;
        cout << nama << " bekerja selama " << jamKerja << " jam, maka:" << endl;

        cout << left << setw(20) << "Gaji Pokok" 
             << "= " << jamKerja << " x 2000 = " << gaji << endl;

        if (jamKerja > 7) {
            int jamLembur = jamKerja - 7;
            cout << left << setw(20) << "Uang Lembur" 
                 << "= " << jamLembur << " x 3000 = " << lembur << endl;
        } else {
            cout << left << setw(20) << "Uang Lembur" 
                 << "= 0" << endl;
        }

        cout << left << setw(20) << "Uang Makan" 
             << "= " << makan << endl;

        cout << left << setw(20) << "Uang Jasa Lembur" 
             << "= " << jasa << endl;

        cout << left << setw(20) << "Gaji yang Diterima" 
             << "= " << totalGaji << endl;
        cout << "------------------------------------------" << endl;
        cout << endl;
    }

    return 0;
}
