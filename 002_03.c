/*PROGRAM Menampilkan_perkalian_baris_bilangan*/
//Buatlah algoritma dan program untuk menampilkan perkalian baris bilangan. Jumlah baris merupakan masukkan bilangan positif  

#include<stdio.h>

void main () 
{
	/*DEKLARASI*/
	int n;									//inputan
	int a, b, c;							//variabel untuk looping
	int k;									//variabel penampil hasil
	char ulangi;							//untuk mengulang program

	
	/*DESKRIPSI*/
	do
	{
		system("cls");
		printf ("PROGRAM Menampilkan Perkalian Baris Bilangan\n\n");
		printf ("Masukkan Jumlah Baris : ");scanf ("%d", &n);
		if(n<=1)
		{
			printf ("Error");
			break;
		}	
		printf ("\n");
		for (a=1; a <= n; a++) 					//muncul ke bawah
		{ 
			printf("%i", a);
			for (b=1; b <= a; b++)				//muncul ke samping bisa kanan/kiri
			{
				for(c=1;c<=b;c++)				//menghitung tiap baris bantuan dari b
				{
						k=a*c;
				}
				printf (" %i", k);				//menampilkan hasil perhitungan
			}
			printf ("\n");
		}
		fflush(stdin);
		printf ("\nUlangi[Y/T]: ");scanf ("%s", &ulangi);
	}
	while (ulangi=='Y'||ulangi=='y');
} 
