//Penggunaan Prototipe pada Fungsi

#pragma warning(disable:4996)

#include <iostream>
#include <conio.h>
#include <string.h> //untuk strcpy

/* Created by Rizky Khapidsyah */

using namespace std;

char coment(char ket[30], int n); //prototipe fungsi

int main() {
	char lagi, c[30];
	int i;
atas:
	{
		cout << "Masukkan nilai = "; cin >> i;
		coment(c, i); //paramater formal
		cout << c;
		cout << "\n\nIngin input lagi [Y/T]: "; cin >> lagi;
	}

	if (lagi == 'Y' || lagi == 'y') {
		goto atas;
	}
	else {
		_getch();
	}

	return 0;
}

//blok program fungsi dengan parameter aktual
char coment(char ket[30], int n) {
	int a;
	
	a = n % 2;
	
	if (a == 1) {
		strcpy(ket, "---Bilangan Ganjil---");
	} else {
		strcpy(ket, "---Bilangan Genap---");
	}

	return a;
}