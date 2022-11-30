#include <iostream> // Kullan�c�dan veri giri�/��k���n� sa�lamak i�in.
#include <string> // Stringler i�in.
#include <time.h> // time() i�in. 
#include <locale.h> // T�rk�e harfler i�in.
#include <cmath> // Standart sapmay� hesaplarken kulland�m.
using namespace std;

struct Tarih
{
	int gun;
	int ay;
	int yil;
};

struct Ogrenci
{
	string adi;
	string soyadi;

	int no;

	int kisasinav1;
	int kisasinav2;
	int odev1;
	int odev2;
	int proje;
	int vize;
	int final;

	int yilicinotu;
	int basarinotu;

	Tarih dogumtarihi;
};


// Ogrenci veri tipinde "student" ad�ndaki 100 elemanl� array.
Ogrenci student[100];



// Rasgele isim atamas� i�in 30 isimden olu�an isim havuzu.
string NameList[30] = {"Connor", "Noah", "Oliver", "Elijah", "James", "William", "Benjamin", "Lucas", "Henry", "Vincent", 
					   "Ethan", "Jack", "Hank", "Gavin", "Walter", "Olivia", "Emma", "Charlotte", "Amy", "Katya",
					   "Alice", "Anna", "Evelyn", "Valerie", "Elizabeth", "Laura", "Emily", "Diana", "Chloe", "Lucy"};



// Rasgele soyisim atamas� i�in 30 soyisimden olu�an soyisim havuzu.
string SurnameList[30] = {"Smith", "Johnson", "Williams", "Brown", "Jones", "Green", "Miller", "Davis", "Foster", "Graham",
						  "Cooper", "Hill", "Wilson", "Anderson", "Morgan", "Taylor", "Moore", "Jackson", "Martin", "Lee",
						  "Lawrence", "Thompson", "White", "Harris", "Bell", "Clark", "Holmes", "Lewis", "Robinson", "Walker"};



// 0 ile 100 aras�ndaki notu, aral���na g�re harfe �eviren fonksiyon.
void printnottanharfe(int g)
{
	if (0 <= g && g <= 39)
		cout << "F";

	else if (40 <= g && g <= 49)
		cout << "E";

	else if (50 <= g && g <= 54)
		cout << "D";

	else if (55 <= g && g <= 59)
		cout << "D+";

	else if (60 <= g && g <= 64)
		cout << "C";

	else if (65 <= g && g <= 69)
		cout << "C+";

	else if (70 <= g && g <= 74)
		cout << "B";

	else if (75 <= g && g <= 79)
		cout << "B+";

	else if (80 <= g && g <= 84)
		cout << "A-";

	else if (85 <= g && g <= 89)
		cout << "A";

	else if (90 <= g && g <= 100)
		cout << "A+";

	else
		cout << "Hatal� not..." << endl;
}

// Girilen notun 0 ile 100 aras�nda olup olmad���n� denetleyen fonksiyon.
void notkontrol(int a)
{
	cin >> a;
	
	while ((!(0 <= a && a <= 100)))
	{
		cout << "\nL�tfen 0 ile 100 aras� bir not giriniz: ";

		cin >> a;
	}
}







