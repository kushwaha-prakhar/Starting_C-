// fibonacci series ---> 0 1 1 2 3 5  8  13 21  34
//               n ----> 1 2 3 4 5 6  7  8  9  10
// add previos two number for new one


#include <iostream>
using  namespace std;

int main(){
    int i, n, last, pre, current;
    cout<< " Enter the number ";
    cin>> n;
    last = 0; 
    pre = 1;

    for( i=3; i<=n; i++){
        current = last+pre;
        last =pre;
        pre=current;

        if(i==n){
            cout<< current;
        }
    }
    return 0;
}