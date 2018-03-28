#include <iostream>

using namespace std;

// task 1
// Write a function that returns the size of array.
size_t stringLength(const char *);

// task 2
// Write a function that returns the words count of array.
size_t wordsCount(const char *);

// task 3
// Write a function that returns whether two arrays are equal or not.
bool equalsIgnoreCase(const char*, const char*);

// task 4
// Write a function that finds the number of small and big letters and the numbers.
bool evaluate(const char*);

// task 5
// Write a function that reverts all the letters from small to big or the other way around.
bool swapcase(char*);

// task 6
// Write a function that replaces every symbol from from to to.
void replace(char*, char, char);

// task 7
// Write a function that truncates the size of array.
int strlen(const char*);
void truncate(char *, int);

// task 8
// Write a function that deletes a given symbol of array.
void deleteChar(char *, char);

// task 9
// Write a function that determines whether src starts with start or not.
bool startsWith(const char *, const char *);

int main()
{
    // task 1
    cout << stringLength("Hello World") << endl;
    ////////

    // task 2
    cout << wordsCount("Hello world") << endl;
    ///////

    // task 3
    cout << equalsIgnoreCase("Beatles", "BeaTles") << endl;
    ///////

    // task 4
    evaluate("3 Doors Down");
    ///////

    // task 5
    char first_array[10] = "NiGhTmArE";
    swapcase(first_array);
    ///////

    // task 6
    char second_array[12] = "We_love_C  ";
    replace(second_array, ' ', '+');
    ///////

    // task 7
    char third_array[] = "The Dark Knight Rises";
    truncate(third_array, 15);
    ///////

    // task 8
    char fourth_array[60] = "the* qu*ick* bro*wn ***fox **jumped o**ver **the lazy *d*og";
    deleteChar(fourth_array, '*');
    ///////

    // task 9
    cout << startsWith("Fear of the dark", "Fea");
    ///////
    return 0;
}

// task 1
size_t stringLength(const char* array)
{
    size_t result = 0;
    for(int i = 0; array[i] != '\0'; i++)
    {
        result++;
    }
    return result;
}
///////

// task 2
size_t wordsCount(const char* array)
{
    size_t words = 0;
    for(int i = 0; array[i] != '\0'; i++)
    {
        if((array[i] != ' ' && array[i + 1] == ' ') || (array[i] != ' ' && array[i + 1] == '\0'))
        {
            words++;
        }
    }
    return words;
}
///////

// task 3
bool equalsIgnoreCase(const char* first, const char* second)
{
    if(stringLength(first) == stringLength(second))
    {
        return true;
    }
    return false;
}
///////

// task 4
bool evaluate(const char* array)
{
    size_t smallWordsCount = 0, bigWordsCount = 0, numbers = 0;
    for(int i = 0; array[i] != '\0'; i++)
    {
        if(array[i] >= 'a' && array[i] <= 'z')
        {
            smallWordsCount++;
        }
        else if(array[i] >= 'A' && array[i] <= 'Z')
        {
            bigWordsCount++;
        }
        else if(array[i] >= '0' && array[i] <= '9')
        {
            numbers++;
        }
    }
    cout << "Small words count: " << smallWordsCount << endl;
    cout << "Big words count: " << bigWordsCount << endl;
    cout << "Numbers: " << numbers << endl;
    return true;
}
///////

// task 5
bool swapcase(char* array)
{
    for(int i = 0; array[i] != '\0'; i++)
    {
        if(array[i] >= 'a' && array[i] <= 'z')
        {
            array[i] -= ('a' - 'A');
        }
        else if(array[i] >= 'A' && array[i] <= 'Z')
        {
            array[i] += ('a' - 'A');
        }
    }
    for(int i = 0; array[i] != '\0'; i++)
    {
        cout << array[i] << " ";
    }
    return true;
}
///////

// task 6
void replace(char* array, char from, char to)
{
    for(int i = 0; array[i] != '\0'; i++)
    {
        if(array[i] == from)
        {
            array[i] = to;
        }
    }
    for(int i = 0; array[i] != '\0'; i++)
    {
        cout << array[i];
    }
    cout << endl;
}
///////

// task 7
// helper
int strlen(const char* array)
{
    int length = 0;
    for(int i = 0; array[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

void truncate(char* array , int newsize)
{
    for(int i = 0; i < newsize; i++)
    {
        cout << array[i];
    }
    for(int i = 0; i < newsize; i++)
    {
        if(strlen(array) > newsize)
        {
            array[i] = '\0';
        }
    }
    cout << endl;
}
///////

// task 8
void deleteChar(char *array, char c)
{
    for(int i = 0; array[i] != '\0'; i++)
    {
        if(array[i] == c)
        {
            for(int j = i; j < strlen(array); j++)
            {
                array[j] = array[j + 1];
            }
        }
    }

    cout << array;
}
///////

// task 9
bool startsWith(const char* src, const char* start)
{
    int srcLength = strlen(src);
    int startLength = strlen(start);
    if(startLength > srcLength)
    {
        return false;
    }

    for(int i = 0; i < startLength; i++)
    {
        if(src[i] != start[i])
        {
            return false;
        }
    }
    return true;
}
///////