// 1.Se�enek (��rencileri 20'�er 20'�er yazd�r�r.)
void listeyazdir1()
{

	cout << "\nListe yazd�r�l�yor...\n#####################\n\n";

	for (int i = 0; i < 100; i++)
	{
		cout << i + 1 << ". ��renci\n----------------";
		
		cout << "\n�sim: " << student[i].adi << "\n";
		cout << "Soyisim: " << student[i].soyadi << "\n";
		cout << "No: " << student[i].no << "\n";

		cout << "Do�um tarihi: " << student[i].dogumtarihi.gun << "." << student[i].dogumtarihi.ay << "." 
															          << student[i].dogumtarihi.yil << " (G�n/Ay/Y�l)" << "\n";

		cout << "1.K�sa S�nav Notu: " << student[i].kisasinav1;
		cout << " ("; printnottanharfe(student[i].kisasinav1); cout << ")\n";
		
		cout << "2.K�sa S�nav Notu: " << student[i].kisasinav2;
		cout << " ("; printnottanharfe(student[i].kisasinav2); cout << ")\n";

		cout << "1.�dev Notu: " << student[i].odev1;
		cout << " ("; printnottanharfe(student[i].odev1); cout << ")\n";

		cout << "2.�dev Notu: " << student[i].odev2;
		cout << " ("; printnottanharfe(student[i].odev2); cout << ")\n";

		cout << "Proje Notu: " << student[i].proje;
		cout << " ("; printnottanharfe(student[i].proje); cout << ")\n";

		cout << "Vize Notu: " << student[i].vize;
		cout << " ("; printnottanharfe(student[i].vize); cout << ")\n";

		cout << "Final Notu: " << student[i].final;
		cout << " ("; printnottanharfe(student[i].final); cout << ")\n";

		
		cout << "Y�l i�i Notu: " << student[i].yilicinotu;
		cout << " ("; printnottanharfe(student[i].yilicinotu); cout << ")\n";
		
		cout << "Ba�ar� Notu: " << student[i].basarinotu;
		cout << " ("; printnottanharfe(student[i].basarinotu); cout << ")\n\n\n";

		if (((i+1) % 20 == 0) && (i != 0) && ((i+1) != 100))
		{
			cout << "�lk 20 ��renci yazd�r�ld�. Devam etmek i�in herhangi bir tu�a bas�n�z. ";

			char tercih;
			cin >> tercih;

			cout << "L�tfen bekleyiniz...";

			system("cls"); // Kullan�c� enter'a basmad��� s�rece konsoldaki yaz�lar kal�r, bast��� anda konsol temizlenir.
		}
	}
}


 

// 2.Se�enek
int enyukseknot2(Ogrenci student[100])
{
	int i{};
	int max = 0;
	
	for (int i = 0; i < 100; i++)
	{
		if (student[i].basarinotu > max)
		{
			max = student[i].basarinotu;
		}
	}

	return max;
}




// 3.Se�enek
int endusuknot3(Ogrenci student[100])
{
	int j{};
	int min = 100;
	
	for (int j = 0; j < 100; j++)
	{
		if (student[j].basarinotu < min)
		{
			min = student[j].basarinotu;
		}
	}

	return min;
}




// 4.Se�enek
void printortalama4()
{
	double toplam{};

	for (int i = 0; i < 100; i++)
	{
		toplam += student[i].basarinotu;
	}

	cout << "\nS�n�f�n not ortalamas�: " << toplam / 100.0 << "\n\n\n";
}




// 5.Se�enek
void printstandartsapma5()
{
	double toplam{}, ortalama{}, standartsapma{};

	for (int i = 0; i < 100; i++)
	{
		toplam += student[i].basarinotu;
	}

	ortalama = toplam / 100.0;

	
	
	for (int i = 0; i < 100; i++)
	{
		standartsapma += pow(student[i].basarinotu - ortalama, 2);
	}

	standartsapma = sqrt(standartsapma / 100.0);

	cout << "\nS�n�f�n standart sapmas�: " << standartsapma << "\n\n\n";
}




// 6. Se�enek
void printikiaraliktannotsecmece6(Ogrenci student[100])
{
	int kucuk{}, buyuk{};
	int counter{};
	
	cout << "\n\nL�tfen aral�k i�in 0 ile 100 aras�nda iki say� giriniz: ";
	cin >> kucuk >> buyuk;

	if (kucuk > buyuk)
	{
		int temp = kucuk;

		kucuk = buyuk;

		buyuk = temp;
	}
	else if (kucuk == buyuk)
	{
		cout << "Girilen say�lar e�it... L�tfen tekrar giriniz: ";

		cin >> kucuk >> buyuk;
	}
	else if ((!(0 <= kucuk && kucuk <= 100)) || (!(0 <= buyuk && buyuk <= 100)))
	{
		cout << "Girilen say�lar istenilen aral���n d���nda... L�tfen tekrar giriniz: ";

		cin >> kucuk >> buyuk;
	}
	

	for (int i = 0; i < 100; i++)
	{
		if (kucuk < student[i].basarinotu && student[i].basarinotu < buyuk)
		{
			counter++;
		}
	}

	cout << "\nBelirtilen aral�kta notu olan " << counter << " ��renci vard�r. \n\n\n";
}




