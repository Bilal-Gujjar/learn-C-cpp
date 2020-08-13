#include <iostream>

using namespace std;

main(){

//An equation


	int a,b,c,x;
	int y ;

	   
	   cout <<  "Please enter the value of  a = ";
	   cin >> a;
	   cout <<  "Please enter the value of  b = ";
	   cin >> b;
	   cout <<  "Please enter the value of  c = ";
	   cin >> c;
	   cout <<  "Please enter the value of  x = ";
	   cin >> x;
	 y = a*x*x + b*x + c;	    
	  cout << "Answer is  = " << y ;

//Qadritic Equition

int Answer;
int d ;
int e;
int f;

   cout <<  "Please enter the value of  e = ";
	   cin >> e;
	   cout <<  "Please enter the value of  d = ";
	   cin >> d;
	   cout <<  "Please enter the value of  f = ";
	   cin >> f;
	Answer = (d*d-4*e*f)/(2*d);	
   cout<< "Answer is =  "<< Answer;

	  
//Modlues Form print the number 

int number,digit; 
cout<< "Please enter the 4 digit";
cin >> number; 
digit = number % 10;
cout << "The digit is" <<digit <<'\n';
number = number / 10;
digit =number %10;
cout << "The digit is" <<digit <<'\n';
number = number / 10;
digit =number %10;
cout << "The digit is" <<digit <<'\n';
number = number / 10;
digit =number %10;
cout << "The digit is" <<digit;
   
}

