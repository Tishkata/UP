#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    {
        // task 1
        // Print the minimum and maximum number in an array.
        const short MAX_SIZE_OF_ARRAY = 100;
        short array[MAX_SIZE_OF_ARRAY];
        short how_many_numbers = 0;
        cout << "How many numbers to be entered? ";
        cin >> how_many_numbers;
        for(short i = 0; i < how_many_numbers; i++)
        {
            cout << "array[" << i << "] = ";
            cin >> array[i];
        }
        short min = array[0];
        short max = array[1];
        for(short i = 0; i < how_many_numbers; i++)
        {
            if(array[i] > max)
            {
                max = array[i];
            }
            if(array[i] < min)
            {
                min = array[i];
            }
        }
        cout << "Mininum number of array is " << min << endl;
        cout << "Maximum number of array is " << max << endl;
        ///////
    }

    {
        // task 2
        // Determine whether all the symbols in array form palindrome.
        const short MAX_SIZE_OF_ARRAY = 100;
        char array[MAX_SIZE_OF_ARRAY];
        bool isPalindrome = false;
        short how_many_numbers = 0;
        cout << "How many symbols to be entered? ";
        cin >> how_many_numbers;
        for(int i = 0; i < how_many_numbers; i++)
        {
            cout << "array[" << i << "] = ";
            cin >> array[i];
        }

        for(int i = 0; array[i] != '\0'; i++)
        {
            if(array[i] == array[how_many_numbers - i - 1])
            {
                isPalindrome = true;
            }
            else
            {
                isPalindrome = false;
            }
        }
        if(isPalindrome)
        {
            cout << "The array is palindrome." << endl;
        }
        else
        {
            cout << "The array is not palindrome." << endl;
        }
        ///////
    }

    {
        // task 3
        // Determine whether the index between the elements are bigger than the absolute value of the previous and next element.
        short numbers_to_be_entered = 0;
        const short MAX_SIZE_OF_ARRAY = 100;
        cout << "How many numbers to be entered? ";
        cin >> numbers_to_be_entered;
        float array[MAX_SIZE_OF_ARRAY];
        for(int i = 0; i < numbers_to_be_entered; i++)
        {
            cout << "array[" << i << "] = ";
            cin >> array[i];
        }

        for(int i = 0; i < numbers_to_be_entered; i++)
        {
            if(i == 0 && abs(array[i]) > abs(array[i + 1]))
            {
                cout << i << endl;
            }
            else if(i == numbers_to_be_entered - 1 && abs(array[i]) > abs(array[i - 1]) )
            {
                cout << i << endl;
            }
            else if(abs(array[i]) > ((abs(array[i - 1]) + abs(array[i + 1])) / 2))
            {
                cout << i << endl;
            }
        }
        ///////
    }

    {
        // task 4
        // Remove vowels from array
        const short MAX_SIZE_OF_ARRAY = 100;
        char array[MAX_SIZE_OF_ARRAY];
        short numbers_to_be_entered = 0;
        cout << "How many symbols to be entered? ";
        cin >> numbers_to_be_entered;
        for(int i = 0; i < numbers_to_be_entered; i++)
        {
            cout << "array[" << i << "] = ";
            cin >> array[i];
        }
        for(int i = 0; array[i] != '\0'; i++)
        {
            if(array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u' || array[i] == 'y')
            {
                continue;
            }
            char current_symbol = array[i];
            cout << current_symbol;
        }
        ///////
    }

    return 0;
}
