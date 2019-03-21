/* Adam Steciuk 300263 lab1 */
#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

#include <vector>

class Hash
{
    private:
        std::vector < int > hashList;
        int mod;

        int hashNumber(int num);

    public:
        Hash();
        void addNumber();
        void addNumber(int howManyToAdd);
        void changeMod();
        void viewHashes();
        void removeGivenNumber();
        void removeGivenNumber(int howManyToDel);
        void searchForNumber();
        Hash operator ++();
        Hash operator --();
};


#endif // HASH_H_INCLUDED
