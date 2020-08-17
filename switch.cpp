#include <iostream>

using namespace std;
//Switch
main(){
	char grade;
	cout << "Please Enter the Grade (A-D or F)   ";
	cin>>grade;
	   switch(grade){
	   	case 'A':
	   		cout << "Excellent";
	   		break;
	   	case 'B':
		   cout << "Very Good"<<"\n";
		    break;
		case 'C':
			cout <<"Good"<<"\n";
			break;
		case 'D':
			cout << "Satificatory"<<"\n";
			break;
		case 'F':
			cout << "Fail"<<"\n";
			break;	
		default:
			cout<<"Please enter the Grade Correctly"<<"\n"; 
				
	   }
}

