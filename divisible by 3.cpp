#include <iostream>
using namespace std;


string divisible(){
	
	int x;
	cin>>x;
	
	if(x % 3 == 0){
		
		return "Yes, It's Divisible!";
	}
	
	else{
		return "No,It's not Divisible.";
	}
}

int main() {
	
	cout<<divisible()<<endl;
	
	return 0;
}


