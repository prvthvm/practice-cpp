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
	
        cout<<"Input number to be checked: ";
	cin>>num;
	cout<<endl<<oddeven(num)<<endl;

	return 0;
}
