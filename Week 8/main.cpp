#include <iostream>
#include <cmath>

using namespace std;

// task 1
// Write two functions where the first returns the max of two numbers and
// the second returns the max of five numbers
// a)
int max(int, int);

// b)
int max(int, int, int, int, int);

// task 2
// Write a function that reverses digits of a number.
int invert(int);

// task 3
// Write a function that:
// a) - Finds and returns the absolute value of the number
int abs(int);

// b) - Finds and returns the perimeter of rectangle.
float rectanglePerimeter(float, float);

// c) - Find and returns the perimeter of circle.
float circleArea(float);

// d) - Finds and returns the value on second degree.
float pow(float, int);

// e) - Finds and returns the distance between two points.
float distance(int, int, int, int);

// f) - Determines whether it is a triangle or not.
bool isTriangle(float, float, float);

// task 4
// Write a function that prints a decimal number to binary.
void toBinary(int);

// task 5
// Write a function that prints reversed array
void reverse(int[], int);

// task 6
// Write a function that returns the days in the given month and year.
int numberOfDays(int, int);

// task 7
// Write a function that returns the time flight in minutes.
int flightTime(int, int, int, int);

int main()
{
    // task 1
    cout << max(203, 20) << endl;
    cout << max(1, 2, 7, 10, 6) << endl;
    ////////

    // task 2
    cout << invert(1234324);
    ////////

    // task 3
    // a)
    cout << abs(-5);
    // b)
    cout << rectanglePerimeter(2.2, 5);
    // c)
    cout << circleArea(10);
    // d)
    cout << pow(4, 3);
    // e)
    cout << distance(5, 4, 3, 2);
    // d)
    cout << isTriangle(3, 4, 9);
    ////////

    // task 4
    toBinary(72);
    ////////

    // task 5
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(array, 10);
    ///////

    // task 6
    cout << numberOfDays(2, 2016);
    ///////

    // task 7
    cout << flightTime(12, 10, 21, 0);
    ///////

    return 0;
}

// task 1
// a)
int max(int first, int second)
{
    return first > second ? first : second;
}

// b)
int max(int first, int second, int third, int fourth, int fifth)
{
    if(first > second || first > third || first > fourth || first > fifth)
    {
        return first;
    }
    else if(second > third || second > fourth || second > fifth)
    {
        return second;
    }
    else if(third > fourth || third > fifth)
    {
        return third;
    }
    else if(fourth > fifth)
    {
        return fourth;
    }
    else
    {
        return fifth;
    }
    return 0;
}
/////////

// task 2
int invert(int number)
{
    int result = 0;
    while(number > 0)
    {
        result *= 10;
        result += number % 10;
        number /= 10;
    }
    return result;
}
///////

// task 3
// a)
int abs(int number)
{
    return number < 0 ? number * (-1) : number;
}

// b)
float rectanglePerimeter(float firstSide, float secondSide)
{
    return 2 * firstSide + 2 * secondSide;
}

// c)
float circleArea(float radius)
{
    const float PI = 3.14;
    return PI * radius * radius;
}

// d)
float pow(float number, int power)
{
    float result = 1;
    for(int i = 0; i < power; i++)
    {
        result *= number;
    }
    return result;
}

// e)
float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y2 - y1, 2));
}

// f)
bool isTriangle(float a, float b, float c)
{
    return ((a + b) > c && (b + c) > a && (a + c) > b);
}
////////

// task 4
void toBinary(int number)
{
    while(number > 0)
    {
        if(number % 2 == 0)
        {
            cout << number % 2 << " ";
        }
        else
        {
            cout << number % 2 << " ";
        }
        number /= 2;
    }
}
///////

// task 5
void reverse(int x[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << x[size - i - 1] << " ";
    }
}
///////

// task 6
int numberOfDays(int month, int year)
{
    int days = 0;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        days = 31;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        days = 30;
    }
    else if(month == 2)
    {
        if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
    }
    return days;
}
////////

// task 7
int flightTime(int hourDepart, int minuteDepart, int hourArrive, int minuteArrive)
{
    return (hourArrive * 60 + minuteArrive) - (hourDepart * 60 + minuteDepart);
}
///////
