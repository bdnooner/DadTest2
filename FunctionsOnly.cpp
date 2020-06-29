//// I used a bubble sort to sort the values 

//-----------------------------------------------//
// Pass in a pointer to an array of integers and //
// sort the values from high to low              //
//-----------------------------------------------//
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

//-----------------------------------------------//
// Overload function to sort values in an array  //
// of strings and sort the values from high to   //
// low. (uses a pointer to the array of strings) //
//-----------------------------------------------//
string * sortValue(string *arrayPtr, unsigned int size)
{
    bool swap = true;
    string copyValue = "";


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
