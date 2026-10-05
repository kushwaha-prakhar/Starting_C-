#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"what was your marks ";
    cin >> marks ;

    if(marks > 33){
        cout<< "passed";
    }
    else{
        cout<< "failed";
    }
    return 0;
}