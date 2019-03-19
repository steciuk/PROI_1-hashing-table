#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

#include <vector>

class Hash
{
    private:
        std::vector < int > hashList;
        int mod;

    public:
        Hash();
        void addNumber();
        void addNumber(int howManyToAdd);
        void changeMod();
        void viewHashes();
        int hashNumber(int num);
        void removeGivenNumber();
        void removeGivenNumber(int howManyToDel);
        void searchForNumber();
        Hash operator ++();
        Hash operator --();
};


#endif // HASH_H_INCLUDED
