#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main(){
 
	double a, b, c;			//katsayılar tanımlandı.
	double delta, kok1, kok2, kok0;	//delta, kökler ve tek kök için tanımlamalar yapıldı.
 
	//acıklama yapıldı.
	printf("This program calculates the number of an equation of second degree in the form ");
	printf("a * x^2 + b * x + c = 0.n");
 
	printf("Enter a : ");		//a değeri girilmesi istendi.
	scanf("%lf", &a);			//a degeri girildi.
	printf("Enter b : ");		//b değeri girilmesi istendi.
	scanf("%lf", &b);			//b degeri girildi.
	printf("Enter c : ");		//c değeri girilmesi istendi.
	scanf("%lf", &c);			//c degeri girildi.
	printf("n");
 
	delta = (b*b) - (4 * a * c);		//delta degeri hesaplandı.
 
	kok1 = ((-b) + sqrt(delta)) / (2 * a);		//1.kök bulundu.
	kok2 = ((-b) - sqrt(delta)) / (2 * a);		//2.kök bulundu.
	kok0 = (-b) / (2 * a);						//köklerin eşit olma durumundaki kök bulundu.
 
	if (delta > 0){				//deltanın 0dan büyük oldugu zaman bulunan 2 kök yazdırıldı.
		printf("The equation has two separate real roots: %.2lf and %.2lf ",kok1,kok2);
	}
	else if (delta==0){			//deltanın 0 a esit oldugu durumda kök yazdırıldı.
		printf("nThe equation has one real root: %.2lf ", kok0);
	}
	else{						//deltanın 0dan küçük ve kökünün olmadıgı durum yazdırıldı.
		printf("nThe equation has no real roots.");
	}
	
	system("PAUSE");
	return 0;
}
