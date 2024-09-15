#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    float gajiperjam=500,jumlahjamkerja,lembur,totalgaji;
    char namapegawai[30];
    
    cout << "PERHITUNGAN GAJI PEGAWAI HARIAN" << endl;
    cout << "-------------------------------" << endl;
    
    cout << "Nama Pegawai : ";
    cin.getline(namapegawai, 30);
    cout << "Jumlah Jam Kerja : ";
    cin >> jumlahjamkerja;
    
    if (jumlahjamkerja>7) {
        lembur=(1.5*gajiperjam*(jumlahjamkerja-7));
        totalgaji=(7*gajiperjam)+lembur;
    }else {
        lembur=0;
        totalgaji=(jumlahjamkerja*gajiperjam)+lembur;
    }
    
    cout << "Total Gaji Pegawai Harian = " << totalgaji << endl;    

    return 0;
}