#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int bil;
    
    cout << "Ketik Angka Dari [0..9] = ";
    cin >> bil;
    switch(bil) {
case 0:
            cout << "Anda Mengetikkan Angka 0";
            break;
case 1:     
            cout << "Anda Mengetikkan Angka 1";
            break;
case 2:            
            cout << "Anda Mengetikkan Angka 2";
            break;
case 3:            
            cout << "Anda Mengetikkan Angka 3";
            break;
case 4:            
            cout << "Anda Mengetikkan Angka 4";
            break;
case 5:            
            cout << "Anda Mengetikkan Angka 5";
            break;
case 6:            
            cout << "Anda Mengetikkan Angka 6";
            break;
case 7:            
            cout << "Anda Mengetikkan Angka 7";
            break;
case 8:            
            cout << "Anda Mengetikkan Angka 8";
            break;
case 9:            
            cout << "Anda Mengetikkan Angka 9";
            break;
    default:
            cout << "Anda Mengetikkan Yang Salah";  
    }            

    return 0;
}