#include <iostream>

using namespace std;

const char* WORD = "izdislav";

int containsWord(char* str)
{
    int var = 0, j = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        var = i;
        j = 0;
        while (WORD[j] != '\0' && str[i] != '\0')
        {
            if(WORD[j] != str[i])
            {
                break;
            }

            if(WORD[j + 1] == '\0')
            {
                return var;
            }

            j++;
            i++;
        }
    }

    return -1;
}

int main()
{
    {
        // task 1
        // Print two_dimensional array backwards.
        const short ARRAY_ROWS = 2, ARRAY_COLS = 7;
        short array[ARRAY_ROWS][ARRAY_COLS] = {{1, 2, 3, 4, 5, 6, 7},
                                               {8, 9, 10, 11, 12, 13, 14}
                                              };
        for(int i = ARRAY_ROWS - 1; i >= 0; i--)
        {
            for(int j = ARRAY_COLS - 1; j >= 0; j--)
            {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
        ///////
    }

    {
        // task 2
        // Print the unique numbers of the array.
        const short MAX_SIZE_OF_ARRAY = 14;
        short array[MAX_SIZE_OF_ARRAY] = {5, 6, 7, 8, 9, 8, 1, 4, 5, 6, 7, 1, 4, 5};
        for(int i = 0; i < MAX_SIZE_OF_ARRAY - 1; i++)
        {
            bool isUnique = false;
            for(int j = i + 1; j < MAX_SIZE_OF_ARRAY - 1; j++)
            {
                if(array[i] == array[j])
                {
                    isUnique = true;
                }
            }
            if(isUnique)
            {
                cout << array[i] << " ";
            }
        }
        ///////
    }

    {
        // task 3
        {
            // a) - Print number from decimal to binary.
            short number = 0;
            cout << "Enter a number ";
            cin >> number;
            while(number > 0)
            {
                if(number % 2 != 0)
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

        {
            {
                // b) - Print number from decimal to octal.
                short number = 0;
                cout << "Enter a number ";
                cin >> number;
                while(number > 0)
                {
                    if(number % 8 != 0)
                    {
                        cout << number % 8 << " ";
                    }
                    else
                    {
                        cout << number % 8 << " ";
                    }
                    number /= 8;
                }
            }

            {
                // c) - Print number from decimal to hexadecimal.
                short number = 0;
                cout << "Enter a number ";
                cin >> number;
                while(number > 0)
                {
                    if(number % 16 != 0)
                    {
                        cout << number % 16 << " ";
                    }
                    else
                    {
                        cout << number % 16 << " ";
                    }
                    number /= 16;
                }
            }
        }
        ///////
    }

    {
        // task 4
        // Switch diagonals of matrix.
        const short SIZE_OF_MATRIX = 4;
        short matrix[SIZE_OF_MATRIX][SIZE_OF_MATRIX] = {{1, 2, 3, 4},
                                                        {5, 6, 7, 8},
                                                        {9, 10, 11, 12},
                                                        {13, 14, 15, 16}
                                                       };
        for(int i = 0; i < SIZE_OF_MATRIX; i++)
        {
            int temp = matrix[i][i];
            matrix[i][i] = matrix[i][SIZE_OF_MATRIX - i - 1];
            matrix[i][SIZE_OF_MATRIX - i - 1] = temp;
        }

        for(int i = 0; i < SIZE_OF_MATRIX; i++)
        {
            for(int j = 0; j < SIZE_OF_MATRIX; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        ///////
    }

    {
        // task 5
        // By entered number remove the number from the array and move the next elements one position to the left.
        short number_to_enter = 0;
        const short MAX_SIZE_OF_ARRAY = 10;
        short arraySize = MAX_SIZE_OF_ARRAY;
        cout << "Enter a number ";
        cin >> number_to_enter;
        if(number_to_enter < 1)
        {
            cout << "Invalid number." << endl;
        }
        else
        {
            short array[MAX_SIZE_OF_ARRAY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
            for(int i = 0; i < arraySize; i++)
            {
                if(array[i] == number_to_enter)
                {
                    for(int i = number_to_enter; i < arraySize; i++)
                    {
                        array[i - 1] = array[i];
                    }
                    arraySize--;
                }
                cout << "array[" << i << "] = " << array[i] << " ";
            }
        }
        //////
    }

    {
        // task 7
        // Find sum and product of two matrix.
        const short SIZE_OF_MATRIX = 3;
        short matrix1[SIZE_OF_MATRIX][SIZE_OF_MATRIX] = {{1, 2, 3},
                                                         {4, 5, 6},
                                                         {7, 8, 9}
                                                        };
        short matrix2[SIZE_OF_MATRIX][SIZE_OF_MATRIX] = {{4, 5, 6},
                                                         {7, 8, 9},
                                                         {10, 11, 12}
                                                        };
        short sumMatrix[SIZE_OF_MATRIX][SIZE_OF_MATRIX] = {{0, 0, 0},
                                                           {0, 0, 0},
                                                           {0, 0, 0}
                                                          };
        short productMatrix[SIZE_OF_MATRIX][SIZE_OF_MATRIX] = {{1, 1, 1},
                                                               {1, 1, 1},
                                                               {1, 1, 1}
                                                              };;
        // sum
        for(int i = 0; i < SIZE_OF_MATRIX; i++)
        {
            for(int j = 0; j < SIZE_OF_MATRIX; j++)
            {
                sumMatrix[i][j] += matrix1[i][j] + matrix2[i][j];
            }
        }

        cout << "Sum is " << endl;
        for(int i = 0; i < SIZE_OF_MATRIX; i++)
        {
            for(int j = 0; j < SIZE_OF_MATRIX; j++)
            {
                cout << sumMatrix[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;

        for(int i = 0; i < SIZE_OF_MATRIX; i++)
        {
            for(int j = 0; j < SIZE_OF_MATRIX; j++)
            {
                productMatrix[i][j] *= matrix1[i][j] * matrix2[i][j];
            }
        }

        cout << "Product is " << endl;

        for(int i = 0; i < SIZE_OF_MATRIX; i++)
        {
            for(int j = 0; j < SIZE_OF_MATRIX; j++)
            {
                cout << productMatrix[i][j] << " ";
            }
            cout << endl;
        }
        ///////
    }

    return 0;
}
