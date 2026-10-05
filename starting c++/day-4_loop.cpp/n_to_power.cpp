#include <iostream>
using namespace std;

int main()
{
    int n, pow, num;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a power: ";
    cin >> pow;

    num = 1;
    for (int i = 1; i <= pow; i++)
    {
        num = num * n;
    }
    cout << num << endl;

    return 0;
}