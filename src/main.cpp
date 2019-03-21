/* Adam Steciuk 300263 lab1 */
#include "Hash.h"
#include <iostream>

using namespace std;

int main()
{
    Hash hashObj;

    int selection = 0;

    do
    {
        cout << endl
        << "0) Exit" << endl
        << "1) Add one number" << endl
        << "2) Add multiple numbers" << endl
        << "3) Change modulo" << endl
        << "4) View all hashes" << endl
        << "5) Remove oldest instance of given number" << endl
        << "6) Remove given number of instances of given number" << endl
        << "7) Search for given number" << endl
        << "8) Increment all hashes" << endl
        << "9) Decrement all hashes" << endl
        << "Selection: "
        ;

        cin >> selection;
        switch( selection )
        {
        case 0:
            break;

        case 1:
            hashObj.addNumber();
            break;

        case 2:
            int howManyToAdd;
            cout << "Give number of numbers you want to add: ";
            cin >> howManyToAdd;
            hashObj.addNumber(howManyToAdd);
            break;

        case 3:
            hashObj.changeMod();
            break;

        case 4:
            hashObj.viewHashes();
            break;

        case 5:
            hashObj.removeGivenNumber();
            break;

        case 6:
            int howManyToDel;
            cout << "Give number of instances you want to delete: ";
            cin >> howManyToDel;
            hashObj.removeGivenNumber(howManyToDel);
            break;

        case 7:
            hashObj.searchForNumber();
            break;

        case 8:
            ++hashObj;
            break;

        case 9:
            --hashObj;
            break;

        default:
            cout << "Invalid selection";
            break;
        }

    }while (selection != 0);

    return 0;
}
