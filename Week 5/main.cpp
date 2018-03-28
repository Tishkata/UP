#include <iostream>

using namespace std;

int main()
{
    {
        // task 1
        // Print all the two-digits numbers by the given number n with non-repetitive numbers.
        int n = 0;
        cout << "Enter n ";
        cin >> n;
        int number_to_print = 0;
        bool isFinished = false;
        for(int i = 1; i < n && !isFinished; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i == j)
                {
                    continue;
                }
                cout << (i * 10) + j << " ";
                number_to_print++;
                if(number_to_print > n)
                {
                    isFinished = true;
                    break;
                }
            }
        }
        ///////
    }

    {
        // task 2
        // Find the average number of the entered numbers.
        float number_to_enter = 0.0, number_to_print = 0.0, number_size = 0.0;
        bool isRunning = true;
        while(isRunning)
        {
            cout << "Enter a number ";
            cin >> number_to_enter;
            if(number_to_enter == 0)
            {
                isRunning = false;
            }
            else
            {
                number_to_print += number_to_enter;
                number_size++;
            }
        }
        cout << number_to_print / number_size << endl;
        ///////
    }

    {
        // task 3
        {
            // Reads n numbers and prints the biggest and the smallest one of them.
            int size = 0;
            cout << "Enter size ";
            cin >> size;
            if(size < 0)
            {
                cout << "Size cannot be less than zero." << endl;
            }
            else
            {
                int arr[size];
                for(int i = 0; i < size; i++)
                {
                    cout <<  "arr[" << i << "] = ";
                    cin >> arr[i];
                }

                int max = arr[0];
                int min = arr[size];

                for(int i = 0; i < size; i++)
                {
                    if(arr[i] < min)
                    {
                        min = arr[i];
                    }
                }

                for(int i = 0; i < size; i++)
                {
                    if(arr[i] > max)
                    {
                        max = arr[i];
                    }
                }
                cout << "max number is " << max << endl;
                cout << "min number is " << min << endl;
            }
        }
        ///////
    }

    {
        // task 4
        // Print the numbers through five more to the given n.
        short n = 0;
        cout << "Enter n ";
        cin >> n;
        if(n < 1)
        {
            cout << "Invalid number." << endl;
        }
        else
        {
            for(int i = 1; i < n; i += 5)
            {
                cout << i << endl;
            }
        }
        ///////
    }

    {
        // task 5
        // Find the sum of all the digits of the given number.
        int number = 0, digits = 0, sum = 0;
        cout << "Enter a number ";
        cin >> number;
        while(number > 0)
        {
            digits = number % 10;
            sum += digits;
            number /= 10;
        }
        cout << "Sum of digits is " << sum << endl;
        ///////
    }

    {
        // task 6
        // Determine how many percents are the number in the intervals.
        int numbers_to_be_entered = 0, entered_numbers = 0;
        float count1 = 0.0, count2 = 0.0, count3 = 0.0, count4 = 0.0, count5 = 0.0;
        cout << "How many numbers to enter ";
        cin >> numbers_to_be_entered;
        for(int i = 0; i < numbers_to_be_entered; i++)
        {
            cin >> entered_numbers;
            if(entered_numbers <= 200)
            {
                count1++;
            }
            else if(entered_numbers <= 399)
            {
                count2++;
            }
            else if(entered_numbers <= 599)
            {
                count3++;
            }
            else if(entered_numbers <= 799)
            {
                count4++;
            }
            else
            {
                count5++;
            }
        }
        cout << "Numbers in the range < 200 are " << (count1 ? count1 / numbers_to_be_entered * 100 : 0) << " % of all numbers." << endl;
        cout << "Numbers in the range > 200 and <= 399 are " << (count2 ? count2 / numbers_to_be_entered * 100 : 0) << " % of all numbers." << endl;
        cout << "Numbers in the range > 400 and <= 599 are " << (count3 ? count3 / numbers_to_be_entered * 100 : 0) << " % of all numbers." << endl;
        cout << "Numbers in the range > 600 and <= 799 are " << (count4 ? count4 / numbers_to_be_entered * 100 : 0) << " % of all numbers." << endl;
        cout << "Numbers in the range > 800 are " << (count5 ? count5 / numbers_to_be_entered * 100 : 0) << " % of all numbers." << endl;
        ///////
    }

    {
        // task 7
        // Determine whether Lilly can buy a laptop or not.
        int Lilly_age = 0, Laptop_Price = 0, Toy_Price = 0, Lilly_money = 0, Lilly_toys = 0, money_raised = 10;
        cout << "Enter N, X and P ";
        cin >> Lilly_age >> Laptop_Price >> Toy_Price;
        if(Lilly_age < 1 || Lilly_age > 500)
        {
            cout << "Lilly cannot be less than zero age or more than 500." << endl;
        }
        if(Laptop_Price < 400 || Laptop_Price > 3000)
        {
            cout << "Laptop price is not in the task condition." << endl;
        }
        if(Toy_Price < 5 || Toy_Price > 20)
        {
            cout << "Toy cannot be less than 5 or more than 20 euros." << endl;
        }
        for(int i = 1; i <= Lilly_age; i++)
        {
            if(i % 2 == 0)
            {
                Lilly_money += money_raised;
                Lilly_money--;
                money_raised += 10;
            }
            else
            {
                Lilly_toys++;
            }
        }
        Lilly_money += (Lilly_toys * Toy_Price);
        bool can_buy = Lilly_money > Laptop_Price ? true : false;
        if(can_buy)
        {
            Lilly_money -= Laptop_Price;
            cout << "Yes, Lilly can buy a laptop and she will have left " << Lilly_money << " money." << endl;
        }
        else
        {
            Laptop_Price -= Lilly_money;
            cout << "No, Lilly cannot buy a laptop. She needs " << Laptop_Price << " more money." << endl;
        }
        ///////
    }

    {
        // task 8
        // Determine whether the number is perfect or not.
        int number = 0, sum = 0;
        cout << "Enter a number ";
        cin >> number;
        for(int i = 1; i < number; i++)
        {
            if(number % i == 0)
            {
                sum += i;
            }
        }
        if(sum == number)
        {
            cout << "Number is perfect." << endl;
        }
        else
        {
            cout << "Number is not perfect." << endl;
        }
        ///////
    }

    return 0;
}
