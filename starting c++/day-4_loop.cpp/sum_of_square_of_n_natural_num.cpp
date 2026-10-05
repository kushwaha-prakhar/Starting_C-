#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cout << "Enter a number: ";
    cin >> n;   
    
    num = 0;
    for (int i = 1; i <= n; i++)
    {
            num = num + i*i;
    }
    cout << num << endl;

    return 0;
}
