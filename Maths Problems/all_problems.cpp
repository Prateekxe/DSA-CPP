// All maths problem - Menu Driven program using switch case

#include <bits/stdc++.h>
using namespace std;

void palindrome()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int dup = n;
    int rev = 0;

    while (n > 0)
    {
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n = n / 10;
    }

    if (dup == rev)
        cout << "It is a Palindrome." << endl;
    else
        cout << "It is not a palindrome." << endl;
}

void check_prime()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }

    if (cnt == 2)
        cout << "Prime." << endl;
    else
        cout << "Not Prime." << endl;
}

void armstrong()
{
    int n;
    cout << "Enter the number with 3 digit: ";
    cin >> n;
    int sum = 0;
    int dup = n;

    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + ld * ld * ld;
        n = n / 10;
    }
    if (sum == dup)
        cout << "Armstrong" << endl;
    else
        cout << "Not a Armstrong Number." << endl;
}

void check_gcd()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1;
    cin >> n2;

    int gcd = 1;
    // for (int i = 1; i <= min(n1, n2); i++)
    // {
    //     if (n1 % i == 0 && n2 % i == 0)
    //     {
    //         gcd = i;
    //     }
    // }

    // Another way to find gcd with lesser time than prevoius one
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }

    cout << "GCD: " << gcd << endl;
}

void count_digits()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        n = n / 10;
        count++;
    }
    cout << "The count of digits in the number is: " << count << endl;
}

void reverse_number()
{
    int n;
    cout << "Enter the number you want to reverse: ";
    cin >> n;
    int sum = 0;

    while (n > 0)
    {
        int ld = n % 10;
        sum = sum * 10 + ld;
        n = n / 10;
    }
    cout << "The reverse of a number is: " << sum << endl;
}

void print_divisors()
{
    int n;
    cout << "Enter the number you want to print divisors of: ";
    cin >> n;
    int count = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";

            if ((n / i) != i)
            {
                cout << n / i << " ";
            }
        }
    }
    cout << endl;
}

void perfect_number()
{
    // Pefect Number - a +ve integer that is equal to the sum of its proper divisors, excluding number itself
    // Proper Divisor - any divisor of that number other than the number itself
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
        cout << "It is a Perfect Number." << endl;
    else
        cout << "It is NOT Perfect Number." << endl;
}

void abundant_number()
{
    // it is a +ve integer for which the sum of its proper divisors is greater than the number
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum > n)
        cout << "It is an Abundant Number." << endl;
    else
        cout << "It is NOT an Abundant Number." << endl;
}

void deficient_number()
{
    // it is a +ve integer for which the sum of its proper divisors is greater than the number
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum > n)
        cout << "It is a Deficient Number." << endl;
    else
        cout << "It is NOT a Deficient Number." << endl;
}

void neon_number()
{
    // sum of digits of square of number is equal to the number
    // N = 9
    // sq. of input = 81
    // sum of sq. of input = 8 + 1 = 9 --> equal to N

    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sq = n * n;
    int sum = 0;

    while (sq > 0)
    {
        int ld = sq % 10;
        sum = sum + ld;
        sq = sq / 10;
    }

    if (sum == n)
        cout << "Neon Number" << endl;
    else
        cout << "Not Neon" << endl;
}

void spy_number()
{
    // if sum of digits of a number is equal to product of digits --> spy number
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;
    int prod = 1;
    while(n>0)
    {
        int ld = n % 10;
        sum = sum + ld;
        prod = prod * ld;
        n = n / 10;
    }
    if (sum == prod)
        cout << "spy" << endl;
    else
        cout << "not spy" << endl;
}

void dudeney_number()
{
    // a natural number that is perfect cube & whose digit sum is equal to the cube root of number 
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    int dup = n;
    //for cube root:
    // int cube_root = int(round(pow(n,1.0/3.0)));
    // if (cube_root*cube_root*cube_root != n) 
    //     cout << "Number is not perfect cube."<<endl;

    while (n>0)
    {
        int ld = n%10;
        sum = sum + ld;
        n = n/10;
    }
    int cube = sum*sum*sum;
    if(cube == dup) cout <<"dudeney number"<< endl;
    else cout << "not a dudeney number"<<endl;    

}

void duck_number()
{
 // a +ve integer that contanins at least one zero, but no zeros at the beginning
    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int zeros = 0;
    // //int len = n.length;
    // int len = 0;

    // while(n>0)
    // {
    //     n = n/10;
    //     len ++;
    // }
    
    // for(int i=0; i<len; i++)
    // {
    //     char digit = n.charAt(i);
    //     if(digit == '0') zeros++;
    // }

    // char first_digit = n.charAt(0);

    // if(first_digit != '0' && zeros > 0)
    //     cout << "Duck Number"<<endl;
    // else    cout << "Not a duck Number"<< endl;
    cout<<"program is commented"<<endl;
}

bool pronic_number()
{
    //it is a number which is a product of two consecutive integers
    int n;
    cout<<"enter the number: ";
    cin>> n;
    int i=0;
    while(i<n-1)
    {
        if(i*(i+1) == n)
            return true;
        i++;
    }
    return false;
}

int main()
{
    int ch;
    int num;

    while (1)
    {
        cout << endl;
        cout << "MENU:" << endl;
        cout << "1.Check for Prime" << endl;
        cout << "2.Check for Palindrome" << endl;
        cout << "3.Check for Armstrong" << endl;
        cout << "4.Check for GCD/HCF" << endl;
        cout << "5.Exit" << endl;
        cout << "6.Count Digits" << endl;
        cout << "7.Reverse a number" << endl;
        cout << "8.Print all divisors" << endl;
        cout << "9.Perfect Number" << endl;
        cout << "10.Abundant Number" << endl;
        cout << "11.Deficient Number" << endl;
        cout << "12.Neon Number" << endl;
        cout << "13.Spy Number" << endl;
        cout << "14.Dudeney Number" << endl;
        cout << "15.Duck Number" << endl;
        cout << "16.Pronic Number" << endl;
        cout << endl;
        cout << "Enter option: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            check_prime();
            break;

        case 2:
            palindrome();
            break;

        case 3:
            armstrong();
            break;

        case 4:
            check_gcd();
            break;

        case 5:
            exit(1);
            break;

        case 6:
            count_digits();
            break;

        case 7:
            reverse_number();
            break;

        case 8:
            print_divisors();
            break;

        case 9:
            perfect_number();
            break;

        case 10:
            abundant_number();
            break;

        case 11:
            deficient_number();
            break;

        case 12:
            neon_number();
            break;

        case 13:
            spy_number();
            break;

        case 14:
            dudeney_number();
            break;

        case 15:
            duck_number();
            break;

        case 16:
            if(pronic_number()) cout<<"Pronic Number"<<endl;
            else cout<<"Not Pronic Number"<<endl;
            break;

        default:
            cout << "Invalid option selected." << endl
                 << endl;
        }
    }
}