#include <iostream> // Kullanýcýdan veri giriþ/çýkýþýný saðlamak için.
#include <string> // Stringler için.
#include <time.h> // time() için. 
#include <locale.h> // Türkçe harfler için.
#include <cmath> // Standart sapmayý hesaplarken kullandým.
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


// Ogrenci veri tipinde "student" adýndaki 100 elemanlý array.
Ogrenci student[100];



// Rasgele isim atamasý için 30 isimden oluþan isim havuzu.
string NameList[30] = {"Connor", "Noah", "Oliver", "Elijah", "James", "William", "Benjamin", "Lucas", "Henry", "Vincent", 
					   "Ethan", "Jack", "Hank", "Gavin", "Walter", "Olivia", "Emma", "Charlotte", "Amy", "Katya",
					   "Alice", "Anna", "Evelyn", "Valerie", "Elizabeth", "Laura", "Emily", "Diana", "Chloe", "Lucy"};



// Rasgele soyisim atamasý için 30 soyisimden oluþan soyisim havuzu.
string SurnameList[30] = {"Smith", "Johnson", "Williams", "Brown", "Jones", "Green", "Miller", "Davis", "Foster", "Graham",
						  "Cooper", "Hill", "Wilson", "Anderson", "Morgan", "Taylor", "Moore", "Jackson", "Martin", "Lee",
						  "Lawrence", "Thompson", "White", "Harris", "Bell", "Clark", "Holmes", "Lewis", "Robinson", "Walker"};



// 0 ile 100 arasýndaki notu, aralýðýna göre harfe çeviren fonksiyon.
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
		cout << "Hatalý not..." << endl;
}

// Girilen notun 0 ile 100 arasýnda olup olmadýðýný denetleyen fonksiyon.
void notkontrol(int a)
{
	cin >> a;
	
	while ((!(0 <= a && a <= 100)))
	{
		cout << "\nLütfen 0 ile 100 arasý bir not giriniz: ";

		cin >> a;
	}
}







// 1.Seçenek (Öðrencileri 20'þer 20'þer yazdýrýr.)
void listeyazdir1()
{

	cout << "\nListe yazdýrýlýyor...\n#####################\n\n";

	for (int i = 0; i < 100; i++)
	{
		cout << i + 1 << ". Öðrenci\n----------------";
		
		cout << "\nÝsim: " << student[i].adi << "\n";
		cout << "Soyisim: " << student[i].soyadi << "\n";
		cout << "No: " << student[i].no << "\n";

		cout << "Doðum tarihi: " << student[i].dogumtarihi.gun << "." << student[i].dogumtarihi.ay << "." 
															          << student[i].dogumtarihi.yil << " (Gün/Ay/Yýl)" << "\n";

		cout << "1.Kýsa Sýnav Notu: " << student[i].kisasinav1;
		cout << " ("; printnottanharfe(student[i].kisasinav1); cout << ")\n";
		
		cout << "2.Kýsa Sýnav Notu: " << student[i].kisasinav2;
		cout << " ("; printnottanharfe(student[i].kisasinav2); cout << ")\n";

		cout << "1.Ödev Notu: " << student[i].odev1;
		cout << " ("; printnottanharfe(student[i].odev1); cout << ")\n";

		cout << "2.Ödev Notu: " << student[i].odev2;
		cout << " ("; printnottanharfe(student[i].odev2); cout << ")\n";

		cout << "Proje Notu: " << student[i].proje;
		cout << " ("; printnottanharfe(student[i].proje); cout << ")\n";

		cout << "Vize Notu: " << student[i].vize;
		cout << " ("; printnottanharfe(student[i].vize); cout << ")\n";

		cout << "Final Notu: " << student[i].final;
		cout << " ("; printnottanharfe(student[i].final); cout << ")\n";

		
		cout << "Yýl içi Notu: " << student[i].yilicinotu;
		cout << " ("; printnottanharfe(student[i].yilicinotu); cout << ")\n";
		
		cout << "Baþarý Notu: " << student[i].basarinotu;
		cout << " ("; printnottanharfe(student[i].basarinotu); cout << ")\n\n\n";

		if (((i+1) % 20 == 0) && (i != 0) && ((i+1) != 100))
		{
			cout << "Ýlk 20 öðrenci yazdýrýldý. Devam etmek için herhangi bir tuþa basýnýz. ";

			char tercih;
			cin >> tercih;

			cout << "Lütfen bekleyiniz...";

			system("cls"); // Kullanýcý enter'a basmadýðý sürece konsoldaki yazýlar kalýr, bastýðý anda konsol temizlenir.
		}
	}
}


 

