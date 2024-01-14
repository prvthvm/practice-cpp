#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int arr[size];
    
    int oddcount = 0;
    
    cout <<"Enter Elements:"<<endl;
    
    for (int i = 0; i < size; ++i) {
        
        cin >> arr[i];
    }
    
    for(int j = 0; j < size; j++) {
    	
    	if(arr[j] % 2 != 0){
    		oddcount++;
    	}
     }
    
    cout<<"No. of Odd numbers: "<< oddcount<<endl;

    return 0;
}
   
 
