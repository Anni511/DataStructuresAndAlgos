#include <iostream>

using namespace std;

int main(){
    
    int array[10];
    cout<<"Enter the array of size 10:";
    for(int i=0;i<10;i++) cin>>array[i];
    cout<<"Enter the element to search";
    cin>>ele;
    for(int i=0;i<10;i++) {
        if(array[i]== ele){
            cout<<"\nElement found at "<<i+1;
            return 0;
        }
    }
    cout<<"Element not found."
    return 0;
}

/* 
INPUT 1
1 2 3 4 5 6 7 8 9 10
14
OUTPUT 1
Element not found.
*/

/* 
INPUT 2
1 2 3 4 5 6 7 8 9 10
4
OUTPUT 2
Element found at 4
*/