// 2.Seçenek
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




// 3.Seçenek
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




// 4.Seçenek
void printortalama4()
{
	double toplam{};

	for (int i = 0; i < 100; i++)
	{
		toplam += student[i].basarinotu;
	}

	cout << "\nSýnýfýn not ortalamasý: " << toplam / 100.0 << "\n\n\n";
}




// 5.Seçenek
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

	cout << "\nSýnýfýn standart sapmasý: " << standartsapma << "\n\n\n";
}




// 6. Seçenek
void printikiaraliktannotsecmece6(Ogrenci student[100])
{
	int kucuk{}, buyuk{};
	int counter{};
	
	cout << "\n\nLütfen aralýk için 0 ile 100 arasýnda iki sayý giriniz: ";
	cin >> kucuk >> buyuk;

	if (kucuk > buyuk)
	{
		int temp = kucuk;

		kucuk = buyuk;

		buyuk = temp;
	}
	else if (kucuk == buyuk)
	{
		cout << "Girilen sayýlar eþit... Lütfen tekrar giriniz: ";

		cin >> kucuk >> buyuk;
	}
	else if ((!(0 <= kucuk && kucuk <= 100)) || (!(0 <= buyuk && buyuk <= 100)))
	{
		cout << "Girilen sayýlar istenilen aralýðýn dýþýnda... Lütfen tekrar giriniz: ";

		cin >> kucuk >> buyuk;
	}
	

	for (int i = 0; i < 100; i++)
	{
		if (kucuk < student[i].basarinotu && student[i].basarinotu < buyuk)
		{
			counter++;
		}
	}

	cout << "\nBelirtilen aralýkta notu olan " << counter << " öðrenci vardýr. \n\n\n";
}




// 7.Seçenek
void printbirdegeraltinotsecmece7(Ogrenci student[100])
{
	int deger{}, counter{};
	
	cout << "\n\nLütfen deðeri giriniz: ";
	cin >> deger;

	if (!(0 <= deger && deger <= 100))
	{
		cout << "Lütfen 0 ile 100 arasýnda bir deðer giriniz: ";
		cin >> deger;
	}

	for (int i = 0; i < 100; i++)
	{
		if (0 <= student[i].basarinotu && student[i].basarinotu < deger)
		{
			counter++;
		}
	}

	cout << "\nNotu " << deger << " altýnda olan " << counter << " öðrenci vardýr. \n\n\n";
}




// 8.Seçenek
void printbirdegerustunotsecmece8(Ogrenci student[100])
{
	int deger{}, counter{};

	cout << "\n\nLütfen deðeri giriniz: ";
	cin >> deger;

	if (!(0 <= deger && deger <= 100))
	{
		cout << "Lütfen 0 ile 100 arasýnda bir deðer giriniz: ";
		cin >> deger;
	}

	for (int i = 0; i < 100; i++)
	{
		if (deger < student[i].basarinotu && student[i].basarinotu <= 100)
		{
			counter++;
		}
	}

	cout << "\nNotu " << deger << " üstünde olan " << counter << " öðrenci vardýr. \n\n\n";
}





