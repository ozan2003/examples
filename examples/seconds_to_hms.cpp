#include <iostream>
using namespace std;

int main()
{
	int totalSeconds;
	cout << "Enter seconds: ";
	cin >> totalSeconds;
	
	cout << "\n";

	cout << totalSeconds << " seconds: " << 
		
							 totalSeconds / 3600 << " hours " << 
		
						  (totalSeconds / 60)%60 << " minutes " << 
		
							   totalSeconds % 60 << " seconds ";

	
	return 0;
}

// saniye = dakika*60; dakika = saat*60  

/* Örnek: 20000 saniye = (333dk)*60 + 20s
		  
		  333 dakika = 5s*(60) + 33dk  
		  
		  20000 saniye = 5 saat 33 dakika 20 saniye */

// Ayný düþünce tarzý; dereceyi "derece, dakika ,saniye" cinsinde yazmada da kullanýlabilir.