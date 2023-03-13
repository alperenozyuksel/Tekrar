/*
#include <iostream>
using namespace std;

// IC ICE DONGULER YILDIZ BASMA

int main() {

	for (int i = 0; i < 5; i++) {

		for (int k = 0; k < 4-i; k++) {

			cout << " ";
		}

		for (int j = 0; j < 1+i; j++) {
			cout << "*";
		}

		cout << endl;

	}
	return 0;

}

*/

// GOTO KOMUTU

/*
#include <iostream>
using namespace std;
*/


/*
int main() 
{
	
     int sayi = 0;

 galactic:
	 cout << sayi << endl;
	 sayi++;
	 if (sayi < 3)
		 goto galactic;


	 return 0;




	
}
*/


// COLLATZ SANISI : GIRILEN SAYI TEK ISE 3 KATINI AL 1 EKLE   ex: 5, 16, 8, 4, 2, 1
//                  GIRILEN SAYI CIFT ISE 2 YE BOL            ex: 8, 4, 2, 1

/*

#include <iostream>
using namespace std;


int main() {


	int number;
	int number2 = 0;
	cout << "Enter a Number : ";
	cin >> number;

galactic:

	cout << number << ", ";

	if (number % 2 == 0) {

		number = number / 2;
	}

	else (number % 2 == 1) {

		number = (number * 2) + 1;
	}

	goto galactic;

	return 0;

	}
	*/


// DÝZÝLER

/*

#include <iostream>
using namespace std;


int main()
{
	int dizil[5];
	int dizi2[5] = {2,7,2,5,6};
	int dizi3[] = {2,7,2,5,6};
	int dizi4[5] = { 2,7,2 };

	cout << dizi3[2] << endl;

	for (int i = 0; i < 5; i++) {

		cout << dizi2[i] << " ";
	}


	return 0;
}

*/


// 1
// 2
//
//
//
//

/*

#include <iostream>
using namespace std;


int main() {

	int alperen[5];

	cout << "5 tane rastgele 1-9 arasinda sayilar giriniz." << endl;
	for (int i = 0; i < 5; i++) {

		cin >> alperen[i];
	}

	cout << "Herhangi bir karakter giriniz" << endl;
	char dogukan;
	cin >> dogukan;

	for (int i = 0; i < 5; i++) {
		cout << i << "\t" << alperen[i] << "\t";

		for (int j = 0; j < alperen[i]; j++) {

			cout << dogukan;

		}

		cout << endl;
		
	}


	return 0;


	}


*/

/*
Dizi1 : {1,2,3,3}
Dizi2 : {4,3,5,4}
Dizi3 : {(1*4)/(1+4), (2*3)/(2+3), (3*5)/(3+5), (3*4)/(3+4)}

*/

// BIR YERDE HATA VAR SONRADAN BAK!!


/*
#include <iostream>
using namespace std;

int main() 
{
	cout << " Enter the first Array Numbers " << endl;

	int dizi1[4], dizi2[4];
	for (int i = 0; i < 5; i++) {

		cin >> dizi1[i];

	}

	cout << "Enter the second Array Numbers : " << endl;

	for (int i = 0; i < 5; i++) {


		cin >> dizi2[i];

	}

	double dizi3[4]
		;
	for (int i = 0; i < 5; i++) {


		dizi3[i] = (double)(dizi1[i] * dizi2[i]) / (dizi1[i] + dizi2[i]);

	}

	for (int i = 0; i < 5; i++)
	{

		cout << aleyna3;

	}



	



		return 0;
}

	
	*/

/*


#include <iostream>
using namespace std;


int main() {

	int flow[10] = { -3, 2, 6, 1, 9, 2, -4, -5, 17, 15 };

	int minEleman;

	for (int j = 0; j < 10; j++) {

		minEleman = flow[j];

		for (int i = j; i < 10; i++)
		{
			if (minEleman > flow[i])
			{
				swap(flow[j], flow[i]);
			}
		}
	}

	for (int i=0; i < 10; i++)
	{
		cout << flow[i] << " ";
	}




		return 0;
}


	*/


