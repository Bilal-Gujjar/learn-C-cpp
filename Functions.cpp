using namespace std;
double raiseToPow(double x, int power){
	double result;
	int i;
	result = 1.0;
	for (i=1;i<=power; i ++){
		result *= x;
	}
}
double cricleArea(double radius){
	return (3.1415926 *radius *radius);
}
#include <iostream>
//Function

main(){
	   double x ;
	   int i ;
	   cout << "Please entert the number";
	   cin>> x;
	   cout <<"Please enter the power";
	   cin >>i;
	   cout <<x << "raise to power"<<i<<"is equal to "<<raiseToPow(x,i)<<"\n";
	   
	   double rad1,rad2,ringArea;
	   cout <<"Please enter the outer radius";
	   cin >>rad1;
	   cout<<"Please enter the inner radius";
	   cin >> rad2;
	   ringArea =cricleArea(rad1)-cricleArea(rad2);
	   cout <<"Area of the ring inner side "<<rad2<<"and outer "<<rad1<<"is"<<ringArea;
}

