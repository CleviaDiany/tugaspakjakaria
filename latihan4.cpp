#include <iostream>

using namespace std;

int main() 
{
    float alas,tinggi,luas;
    cout << "Masukkan Nilai Alas = "; 
    cin >> alas;
    cout << "Masukkan Nilai Tinggi = ";
    cin >> tinggi;
    luas=alas*tinggi*0.5;
    cout << "Luas Segitiga Sama Kaki = " << luas << endl;

    return 0;
}
