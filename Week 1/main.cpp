#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    {
        // task 1
        // Determine whether the first number is a divisor of second.
        short first = 0, second = 0;
        cout << "Enter two numbers ";
        cin >> first >> second;

        if( first % second == 0 )
        {
            cout << "first number is divisor of second" << endl;
        }
        else
        {
            cout << "first number is not divisor of second" << endl;
        }
        ///////
    }

    {
        // task 2
        // Determine whether a number is a divisor of 2 and 3 and it is not divisor of 5.
        short number = 0;
        cout << "Enter a number ";
        cin >> number;
        if( ( number % 2 == 0 && number % 3 == 0 ) && number % 5 != 0 )
        {
            cout << "Number is divisor of 2 and 3 and not divisor of 5." << endl;
        }
        else
        {
            cout << "Number does not follow the conditions of the task." << endl;
        }
        ////////
    }

    {
        // task 3
        // Determine whether the equasion has real roots and how much are they.
        float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, D = 0;
        cout << "Enter coefficients of a, b and c. ";
        cin >> a >> b >> c;
        D = (b * b) - (4 * a * c);
        if(D == 0)
        {
            cout << "Discriminant is zero." << endl;
            x1 = x2 = (-b) / (2 * a);
            cout << "x = " << x1;
        }
        else if(D > 0)
        {
            cout << "Discriminant is bigger than zero." << endl;
            x1 = ((-b) - sqrt(D)) / (2 * a);
            x2 = ((-b) + sqrt(D)) / (2 * a);
            cout << "x1 = " << x1 << " x2 = " << x2 << endl;
        }
        else
        {
            cout << "Discriminant is less than zero." << endl;
        }
        ///////
    }

    {
        // task 4
        // Determine whether the digits of three-digit number are ascending.
        short number = 0;
        cout << "Enter a number ";
        cin >> number;
        if(number < 100 || number > 999)
        {
            cout << "Number does not have 3 digits.";
        }
        else
        {
            short thirdDigit = number % 10;
            number /= 10;
            short secondDigit = number % 10;
            number /= 10;
            short firstDigit = number % 10;
            if(firstDigit < secondDigit && firstDigit < thirdDigit && secondDigit < thirdDigit)
            {
                cout << "Digits of number are ascending.";
            }
            else
            {
                cout << "Digits of number are not ascending.";
            }
        }
        ///////
    }

    {
        // task 5
        // Determine whether the digits of the three-digit number are equal.
        short number = 0;
        cout << "Enter a number ";
        cin >> number;
        if(number < 100 || number > 999)
        {
            cout << "Number does not have 3 digits.";
        }
        else
        {
            short thirdDigit = number % 10;
            number /= 10;
            short secondDigit = number % 10;
            number /= 10;
            short firstDigit = number % 10;
            if(firstDigit == secondDigit || firstDigit == thirdDigit || secondDigit == thirdDigit)
            {
                cout << "Any digits of number are equal.";
            }
            else
            {
                cout << "Any digits of number are not equal.";
            }
        }
        ///////
    }

    {
        // task 6
        // Determine whether the first three digits of the six-digit number are less than the other three digits.
        int number = 0;
        cout << "Enter a number ";
        cin >> number;
        if(number < 100000 || number > 999999)
        {
            cout << "Number does not have 6 digits." << endl;
        }
        else
        {
            short first_three_digit_number = number / 1000, second_three_digit_number = number % 1000;
            if(first_three_digit_number < second_three_digit_number)
            {
                cout << "First three digit number is less than the second one." << endl;
            }
            else if(first_three_digit_number == second_three_digit_number)
            {
                cout << "First three digit number is equal than the second one" << endl;
            }
            else
            {
                cout << "First three digit number is bigger than the second one" << endl;
            }
        }
        ///////
    }

    {
        // task 7
        // Determine whether a point with coordinates x and y is in the circle with radius 5.
        short x = 0, y = 0, radius = 5;
        cout << "Enter x and y ";
        cin >> x >> y;
        if( ( (x * x) + (y * y) ) <=  radius * radius )
        {
            cout << "The point is in the circle\n";
        }
        else
        {
            cout << "The point is outside the circle\n";
        }
        //////
    }

    {
        // task 8
        // Determine whether at which quadrant is the point.
        short x = 0, y = 0;
        cout << "Enter x and y ";
        cin >> x >> y;
        if(x == 0 && y == 0)
        {
            cout << "The point is at the beginning of the coordinate system." << endl;
        }
        else if(x > 0 && y > 0)
        {
            cout << "The point is in first quadrant." << endl;
        }
        else if(x < 0 && y > 0)
        {
            cout << "The point is in second quadrant." << endl;
        }
        else if(x < 0 && y < 0)
        {
            cout << "The point is in third quadrant." << endl;
        }
        else if(x > 0 && y < 0)
        {
            cout << "The point is in fourth quadrant." << endl;
        }
        else if(x == 0 && y != 0)
        {
            cout << "The point is in x axis." << endl;
        }
        else if(x != 0 && y == 0)
        {
            cout << "The point is in y axis." << endl;
        }
        ///////
    }

    {
        // task 9
        // Determine whether the point is in the two circles.
        short x = 0, y = 0;
        const short biggerCircleRadius = 2, smallerCircleRadius = 1;
        cout << "Enter x and y ";
        cin >> x >> y;
        bool isInBiggerCircle = (x * x) + (y * y) < biggerCircleRadius * biggerCircleRadius;
        bool isInSmallerCircle = (x * x) + (y * y) < smallerCircleRadius * smallerCircleRadius;
        if(isInBiggerCircle || isInSmallerCircle)
        {
            cout << "The point is in one of the circles." << endl;
        }
        else
        {
            cout << "The point is outside of the circles." << endl;
        }
        //////
    }

    return 0;
}
