#include <iostream>
using namespace std;


int sumEven(){
	 int evensum = 0;
	for(int i = 2; i <= 100; i+=2) {
		
		evensum += i;
	}
	
	return evensum;
	
	
}

int main() {
    
    cout<<"Sum of all the even numbers from 2 - 100 is: "<<sumEven()<<endl;
     
    return 0;
}
   
 