int main()
{
	srand(time(NULL)); // Programýn baþlangýcýnda seed oluþturuluyor.
	
	setlocale(LC_ALL, "Turkish"); // Türkçe karakterler etkinleþtirildi.
	
	int secim{}, menusecim{};

	L370:
	cout << "Öðrencilerin rasgele girilmesini istiyorsanýz 1'e basýn.\n";
	cout << "Öðrencileri manuel girmek için 2'ye basýn. ";

	cin >> secim;
	
	cout << "\n";
	
	
	

	switch (secim)
	{
		
	
		case 1:
		{
			
			// Öðrencinin ismi, soyismi, numarasý, kýsa sýnav notu vb. atamasý.
			// 1.ci öðrenciden 100.cü öðrenciye kadar her birine rasgele isim, soyisim, doðum tarihi ve diðer notlar atanýyor.
			for (int i = 0; i < 100; i++)
			{
				
				student[i].adi = NameList[rand() % 30];

				student[i].soyadi = SurnameList[rand() % 30];

				
				student[i].dogumtarihi.gun = rand() % 30 + 1;

				student[i].dogumtarihi.ay = rand() % 12 + 1;

				student[i].dogumtarihi.yil = rand() % (2005 - 1990) + 1990; // 1990 ile 2005 arasý rasgele sayý oluþturur.

				
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

					// Yýl içi ve baþarý notlarý, rasgele atanan notlara göre hesaplanýp o öðrenciye atanýr.
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
			
			// 100 öðrencinin isminin, soyisminin ve notlarýnýn elle atanýyor.
			for (int i = 0; i < 100; i++)
			{
				cout << i + 1 << ". Öðrencinin adýný giriniz: ";
				cin >> student[i].adi;
				

				cout << i + 1 << ". Öðrencinin soyadýný giriniz: ";
				cin >> student[i].soyadi;
				

				cout << i + 1 << ". Öðrencinin numarasýný giriniz: ";
				cin >> student[i].no;

				cout << i + 1 << ". Öðrencinin -sýrasýyla- doðduðu günü, ayý ve yýlý yazýnýz: ";
				cin >> student[i].dogumtarihi.gun >> student[i].dogumtarihi.ay >> student[i].dogumtarihi.yil;
				

				cout << i + 1 << ". Öðrencinin 1.kýsa sýnav notunu giriniz: ";
				notkontrol(student[i].kisasinav1);
				

				cout << i + 1 << ". Öðrencinin 2.kýsa sýnav notunu giriniz: ";
				notkontrol(student[i].kisasinav2);
				

				cout << i + 1 << ". Öðrencinin 1.ödev notunu giriniz: ";
				notkontrol(student[i].odev1);
				

				cout << i + 1 << ". Öðrencinin 2.ödev notunu giriniz: ";
				notkontrol(student[i].odev2);
				

				cout << i + 1 << ". Öðrencinin vize notunu giriniz: ";
				notkontrol(student[i].vize);
				

				cout << i + 1 << ". Öðrencinin final notunu giriniz: ";
				notkontrol(student[i].final);
				cout << "\n";

				
			}
	        goto L498;
		}
		break;

		
		default:
		{
			cout << "Hata... Lütfen tekrar giriniz.\n\n\n"; goto L370;
		}
		
	
		L498:
		cout << "*************************************************************************************\n"
			    "Öðrenci listesini yazdýrmak için 1'e \n"
				"Sýnýfýn en yüksek notunu yazdýrmak için 2'ye \n"
				"Sýnýfýn en düþük notunu yazdýrmak için 3'e \n"
				"Sýnýfýn ortalamasýný hesaplamak için 4'e \n"
				"Sýnýfýn standart sapmasýný hesaplamak için 5'e \n"
				"Baþarý notu belirli bir aralýktaki öðrencileri yazdýrmak için 6'ya \n"
				"Baþarý notu belirli bir deðerin altýndaki öðrencileri yazdýrmak için 7'ye \n"
				"Baþarý notu belirli bir deðerin üstündeki öðrencileri yazdýrmak için 8'ye basýnýz. \n"
				"Çýkmak için 9'a basýnýz. ";

		

		cin >> menusecim;
		
		
		switch (menusecim)
		{
			
			case 1: listeyazdir1(); goto L498; break;
			

			case 2: cout << "\nSýnýftaki en yüksek not: " << enyukseknot2(student) << "\n\n\n"; goto L498; break;
			
		
			case 3: cout << "\nSýnýftaki en düþük not: " << endusuknot3(student) << "\n\n\n"; goto L498; break;
			

			case 4: printortalama4(); goto L498; break;
			

			case 5: printstandartsapma5(); goto L498; break;
			

			case 6: printikiaraliktannotsecmece6(student); goto L498; break;
			 

			case 7: printbirdegeraltinotsecmece7(student); goto L498; break;
			

			case 8: printbirdegerustunotsecmece8(student); goto L498; break;

		
			case 9: break;
			

			default: cout << "\nHatalý seçim... Lütfen 1 ve 9 arasýnda bir deðer giriniz.\n\n\n"; goto L498;
		}

	
	}
	

	return 0;
}