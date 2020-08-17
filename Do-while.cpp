#include <iostream>

using namespace std;
// do-while
main(){
	char c;
	int tryNum,maxTries;
//	tryNum =1 ;
//	maxTries = 5;
	
	do {
	cout<<"Please Enter your guess by pressing a character key from a to z"	;
	cin>>c;
	if (c=='z'){
		cout<<"COnguratulation!";
		tryNum = 6;
	}
	else
	tryNum = tryNum +1 ;
	}
	while(tryNum <= 5);
	   
}

