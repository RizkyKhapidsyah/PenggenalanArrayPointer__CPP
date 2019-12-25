#include <iostream>
#include <conio.h>

using namespace std;

void CetakJudul(char, string, char);

int main()
{
	string J, K, L; char GarisMin = '-';
	J = "CONTOH ARRAY POINTER";

	//Fokus Mulai Dari Sini..
	CetakJudul(GarisMin, J, GarisMin);

	//Membuat Array
	int Nilai[6];

	Nilai[0] = 1;
	Nilai[1] = 4;
	Nilai[2] = 0;
	Nilai[3] = 6;
	Nilai[4] = 8;

	cout << &Nilai[0] << " Niilainya Adalah  = " << Nilai[0] << endl;
	cout << &Nilai[1] << " Niilainya Adalah  = " << Nilai[1] << endl;
	cout << &Nilai[2] << " Niilainya Adalah  = " << Nilai[2] << endl;
	cout << &Nilai[3] << " Niilainya Adalah  = " << Nilai[3] << endl;
	cout << &Nilai[4] << " Niilainya Adalah  = " << Nilai[4] << endl << endl;

	int* Ptr = Nilai;
	
	*(Ptr + 2) = 6;
	Nilai[3] = 7;

	cout << &Nilai[0] << " Niilainya Adalah  = " << Nilai[0] << endl;
	cout << &Nilai[1] << " Niilainya Adalah  = " << Nilai[1] << endl;
	cout << &Nilai[2] << " Niilainya Adalah  = " << Nilai[2] << endl;
	cout << &Nilai[3] << " Niilainya Adalah  = " << Nilai[3] << endl;
	cout << &Nilai[4] << " Niilainya Adalah  = " << Nilai[4] << endl << endl;

	cout << "Ukuran Array         = " << sizeof(Nilai) << " byte" << endl;
	cout << "Jumlah Member Array  = " << sizeof(Nilai) / sizeof(int) << endl;

	_getch();
	return 0;
}

//Abaikan Fungsi Ini, Hanya Peleengkap
void CetakJudul(char C, string S, char H)
{
	for (int i = 0; i <= 40; i++)
	{
		cout << C;
	}

	cout << endl << S << endl;

		for (int i = 0; i <= 40; i++)
		{
			cout << H;
		}

		cout << endl;
}