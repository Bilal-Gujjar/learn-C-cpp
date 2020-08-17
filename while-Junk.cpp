#include <iostream>

using namespace std;
// do-while
main(){
	char c;
	int tryNum,maxTries;
	tryNum =1 ;
	maxTries = 5;
	
while((tryNum <= maxTries)&&(c!='z'))	
	cout<<"Please Enter your guess by pressing a character key from a to z"	;
	cin>>c;
	tryNum =tryNum +1;
	   
}

