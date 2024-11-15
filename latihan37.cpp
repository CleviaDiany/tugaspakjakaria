#include <iostream>
#include <conio.h>
 
using namespace std;

float gaji_pk(char gol), pajak(float gaji);
float tunjang (float gaji, char status, int anak);

void garis();

int main() 
{
	int anak;
	char golong, stat;
	float gaji, gajipokok, tnj, pjk;
	while(1) 
{
	/*Cetak Judul Program*/
	cout <<  "\n\n Program Untuk Menghitung Gaji Karyawan";
	cout << "\n\n Untuk Menghentikan Program ketik x pada Golongan \n";
	
	garis();
	
	/*Input Data*/
	cout << "\n Golongan Karyawan(A-C & X untuk Selesai ) :";
	golong = getche();
	if( golong =='x' || golong == 'X' )
	break;
	cout << "\n Status Karyawan (N=Nikah & B=Belum) : ";
	stat = getche();
	if (stat =='N' || stat =='n')
{
	cout << "\n\t jumlah anak : ";
	cin >> anak;
} else
cout << "\n\t";
/*Menghitung Gaji Bersih*/
gajipokok = gaji_pk(golong);
tnj = tunjang(gajipokok, stat, anak);
pjk = pajak(gajipokok);
gaji = gajipokok + tnj-pjk;

/*Cetak Output*/
cout << "\n\n";
cout << "\nGaji Pokok = Rp." << gajipokok;
cout << "\nTunjangan = Rp." << tnj;
cout << "\n---------------------------------------------------------------- +";
cout << "\nTotal = Rp." << gajipokok + tnj;
cout << "\nPajak = Rp." << pjk;
cout << "\n---------------------------------------------------------------- +";
cout << "\nGajiBersih = Rp." << gaji;
cout << "\n---------------------------------------------------------------- +";
cout << "\n\nTekan sembarang Tombol";
getch();
}
}
void garis()/*Menggambar Garis*/
{
	cout << "\n";
	for (int i=1 ; i<50; ++i)
	cout << "\xB1";
}
/*Menghitung Gaji Pokok*/
float gaji_pk( char gol )
{
	switch(gol)
{
	case 'A' :
		case 'a' :
		return(50000.00);
	case 'B' :
		case 'b' :
		return(50000.00);
	case 'C' :
		case 'c' :
		return(50000.00);
}
}

/*Menghitung tunjangan*/
float tunjang(float gaji, char status, int anak)
{
	float ta,ti;
	if (status == 'B' || status =='b')
{
	ta = 0;
	ti = 0;
}
else if (status == 'N' || status =='n')
{
	ta = 0.15 * gaji;
	ti = anak > 3 ? 3 * .1 * gaji : anak * .1 * gaji ;
}
return (ta + ti);
}

/*Menghitung Pajak*/
float pajak(float gaji)
{
	float pjk;
	pjk = gaji <= 96000 ? 0 : .15 * (gaji - 96000);
	return( pjk );
}
