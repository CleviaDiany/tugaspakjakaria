#include <iostream>

using namespace std;

int main() 
{
    float alas,tinggi,luas;
    cout << "Masukkan Nilai Alas = " << endl; 
    cin >> alas;
    cout << "Masukkan Nilai Tinggi = " << endl;
    cin >> tinggi;
    luas=0,5*alas*tinggi;
    cout << "Luas Segitiga Siku-siku = " << luas << endl;

    return 0;
}