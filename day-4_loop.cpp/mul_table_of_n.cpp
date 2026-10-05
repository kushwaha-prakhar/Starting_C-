#include <iostream>
using namespace std;

int main()
{
    int i, n, p = 10;
    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= p; i++)
    {
        cout << n * i << endl;
    }

    return 0;
}