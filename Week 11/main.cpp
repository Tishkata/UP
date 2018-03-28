#include <iostream>

using namespace std;

// task 1
// Write a recursive function that returns the sum of all digits of the number.
int sumOfDigits(int);

// task 2
// Write a recursive function that returns the length of the array.
int recStrlen(const char*);

// task 3
// Write a recursive function that draws triangle.
void drawTriangle(int);

// task 4
// Write a recursive function that reverse the digits of a number.
void helper(int, int&, int&);
int reverse(int);

// task 5
// Write a recursive function that calculates factorial.
int factorial(int);

// task 6
// Write a recursive function that calculates the fibonacci numbers to the given number.
int fib(int);

int main()
{
    // task 1
    cout << sumOfDigits(15489) << endl;
    ///////

    // task 2
    cout << recStrlen("Happy new year") << endl;
    //////

    // task 3
    drawTriangle(5);
    //////

    // task 4
    cout << reverse(1123) << endl;
    //////

    // task 5
    cout << factorial(5) << endl;
    //////

    // task 6
    for(int i = 1; i < 11; i++)
    {
        cout << fib(i) << ' ';
    }
    //////

    return 0;
}

// task 1
int sumOfDigits(int number)
{
    if(number == 0)
    {
        return 0;
    }
    else
    {
        return number % 10 + sumOfDigits(number / 10);
    }
}
///////

// task 2
int recStrlen(const char* array)
{
    if(*array == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + recStrlen(array + 1);
    }
}
//////

// task 3
void drawTriangle(int number)
{
    if(number > 1)
    {
        drawTriangle(number - 1);
    }

    for(int i = 0; i < number; i++)
    {
        cout << "*";
    }
    cout << endl;
}
///////

// task 4
void helper(int number, int& result, int& multiplier)
{
    if(number == 0) return;
    helper(number / 10, result, multiplier);
    result += (number % 10) * multiplier;
    multiplier *= 10;
}

int reverse(int number)
{
    int result = 0;
    int multiplier = 1;
    helper(number, result, multiplier);
    return result;
}
///////

// task 5
int factorial(int number)
{
    if(number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
///////

// task 6
int fib(int number)
{
    if(number == 1)
    {
        return 1;
    }
    if(number == 0)
    {
        return 0;
    }
    return fib(number - 1) + fib(number - 2);
}
///////
