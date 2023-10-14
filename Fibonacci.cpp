#include <iostream>
using namespace std;

int fibonacci(int number);

int main ()
{
    int number {0}, fib_ans {0};
    cout << "Enter the number of fibonacci numbers you want to output: ";
    cin >> number;
    cout << "The sequence of " << number << " fibonacci numbers is: ";
    for (int i = 0; i < number; i++)
    {
        fib_ans = fibonacci(i);
        if (fib_ans >= 0)
        {
            cout << fib_ans;
        }
        if (i != number - 1)
        {
            cout << ", ";
        }
    }
}

int fibonacci(int number)
{
    if (number > 1)
    {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
    else if (number == 1)
    {
        return 1;
    }
    else if (number == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
