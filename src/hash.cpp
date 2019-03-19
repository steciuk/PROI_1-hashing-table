#include "hash.h"
#include <iostream>

using namespace std;

Hash::Hash()
{
    mod = 50;
}

void Hash::addNumber()
{
    int newNum;
    cout << "Give number: ";
    cin >> newNum;
    hashList.push_back(Hash::hashNumber(newNum));
}

void Hash::addNumber(int howManyToAdd)
{
    int newNum;
    cout << "Give number: ";
    cin >> newNum;

    for(int i = 0; i < howManyToAdd; i++)
    {
        hashList.push_back(Hash::hashNumber(newNum));
    }
}

void Hash::changeMod()
{
    int newMod;
    cout << "Give number: ";
    cin >> newMod;
    mod = newMod;
}

void Hash::viewHashes()
{
    for (size_t i = 0; i < hashList.size(); i++)
    {
        cout << hashList[i] << endl;
    }
}

int Hash::hashNumber(int num)
{
    return num % mod;
}

void Hash::removeGivenNumber()
{
    int delNum;
    int delNumHash;

    cout << "Give number: ";
    cin >> delNum;

    delNumHash = Hash::hashNumber(delNum);

    for (size_t i = 0; i < hashList.size(); i++)
    {
        if(hashList[i] == delNumHash)
        {
            hashList.erase(hashList.begin() + i);
            cout << "One instance of given number deleted" << endl;
            return;
        }
    }

    cout << "No instances of given number found" << endl;
}

void Hash::removeGivenNumber(int howManyToDel)
{
    int delNum;
    int delNumHash;
    int numOfDeleted;
    numOfDeleted = 0;

    cout << "Give number you want to delete: ";
    cin >> delNum;

    delNumHash = Hash::hashNumber(delNum);

    for (size_t i = 0; i < hashList.size(); i++)
    {
//        cout << " i: " << i << " hl(i): " << hashList[i] << " numOfDel: " << numOfDeleted << " numTODel: " << howManyToDel <<" hlSize: " << hashList.size() << endl;

        if(hashList[i] == delNumHash)
        {
            hashList.erase(hashList.begin() + i);
            numOfDeleted ++;
            i--;

            if(numOfDeleted == howManyToDel)
            {
                cout << numOfDeleted << " instances of given number deleted" << endl;
                return;
            }
        }
    }

    if(numOfDeleted != 0)
    {
        cout << numOfDeleted << " instances of given number deleted" << endl;
    }else
    {
        cout << "No instances of given number found" << endl;
    }
}

void Hash::searchForNumber()
{
    int numToSearch;
    int numToSearchHash;
    int howMany = 0;

    cout << "Give number you want to search for: ";
    cin >> numToSearch;
    numToSearchHash = Hash::hashNumber(numToSearch);

    for (size_t i = 0; i < hashList.size(); i++)
    {
        if (hashList[i] == numToSearchHash)
        {
            howMany++;
        }
    }

    if(howMany != 0)
    {
        cout << howMany << "instances of given number found" << endl;
    }else
    {
        cout << "No instances of given number found" << endl;
    }
}

Hash Hash::operator++() //Hash & Hash::operator++()
{
    for(size_t i = 0; i < hashList.size(); i++)
    {
        hashList[i] = hashList[i] + 1;
    }

    return *this;
}

Hash Hash::operator--() //Hash & Hash::operator++()
{
    for(size_t i = 0; i < hashList.size(); i++)
    {
        hashList[i] = hashList[i] - 1;
    }

    return *this;
}
