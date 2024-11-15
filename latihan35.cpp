#include <iostream>
#include <conio.h>

using namespace std;

float hitung ( int s );
int main()
{
	float volume, sisi;
	cout << "\n Menghitung Volume KUBUS ";
	cout << "\n Sisi KUBUS : ";
	cin >> sisi;
	volume = hitung(sisi);
	cout << "\n Volume KUBUS yaitu : " << volume;
}

float hitung ( int s )
{
	return ( s * s * s);
	
}