// 7.Se�enek
void printbirdegeraltinotsecmece7(Ogrenci student[100])
{
	int deger{}, counter{};
	
	cout << "\n\nL�tfen de�eri giriniz: ";
	cin >> deger;

	if (!(0 <= deger && deger <= 100))
	{
		cout << "L�tfen 0 ile 100 aras�nda bir de�er giriniz: ";
		cin >> deger;
	}

	for (int i = 0; i < 100; i++)
	{
		if (0 <= student[i].basarinotu && student[i].basarinotu < deger)
		{
			counter++;
		}
	}

	cout << "\nNotu " << deger << " alt�nda olan " << counter << " ��renci vard�r. \n\n\n";
}




// 8.Se�enek
void printbirdegerustunotsecmece8(Ogrenci student[100])
{
	int deger{}, counter{};

	cout << "\n\nL�tfen de�eri giriniz: ";
	cin >> deger;

	if (!(0 <= deger && deger <= 100))
	{
		cout << "L�tfen 0 ile 100 aras�nda bir de�er giriniz: ";
		cin >> deger;
	}

	for (int i = 0; i < 100; i++)
	{
		if (deger < student[i].basarinotu && student[i].basarinotu <= 100)
		{
			counter++;
		}
	}

	cout << "\nNotu " << deger << " �st�nde olan " << counter << " ��renci vard�r. \n\n\n";
}





