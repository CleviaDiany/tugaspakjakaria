#include <iostream>

using namespace std;

int main() 
{
    char npeg[20],njab[20];
    float gaji,pajak,pinjaman,gaber=0;
    cout << "Nama Pegawai : "; 
    cin >> npeg;
    cout << "Jabatan : ";
    cin >> njab;
    cout << "Gaji : ";
    cin >> gaji;
    pajak=0.15*gaji;
    cout << "Pajak : " << pajak << endl;
    cout << "Pinjaman : ";
    cin >> pinjaman;
    gaber=gaji-(pinjaman+pajak);
    cout << "Gaji Bersih : " << gaber << endl;

    return 0;
}