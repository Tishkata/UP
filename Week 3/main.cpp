#include <iostream>

using namespace std;

const int SIZE_OF_CHAR_ARRAY = 9;

int main()
{
    {
        // task 1
        // Show the number of the chosen language.
        char language;
        short number = 0;
        cout << "Enter a number and language ";
        cin >> number >> language;
        if((number < 0 || number > 9) && (language != 'b' || language != 'e'))
        {
            cout << "Incorrect values." << endl;
        }
        else
        {
            switch(language)
            {
                case 'e':
                    switch(number)
                    {
                        case 1:
                        cout << number << " " << language << " => one " << endl;
                        break;
                        case 2:
                        cout << number << " " << language << " => two " << endl;
                        break;
                        case 3:
                        cout << number << " " << language << " => three " << endl;
                        break;
                        case 4:
                        cout << number << " " << language << " => four " << endl;
                        break;
                        case 5:
                        cout << number << " " << language << " => five " << endl;
                        break;
                        case 6:
                        cout << number << " " << language << " => six " << endl;
                        break;
                        case 7:
                        cout << number << " " << language << " => seven " << endl;
                        break;
                        case 8:
                        cout << number << " " << language << " => eight " << endl;
                        break;
                        case 9:
                        cout << number << " " << language << " => nine " << endl;
                        break;
                        default:
                        break;
                    }
                    break;
                case 'b':
                    switch(number)
                    {
                        case 1:
                        cout << number << " " << language << " => едно " << endl;
                        break;
                        case 2:
                        cout << number << " " << language << " => две " << endl;
                        break;
                        case 3:
                        cout << number << " " << language << " => три " << endl;
                        break;
                        case 4:
                        cout << number << " " << language << " => четири " << endl;
                        break;
                        case 5:
                        cout << number << " " << language << " => пет " << endl;
                        break;
                        case 6:
                        cout << number << " " << language << " => шест " << endl;
                        break;
                        case 7:
                        cout << number << " " << language << " => седем " << endl;
                        break;
                        case 8:
                        cout << number << " " << language << " => осем " << endl;
                        break;
                        case 9:
                        cout << number << " " << language << " => 9 " << endl;
                        break;
                        default:
                        break;
                    }
                    break;
                default:
                break;
            }
        }
        ///////
    }

    {
        // task 2
        // Determine whether a letter is a vowel or not.
        char letter;
        cout << "Enter a letter ";
        cin >> letter;
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        {
            cout << "'" << letter << "' => " << "Vowel" << endl;
        }
        else
        {
            cout << "'" << letter << "' => " << "Non-vowel" << endl;
        }
        //////
    }

    {
        // task 3
        // Determine in which team a student will be in hogwarts.
        bool curiousity, loving_troubles, afraid_of_spiders;
        cout << "Are you curious ? ";
        cin >> curiousity;
        cout << endl << "Do you love troubles ? ";
        cin >> loving_troubles;
        cout << endl << "Are you afraid of spiders ? ";
        cin >> afraid_of_spiders;
        if((!curiousity && !loving_troubles && !afraid_of_spiders) || (!curiousity && loving_troubles && afraid_of_spiders))
        {
            cout << " => Slytherin" << endl;
        }
        else if((!curiousity && !loving_troubles && afraid_of_spiders) || (curiousity && loving_troubles && afraid_of_spiders))
        {
            cout << " => Ravenclaw" << endl;
        }
        else if((!curiousity && loving_troubles && !afraid_of_spiders) || (curiousity && !loving_troubles && afraid_of_spiders))
        {
            cout << " => Hufflepuff" << endl;
        }
        else if((curiousity && !loving_troubles && !afraid_of_spiders) || (curiousity && loving_troubles && !afraid_of_spiders))
        {
            cout << " => Gryffindor" << endl;
        }
        //////
    }

    return 0;
}
