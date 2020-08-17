#include <iostream>

using namespace std;

main(){
	/* int counter;
	  for (counter = 1; counter <10; counter=counter+1)
	  {
	  cout <<"2 x "<< counter <<"=" <<2*counter << "\n";
  
  }
  */
  int number,maxMul,counter;
  cout << "Please enter the table number";
  cin >> number;
 cout <<"Enter limit";
 cin>>maxMul;
  for (counter= 1; counter <= maxMul; counter = counter +1)
  {cout<<number <<" x "<<counter << " = "<<number *counter << "\n";
  }
  
}

