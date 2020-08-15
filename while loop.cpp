#include <iostream>

using namespace std;
//LOOPS
main(){
	int sum,number,UpperLimit ;
	sum = 0;
	number = 1;
		cout << "Please enter the number =   ";
		cin >> UpperLimit;
		while(number<=UpperLimit){
			if (number % 2==0)
			sum = sum + number;
			number = number +1;
			
	}

	cout << "The sum of the intergers starting from 1 and "<<UpperLimit<<"  is   " <<sum <<"\n";
	
	   	int numberf,factorial = 1;
	   	
	cout<<"Enter the nmber of Factorial  =  ";
	cin>>numberf;
		while(numberf >=1){
			factorial =factorial * numberf;
			numberf =numberf - 1;
		}
		cout <<"Factorial  is  " << factorial;
}
	


