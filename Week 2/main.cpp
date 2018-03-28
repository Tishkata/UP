#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    {
        // task 1
        // Determine whether the number is a palindrome.
        int number = 0;
        cout << "Enter a number ";
        cin >> number;
        if(number < 10000 || number > 99999)
        {
            cout << "Number does not have 5 digits." << endl;
        }
        else
        {
            int first = 0, second = 0, fourth = 0, fifth = 0;
            fifth = number % 10;
            fourth = (number / 10) % 10;
            second = (number / 1000) % 10;
            first = (number / 10000);
            if(first == fifth && second == fourth)
            {
                cout << "The number is a palindrome." << endl;
            }
            else
            {
                cout << "The number is not a palindrome." << endl;
            }
        }
        ///////
    }

    {
        // task 2
        // calculate the sum of different country values into BGN.
        float amount = 0.0, BGN_amount = 0.0;
        char currency;
        cout << "Enter amount and currency ";
        cin >> amount >> currency;
        const float USD = 1.777, EUR = 1.956, GBR = 2.654, CHF = 1.798;
        if(currency == 'u' || currency == 'U')
        {
            BGN_amount = amount * USD;
        }
        else if(currency == 'e' || currency == 'E')
        {
            BGN_amount = amount * EUR;
        }
        else if(currency == 'g' || currency == 'G')
        {
            BGN_amount = amount * GBR;
        }
        else if(currency == 'c' || currency == 'C')
        {
            BGN_amount = amount * CHF;
        }
        else
        {
            cout << "Incorrect value." << endl;
        }

        cout << "BGN_amount of " << currency << " currency is " << BGN_amount << endl;
        //////
    }

    {
        // task 3
        // Determine whether triangle exists and if it does what kind of triangle is it.
        short a = 0, b = 0, c = 0;
        cout << "Enter a, b and c ";
        cin >> a >> b >> c;
        if((a > b + c) || (b > a + c) || (c > a + b) )
        {
            cout << "Triangle does not exist." << endl;
            return 1;
        }
        else
        {
            cout << "Triangle exists." << endl;
            if(a == b && a == c && b == c)
            {
                cout << "The triangle is equilateral." << endl;
            }
            else if((a == b && (c != a || c != b) ) || (a == c && (b != a || b != c)) || (b == c && (a != b || a != c)))
            {
                cout << "The triangle is isosceles." << endl;
            }
            else if(((a * a + b * b) == c * c) || ((b * b + c * c) == a * a) || ((a * a + c * c) == b * b))
            {
                cout << "The triangle is rectangular." << endl;
            }
            else
            {
                cout << "The triangle is versatile." << endl;
            }
        }
        ///////
    }

    {
        // task 4
        // Determines a person's zodiac by date.
        short day = 0, month = 0, year = 0;
        cout << "Enter day, month and year ";
        cin >> day >> month >> year;
        if(day < 1 || day > 31 || month < 1 || month > 12)
        {
            cout << "Incorrect day or month." << endl;
        }
        else
        {
            if(month == 1)
            {
                if(day <= 20)
                {
                    cout << "Zodiac sign is capricorn." << endl;
                }
                else
                {
                    cout << "Zodiac sign is aquarius." << endl;
                }
            }
            else if(month == 2)
            {
                if(day <= 20)
                {
                    cout << "Zodiac sign is aquarius." << endl;
                }
                else
                {
                    cout << "Zodiac sign is fish." << endl;
                }
            }
            else if(month == 3)
            {
                if(day <= 20)
                {
                    cout << "Zodiac sign is fish." << endl;
                }
                else
                {
                    cout << "Zodiac sign is aries." << endl;
                }
            }
            else if(month == 4)
            {
                if(day <= 20)
                {
                    cout << "Zodiac sign is aries." << endl;
                }
                else
                {
                    cout << "Zodiac sign is taurus." << endl;
                }
            }
            else if(month == 5)
            {
                if(day <= 20)
                {
                    cout << "Zodiac sign is taurus." << endl;
                }
                else
                {
                    cout << "Zodiac sign is gemini." << endl;
                }
            }
            else if(month == 6)
            {
                if(day <= 20)
                {
                    cout << "Zodiac sign is gemini." << endl;
                }
                else
                {
                    cout << "Zodiac sign is cancer." << endl;
                }
            }
            else if(month == 7)
            {
                if(day <= 20)
                {
                    cout << "Zodiac sign is cancer." << endl;
                }
                else
                {
                    cout << "Zodiac sign is leo." << endl;
                }
            }
            else if(month == 8)
            {
                if(day <= 20)
                {
                    cout << "Zodiac sign is leo." << endl;
                }
                else
                {
                    cout << "Zodiac sign is virgo." << endl;
                }
            }
            else if(month == 9)
            {
                if(day <= 20)
                {
                    cout << "Zodiac sign is virgo." << endl;
                }
                else
                {
                    cout << "Zodiac sign is libra." << endl;
                }
            }
            else if(month == 10)
            {
                if(day <= 20)
                {
                    cout << "Zodiac sign is libra." << endl;
                }
                else
                {
                    cout << "Zodiac sign is scorpio." << endl;
                }
            }
            else if(month == 11)
            {
                if(day <= 20)
                {
                    cout << "Zodiac sign is scorpio." << endl;
                }
                else
                {
                    cout << "Zodiac sign is sagittarius." << endl;
                }
            }
            else if(month == 12)
            {
                if(day <= 20)
                {
                    cout << "Zodiac sign is sagittarius." << endl;
                }
                else
                {
                    cout << "Zodiac sign is capricorn." << endl;
                }
            }
        }
        //////
    }

    {
        // task 5
        // Show next day after user enters day month and year.
        short day = 0, month = 0, year = 0;
        cout << "Enter day, month and year ";
        cin >> day >> month >> year;
        if(day < 1 || day > 31 || month < 1 || month > 12)
        {
            cout << "Incorrect values of day or month." << endl;
        }
        else
        {
            if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
            {
                if(day != 31)
                {
		    day++;
                    cout << day << " " << month << " " << year << endl;
                }
                else if(day == 31)
                {
                    day = 1;
		    month++;
                    cout << day << " " << month << " " << year << endl;
                }
            }
            else if(month == 4 || month == 6 || month == 9 || month == 11)
            {
                if(day != 30)
		{
		    day++;
		    cout << day << " " << month << " " << year << endl;
		}
		else if(day == 30)
		{
		    day = 1;
		    month++;
		    cout << day << " " << month << " " << year << endl;
		}
            }
	    else if(month == 2)
	    {
                if(year % 4 == 0)
                {
                    if(day < 29)
                    {
                        day++;
                        cout << day << " " << month << " " << year << endl;
                    }
                    else if(day == 29)
                    {
                        day = 1;
                        month++;
                        cout << day << " " << month << " " << year << endl;
                    }
                    else
                    {
                        cout << "In leap year february does not have more than 29 days." << endl;
                    }
                }
                else
                {
                    if(day < 28)
                    {
                        day++;
                        cout << day << " " << month << " " << year << endl;
                    }
                    else if(day == 28)
                    {
                        day = 1;
                        month++;
                        cout << day << " " << month << " " << year << endl;
                    }
                    else
                    {
                        cout << "In normal year februare does not have more than 28 days." << endl;
                    }
                }
            }
	    else if(month == 12)
	    {
		if(day != 31)
		{
		    day++;
		    cout << day << " " << month << " " << year << endl;
		}
		else
		{
		    day = 1;
		    month = 1;
		    year++;
		    cout << day << " " << month << " " << year << endl;
		}
	    }
        }
        ///////
    }

    {
        // task 6
        // How much roots does the equasion have.
        float a = 0.0, b = 0.0, c = 0.0, D = 0.0, x1 = 0.0, x2 = 0.0;
        cout << "Enter a, b and c ";
        cin >> a >> b >> c;
        D = (b * b) - (4 * a * c);
        if(D > 0)
        {
            x1 = ((-b) + sqrt(D)) / (2 * a);
            x2 = ((-b) - sqrt(D)) / (2 * a);
            cout << x1 << " " << x2 << " => The equasion has two roots." << endl;
        }
        else if(D == 0)
        {
            x1 = x2 = (-b) / (2 * a);
            cout << x1 << " => The equasion has one root." << endl;
        }
        else
        {
            cout << "The equasion has no roots." << endl;
        }
        ///////
    }

    return 0;
}
