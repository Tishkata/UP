#include <iostream>

using namespace std;

// task 1
// Write two functions that swaps values of numbers, one with pointers
// other with pseudonym.
// a)
void swap(int*, int*);
// b)
void swap(int&, int&);

// task 2
// Write two functions, the first to print array without operator [] and the second to print it reversed.
// a)
void printArray(int[], int);
// b)
void printReversedArray(int[], int);

// task 3
// Write a function that finds the biggest number of array and prints it.
void max(int[], int, int*);

// task 4
// Write a function that finds the length of array without operator [].
int strLength(const char*);

// task 5
// Write a function that reverses the elements of array without operator [].
void reverse(int [], int);

// task 6
// Write a function that:
// a) converts all small letters from array to big.
// b) converts all big letters from array to small.
// c) replaces all symbols met in array.
// a)
void toUpperCase(char*);
// b)
void toLowerCase(char*);
// c)
void replace(char*, char, char);

const int ARRAY_SIZE = 5;

int main()
{
    // task 1
    // a)
    int a = 4, b = 5;
    swap(&a, &b);
    int c = 6, d = 9;
    // b)
    swap(c, d);
    ///////

    // task 2
    // a)
    int first_array[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    printArray(first_array, ARRAY_SIZE);
    // b)
    printReversedArray(first_array, ARRAY_SIZE);
    ////////

    // task 3
    int second_array[ARRAY_SIZE] = {9, 3, 6, 4, 5};
    int maxElement = 0;
    max(second_array, ARRAY_SIZE, &maxElement);
    ///////

    // task 4
    cout << "Length of Tisho is = " << strLength("Tisho");
    ///////

    // task 5
    int third_array[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    reverse(third_array, ARRAY_SIZE);
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << third_array[i] << " ";
    }
    ///////

    // task 6
    // a)
    char array[ARRAY_SIZE] = {'b', 'i', 'g', 'e', 'r'};
    toUpperCase(array);
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << array[i] << " ";
    }
    // b)
    toLowerCase(array);
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << array[i] << " ";
    }
    // c)
    char ascii_array[ARRAY_SIZE] = {'a', 's', 'c', 'i', 'i'};
    replace(ascii_array, 'i', 't');
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << ascii_array[i] << " ";
    }

    ////////
    return 0;
}

// task 1
// a)
void swap(int* first, int* second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
    cout << "first = " << *first << " second = " << *second << endl;
}

// b)
void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
    cout << "first = " << first << " second = " << second << endl;
}
///////

// task 2
// a)
void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << *(array + i) << " ";
    }
    cout << endl;
}

// b)
void printReversedArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << *(array + size - i - 1) << " ";
    }
    cout << endl;
}
///////

// task 3
void max(int array[], int size, int* maxNumber)
{
    *maxNumber = array[0];
    for(int i = 0; i < size; i++)
    {
        if(array[i] > *maxNumber)
        {
            *maxNumber = array[i];
        }
    }
    cout << "Max number is " << *maxNumber << endl;
}
///////

// task 4
int strLength(const char* array)
{
    int length = 0;
    for(int i = 0; *(array + i) != '\0'; i++)
    {
        length++;
    }
    return length;
}
///////

// task 5
void reverse(int array[], int size)
{
    for(int i = 0; i < size / 2; i++)
    {
        int temp = *(array + i);
        *(array + i) = *(array + size - i - 1);
        *(array + size - i - 1) = temp;
    }
}
///////

// task 6
// a)
void toUpperCase(char* array)
{
    while(*array != '\0')
    {
        if(*array >= 'a' && *array <= 'z')
        {
            *array -= ('a' - 'A');
        }
        array++;
    }
}

// b)
void toLowerCase(char* array)
{
    while(*array != '\0')
    {
        if(*array >= 'A' && *array <= 'Z')
        {
            *array += ('a' - 'A');
        }
        array++;
    }
}

// c)
void replace(char* array, char a, char b)
{
    while(*array != '\0')
    {
        if(*array == a)
        {
            *array = b;
        }
        array++;
    }
}
///////