int main()
{
	srand(time(NULL)); // Program�n ba�lang�c�nda seed olu�turuluyor.
	
	setlocale(LC_ALL, "Turkish"); // T�rk�e karakterler etkinle�tirildi.
	
	int secim{}, menusecim{};

	L370:
	cout << "��rencilerin rasgele girilmesini istiyorsan�z 1'e bas�n.\n";
	cout << "��rencileri manuel girmek i�in 2'ye bas�n. ";

	cin >> secim;
	
	cout << "\n";
	
	
	

	switch (secim)
	{
		
	
		case 1:
		{
			
			// ��rencinin ismi, soyismi, numaras�, k�sa s�nav notu vb. atamas�.
			// 1.ci ��renciden 100.c� ��renciye kadar her birine rasgele isim, soyisim, do�um tarihi ve di�er notlar atan�yor.
			for (int i = 0; i < 100; i++)
			{
				
				student[i].adi = NameList[rand() % 30];

				student[i].soyadi = SurnameList[rand() % 30];

				
				student[i].dogumtarihi.gun = rand() % 30 + 1;

				student[i].dogumtarihi.ay = rand() % 12 + 1;

				student[i].dogumtarihi.yil = rand() % (2005 - 1990) + 1990; // 1990 ile 2005 aras� rasgele say� olu�turur.

				
				for (int r = 0; r < 100; r++)
				{

					student[r].no = rand() % 10000;

					student[r].kisasinav1 = rand() % 100;
					student[r].kisasinav2 = rand() % 100;

					student[r].odev1 = rand() % 100;
					student[r].odev2 = rand() % 100;

					student[r].proje = rand() % 100;

					student[r].vize = rand() % 100;

					student[r].final = rand() % 100;

					// Y�l i�i ve ba�ar� notlar�, rasgele atanan notlara g�re hesaplan�p o ��renciye atan�r.
					student[r].yilicinotu = (student[r].vize * 0.5) + 
											(student[r].kisasinav1 * 0.07) + 
											(student[r].kisasinav2 * 0.07) + 
											(student[r].odev1 * 0.10) + 
											(student[r].odev2 * 0.10) + 
											(student[r].proje * 0.16);

					student[r].basarinotu = (student[r].yilicinotu * 0.55) + (student[r].final * 0.45);
					
				}
			}
             goto L498;
		}
		break;

		
		case 2:
		{
			cout << "------------------------------------------------------------------------------\n";
			
			// 100 ��rencinin isminin, soyisminin ve notlar�n�n elle atan�yor.
			for (int i = 0; i < 100; i++)
			{
				cout << i + 1 << ". ��rencinin ad�n� giriniz: ";
				cin >> student[i].adi;
				

				cout << i + 1 << ". ��rencinin soyad�n� giriniz: ";
				cin >> student[i].soyadi;
				

				cout << i + 1 << ". ��rencinin numaras�n� giriniz: ";
				cin >> student[i].no;

				cout << i + 1 << ". ��rencinin -s�ras�yla- do�du�u g�n�, ay� ve y�l� yaz�n�z: ";
				cin >> student[i].dogumtarihi.gun >> student[i].dogumtarihi.ay >> student[i].dogumtarihi.yil;
				

				cout << i + 1 << ". ��rencinin 1.k�sa s�nav notunu giriniz: ";
				notkontrol(student[i].kisasinav1);
				

				cout << i + 1 << ". ��rencinin 2.k�sa s�nav notunu giriniz: ";
				notkontrol(student[i].kisasinav2);
				

				cout << i + 1 << ". ��rencinin 1.�dev notunu giriniz: ";
				notkontrol(student[i].odev1);
				

				cout << i + 1 << ". ��rencinin 2.�dev notunu giriniz: ";
				notkontrol(student[i].odev2);
				

				cout << i + 1 << ". ��rencinin vize notunu giriniz: ";
				notkontrol(student[i].vize);
				

				cout << i + 1 << ". ��rencinin final notunu giriniz: ";
				notkontrol(student[i].final);
				cout << "\n";

				
			}
	        goto L498;
		}
		break;

		
		default:
		{
			cout << "Hata... L�tfen tekrar giriniz.\n\n\n"; goto L370;
		}
		
	
		L498:
		cout << "*************************************************************************************\n"
			    "��renci listesini yazd�rmak i�in 1'e \n"
				"S�n�f�n en y�ksek notunu yazd�rmak i�in 2'ye \n"
				"S�n�f�n en d���k notunu yazd�rmak i�in 3'e \n"
				"S�n�f�n ortalamas�n� hesaplamak i�in 4'e \n"
				"S�n�f�n standart sapmas�n� hesaplamak i�in 5'e \n"
				"Ba�ar� notu belirli bir aral�ktaki ��rencileri yazd�rmak i�in 6'ya \n"
				"Ba�ar� notu belirli bir de�erin alt�ndaki ��rencileri yazd�rmak i�in 7'ye \n"
				"Ba�ar� notu belirli bir de�erin �st�ndeki ��rencileri yazd�rmak i�in 8'ye bas�n�z. \n"
				"��kmak i�in 9'a bas�n�z. ";

		

		cin >> menusecim;
		
		
		switch (menusecim)
		{
			
			case 1: listeyazdir1(); goto L498; break;
			

			case 2: cout << "\nS�n�ftaki en y�ksek not: " << enyukseknot2(student) << "\n\n\n"; goto L498; break;
			
		
			case 3: cout << "\nS�n�ftaki en d���k not: " << endusuknot3(student) << "\n\n\n"; goto L498; break;
			

			case 4: printortalama4(); goto L498; break;
			

			case 5: printstandartsapma5(); goto L498; break;
			

			case 6: printikiaraliktannotsecmece6(student); goto L498; break;
			 

			case 7: printbirdegeraltinotsecmece7(student); goto L498; break;
			

			case 8: printbirdegerustunotsecmece8(student); goto L498; break;

		
			case 9: break;
			

			default: cout << "\nHatal� se�im... L�tfen 1 ve 9 aras�nda bir de�er giriniz.\n\n\n"; goto L498;
		}

	
	}
	

	return 0;
}