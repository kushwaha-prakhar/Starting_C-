#include <iostream>
using namespace std;

int main(){
    int i , n;
    cout<<"Enter the number: ";
    cin>> n;

    if(i<2){
        cout<< "Not prime";
        return 0;
    }
    else{
        for(i=2 ; i<n ; i++)
        {
            if(n%2==0){
                cout<< "Not prime";
                return 0;
            }
        }
        cout<<"prime" ;

    }

    return 0;
}