// IKI BOYUTLU DIZILER

/*

#include <iostream>
using namespace std;


int main() {

	int array[4][3] = { 1,5,4,3,7,-1,4,0,11,12,-5,2 };

	for (int sat = 0; sat < 4; sat++)
	{
		for (int sut = 0; sut < 3; sut++)
		{
			cout << array[sat][sut] << "\t";
		}
		cout << endl;
	}


	// int array2[4][3] = { {1,5,4},{3,7,-1},{4,0,11},{12,-5,2} };
	
	*/


	
	
	
	// OGRENCI NOT SKALASI








// ODEV SORU 1:


// Question 1: Write a program that finds the minimum of four integers

/*

#include <iostream>
using namespace std;


int main() {

	for (int i = 0; i < 4; i++)
	{
		cout << i << ", ";
	}



	return 0;
}







 
 
#include <iostream>
using namespace std;

int main() {

	

	int a, b, number;

	cout << "Enter the First Number ";
	cin >> a;
	cout << "Enter the Second Number";
	cin >> b;
	cout << "Choose:\n1- +\n2- -\n3- *\n4- /" << endl;
	cin >> number;

	switch (number)
	{
	case 1:
	{               
		cout << "Result : " << a + b;
		break;
	}
	case 2:
		cout << "Result : " << a - b;
		break;

	case 3:
		cout << "Result : " << a * b;
		break;

	case 4:
		cout << "Result : " << a / b;
		break;

	default:
		cout << "Error";
		break;
	}
}








#include <iostream>
using namespace std;

int main() {
	
	int number;

	cout << "Enter the number : ";
	cin >> number;

	if (number < 0)
	{
		cout << "Number is Negative ";
	}

	else if (number == 0)
	{
		cout << "number is neutral ";
	}

	else if (number > 0)
	{
		cout << "Number is Positive";
	}

	return 0;



}







#include <iostream>
using namespace std;


int main() {
	int age;
	cout << "Enter your Age : ";
	cin >> age;


	if (age < 18 && age >0)
	{
		cout << "You are a Child";
	}

	else if (age >= 18 && age < 65)
	{
		cout << "You are an Adult";
	}

	else if (age >= 65)
	{
		cout << "You are a Senior Citizen";
	}

	else if (age < 0)
	{
		cout << "Age can not Under the Zero";
	}




	return 0;
}






#include <iostream>
using namespace std;



int main(){

	int year;
	cout << "Enter a year you are in or want : ";
	cin >> year;

	if (year % 4 == 0)
	{
		cout << "You are in real year ";
	}

	else {

		cout << "You are not in real year ";
	}


	return 0;





}

*/


// Soru 1: Belirli sayýda karenin toplamýný hesaplamak ve yazdýrmak için while döngüsü kullanan
// bir C++ programý yazýn. Örneðin, 5 girilirse, program 1^2+2^2+3^2+4^2+5^2'ye eþit olan 55'i yazdýracaktýr.

/*

#include <iostream>
using namespace std;

int main() {


	int a = 0, x, i = 1;

	cout << "Enter the number : ";

	cin >> x;

	while (i < x+1) {

		a = a + (i * i);
		      
		i++;

	}

	cout << "Number’s total squares are = " << a << endl;

	return 0;

}



*/

/*

#include <iostream>
using namespace std;

int main() {

	int dizi[5] = { 4,5,9,6,8};

	
	for (int i = 0; i < 5; i++)
	{
		cout << dizi[i];
	}
	


	return 0;


}


*/

/*

#include <iostream>
using namespace std;


int main() {

	int sayi = 1;
	int girilensayi;
	int a=1;
    
	cout << "Bir Sayi Giriniz : ";

	cin >> girilensayi;


	do {
		a = a + sayi * sayi;
		sayi++;
	
     
	
	}




	while (sayi <= girilensayi);

	
	
	cout << a - 1;







	return 0;
}


*/


#include <iostream>
using namespace std;



int main() {


	int x = 1;
	while (true)
	{
		x *= 2;
		cout << x<<endl;
		if (x==64)
			break;
	}

	return 0;

}












	