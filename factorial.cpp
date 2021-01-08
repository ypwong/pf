#include <iostream>
using namespace std;

//this computes factorial
int main()
{
    int n;
    int product;
    int count;

    cout << "n = ";
    cin >> n;

    product = 1; 
    count = 2;
    while (count <= n)
    {
        product = product * count;
        count = count + 1;
    }

    cout << "Factorial of " << n << " is " << product << endl;
}