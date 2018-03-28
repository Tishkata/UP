#include <iostream>

using namespace std;

int main()
{
    // Mandatory tasks.

    {
        // task 1
        // Print the multiplication table from 1 to 10.
        for(int i = 1; i <= 10; i++)
        {
            for(int j = 1; j <= 10; j++)
            {
                cout << i << " x " << j << " = " << i * j << endl;
            }
        }
        ///////
    }

    {
        // task 2
        // Determine whether a number is a palindrome.
        int number = 0, save_number_value = 0;
        int palindrome;
        cout << "Enter a number ";
        cin >> number;
        save_number_value = number;
        while(number > 0)
        {
            palindrome *= 10;
            palindrome += number % 10;
            number /= 10;
        }
        if(save_number_value == palindrome)
        {
            cout << "The number is a palindrome." << endl;
        }
        else if(number != palindrome)
        {
            cout << "The number is not a palindrome." << endl;
        }
        ///////
    }

    {
        // task 3
        // Draw different figures with stars.
        {
            // a) - draw triangle
            int size = 0;
            cout << "Enter size of figure ";
            cin >> size;
            if(size < 0)
            {
                cout << "Size cannot be less than 0." << endl;
            }
            else
            {
                for(int i = 0; i < size; i++)
                {
                    for(int j = 0; j < i + 1; j++)
                    {
                        cout << "*";
                    }
                    cout << endl;
                }
            }
            //////
        }

        {
            // b) - draw square
            int size = 0;
            cout << "Enter size of figure ";
            cin >> size;
            if(size < 0)
            {
                cout << "Size cannot be less than 0." << endl;
            }
            else
            {
                for(int i = 0; i < size; i++)
                {
                    for(int j = 0; j < size; j++)
                    {
                        cout << "*";
                    }
                    cout << endl;
                }
            }
            ///////
        }

        {
            // c) - draw christmas tree
            int size = 0;
            cout << "Enter size of figure ";
            cin >> size;
            if(size < 0)
            {
                cout << "Size cannot be less than 0." << endl;
            }
            else
            {
                for(int i = 0; i < size; i++)
                {
                    for(int j = 0; j < size - i; j++)
                    {
                        cout << " ";
                    }
                    for(int j = 0; j < i; j++)
                    {
                        cout << "*";
                    }

                    cout << "*";

                    for(int j = 0; j < i; j++)
                    {
                        cout << "*";
                    }
                    for(int j = 0; j < size - i; j++)
                    {
                        cout << " ";
                    }
                    cout << endl;

                }
            }
            //////
        }
        ///////
    }

    {
        // task 3
        // Print the numbers of fibonacci of the given number.
        int number = 0;
        cout << "Enter a number ";
        cin >> number;
        if(number < 0)
        {
            cout << "Number cannot be less than zero." << endl;
        }
        else
        {
            int previous = 0;
            int current = 1;
            for(int i = 0; i < number; i++)
            {
                cout << current << " ";
                int temp = current;
                current += previous;
                previous = temp;
            }
        }
        ///////
    }

    {
        // task 4
        // Calculator.
        int accumulator = 0, number = 0;
        char operation;
        cout << "Enter a number and operation ";
        bool isRunning = true;
        while(isRunning)
        {
            cin >> number >> operation;
            switch(operation)
            {
                case '+':
                accumulator += number;
                break;
                case '-':
                accumulator -= number;
                break;
                case '*':
                accumulator *= number;
                break;
                case '/':
                accumulator /= number;
                break;
                case '%':
                accumulator %= number;
                break;
                default:
                isRunning = false;
                break;
            }
            cout << " => " << accumulator << endl;
        }
        //////
    }

    // Preparation tasks.

    {
        // task 1
        // Writing a boolean expression that is true when the definition is in use.
        {
            // a) - (x^2 - 16) / (x-2)(x-8) > 0
            bool isInEquality = false;
            int x = 0;
            cout << "Enter x ";
            cin >> x;
            if(x < (-4) || (x > 2 && x < 4) || x > 8)
            {
                isInEquality = true;
            }
            cout << isInEquality << endl;
            ///////
        }

        {
            // b) bigger than two numbers divide the quadrant of the second.
            short first = 0, second = 0;
            cout << "Enter first and second number ";
            cin >> first >> second;
            int max = first > second ? first : second;
            int min = first > second ? second : first;
            bool isDividable = ((min * min) % max == 0);
            cout << isDividable << endl;
            ///////
        }

        {
            // c) is in area of circle and rectangle.
            double x = 0, radius = 3, rect_side = 3, rect_diagonal = 5;
            cout << "Enter x ";
            cin >> x;
            bool isInArea = ((x * x) < radius * radius && (x * x) < (rect_diagonal / 2) && (x * x) < (rect_side * rect_side));
            cout << isInArea << endl;
            ///////
        }
        ///////
    }

    {
        // task 2
        // Go back to previous date.
        short day = 0, month = 0, year = 0;
        cout << "Enter day, month and year ";
        cin >> day >> month >> year;
        if(day <= 0 || month <= 0)
        {
            cout << "Incorrect day or month." << endl;
        }
        else
        {
            bool isValid = true;
            if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                if(day <= 31)
                {
                    isValid = true;
                    if(day == 1)
                    {
                        if(month == 1)
                        {
                            day = 31;
                            month = 12;
                            year--;
                        }
                        else
                        {
                            day = 30;
                            month--;
                        }
                    }
                    else
                    {
                        day--;
                    }
                }
                else
                {
                    isValid = false;
                    cout << "Invalid date." << endl;
                }
            }
            else if(month == 4 || month == 6 || month == 9 || month == 11)
            {
                if(day <= 30)
                {
                    isValid = true;
                    if(day == 1)
                    {
                        day = 31;
                        month--;
                    }
                    else
                    {
                        day--;
                    }
                }
                else
                {
                    isValid = false;
                    cout << "Invalid date." << endl;
                }
            }
            else if(month == 2)
            {
                bool isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
                if(isLeapYear)
                {
                    if(day <= 29)
                    {
                        isValid = true;
                        if(day == 1)
                        {
                            day = 31;
                            month--;
                        }
                        else
                        {
                            day--;
                        }
                    }
                    else
                    {
                        isValid = false;
                        cout << "Invalid data." << endl;
                    }
                }
                else
                {
                    if(day <= 28)
                    {
                        isValid = true;
                        if(day == 1)
                        {
                            day = 31;
                            month--;
                        }
                        else
                        {
                            day--;
                        }
                    }
                    else
                    {
                        isValid = false;
                        cout << "Invalid data." << endl;
                    }
                }
            }

            if(isValid)
            {
                cout << day << " " << month << " " << year << endl;
            }
            else
            {
                return 1;
            }
        }
    }

    {
        // task 3
        // By given three numbers finds all the simple numbers that are less than n or n numbers that are in [s, e).
        int start = 0, end = 0, number = 0;
        cout << "Enter start, end and number ";
        cin >> start >> end >> number;
        int printed_numbers = 0;
        for( int i = start; i < end; i++)
        {
            bool isSimple = true;
            for(int j = 2; j < (i / 2 + 1); j++)
            {
                if(i % j == 0)
                {
                    isSimple = false;
                    break;
                }
            }
            if(isSimple)
            {
                cout << i << " is simple " << endl;
                printed_numbers++;
                if(printed_numbers > number)
                {
                    break;
                }
            }
        }
    }
    return 0;
}
