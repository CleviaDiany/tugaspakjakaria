#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float jumlahpenjualan,lebihdari=500000,komisi=0.1;
	
    cout << "Masukkan Jumlah Penjualan : ";
    cin >> jumlahpenjualan;
    
    if (jumlahpenjualan<=500000) {
        komisi=jumlahpenjualan*0.1;
    }else {
        komisi=500000*0.1+((jumlahpenjualan-500000)*0.15);
    }
    
    cout << "Total Komisi Yang Didapat Adalah : Rp. " << komisi << endl;   
    
    return 0;
}         
    
    