#include <iostream>
#include <string.h>

using namespace std;

int * sortValue(int *arrayPtr, unsigned int size);
string * sortValue(string *arrayPtr, unsigned int size);


int main()
{
    const unsigned int SIZE = 10;
    int nums[SIZE] = {-5,5,-4,4,-3,3,-2,2,-1,1};
    int *numArrayPtr = nums;

    string words[SIZE] = {"Apple", "aPple", "apPle", "appLe", "applE",
                          "APple", "aPPle", "apPLe", "appLE", "bapple"};
    string *stringArrayPtr = words;

    sortValue(numArrayPtr, SIZE);
    sortValue(stringArrayPtr, SIZE);

    for(int unsigned i = 0; i < SIZE; i++)
    {
        cout << *(numArrayPtr + i) << ", ";
        if (i == (SIZE - 1))
        {
            cout << endl;
        }
    }

    for(int unsigned i = 0; i < SIZE; i++)
    {
        cout << *(stringArrayPtr + i) << ", ";
        if (i == (SIZE - 1))
        {
            cout << endl;
        }
    }

}

int * sortValue (int *arrayPtr, unsigned int size )
{
    bool swap = true;
    int copyValue = 0;


    while(swap)
    {
        swap = false;
        for(unsigned int i = 0; i < (size - 1); i++)
        {
            if(arrayPtr[i] < arrayPtr[i + 1])
            {
                copyValue = arrayPtr[i];
                arrayPtr[i] = arrayPtr[i + 1];
                arrayPtr[i + 1] = copyValue;
                swap = true;
            }

        }
    }
    return arrayPtr;
}

string * sortValue(string *arrayPtr, unsigned int size)
{
    bool swap = true;
    string copyValue = "";


    while(swap)
    {
        swap = false;
        for(unsigned int i = 0; i < (size - 1); i++)
        {
            if(arrayPtr[i] > arrayPtr[i + 1])
            {
                copyValue = arrayPtr[i];
                arrayPtr[i] = arrayPtr[i + 1];
                arrayPtr[i + 1] = copyValue;
                swap = true;
            }

        }
    }
    return arrayPtr;
}
