#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    string npm;
    string nama;
    float nilaimid;
    float nilaisemester;
    float nilaiakhir;
    char nilaihuruf;
};

void hitungnilai(Mahasiswa &m) {
    m.nilaiakhir = (0.4 * m.nilaimid) + (0.6 * m.nilaisemester);

    if (m.nilaiakhir >= 80) m.nilaihuruf = 'A';
    else if (m.nilaiakhir >= 70) m.nilaihuruf = 'B';
    else if (m.nilaiakhir >= 55) m.nilaihuruf = 'C';
    else if (m.nilaiakhir >= 40) m.nilaihuruf = 'D';
    else m.nilaihuruf = 'E';
}

int main() {
    const int maxMahasiswa = 100;
    Mahasiswa mahasiswa[maxMahasiswa];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa (maksimal 100): ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; ++i) {
        cout << "\nData Mahasiswa " << i + 1 << ":\n";
        cout << "NPM: ";
        cin >> mahasiswa[i].npm;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, mahasiswa[i].nama);
        cout << "Nilai Mid: ";
        cin >> mahasiswa[i].nilaimid;
        cout << "Nilai Semester: ";
        cin >> mahasiswa[i].nilaisemester;
        
        hitungnilai(mahasiswa[i]);
    }
    
    cout << "\nData Nilai Ujian Pemrograman C++\n";
    cout << "Dosen: Budiman, S.Si";
    cout << "\n-----------------------------------------------------\n";
    for (int i = 0; i < jumlah; ++i) {
        cout << "NPM           : " << mahasiswa[i].npm << endl;
        cout << "Nama          : " << mahasiswa[i].nama << endl;
        cout << "Nilai Mid     : " << mahasiswa[i].nilaimid << endl;
        cout << "Nilai Semester: " << mahasiswa[i].nilaisemester << endl;
        cout << "Nilai Akhir   : " << fixed << setprecision(2) << mahasiswa[i].nilaiakhir << endl;
        cout << "Nilai Huruf   : " << mahasiswa[i].nilaihuruf << endl;
        cout << "-----------------------------------------------------\n";
    }

    return 0;
}
