#include <iostream>
using namespace std;


void divisible(){
	
	int x;
	cin>>x;
	
	if(x % 3 == 0){
		
		printf ("Yes, %d is Divisible by 3!",x);
	}
	
	else{
		printf ("No, %d is not Divisible by 3.",x);
	}
}

int main() {
	
	divisible();
	
	return 0;
}
