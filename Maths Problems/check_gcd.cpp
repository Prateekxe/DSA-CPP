#include <bits/stdc++.h>
using namespace std;

void check_gcd()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1;
    cin >> n2;
    int gcd = 1;

    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << "The GCD/HCF of number is: " << gcd << endl;
}

int main()
{
    check_gcd();
    return 0;
}