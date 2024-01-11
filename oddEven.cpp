#include <iostream>
using namespace std;

string oddeven(int x){
	
	if(x % 2 == 0){
	
	    return "The number is even";
	}
	
	else {
		
		return "The number is odd";
	}
}

int main() {
	
	int num;
	
	cin>>num;
	cout<<oddeven(num)<<endl;
	
	return 0;
}
