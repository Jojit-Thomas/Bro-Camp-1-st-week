//   ___      _     _         ___     _             _  _            _
//  |   \ ___| |___| |_ ___  | _ \_ _(_)_ __  ___  | \| |_  _ _ __ | |__  ___ _ _ ___
//  | |) / -_) / -_)  _/ -_) |  _/ '_| | '  \/ -_) | .` | || | '  \| '_ \/ -_) '_(_-<
//  |___/\___|_\___|\__\___| |_| |_| |_|_|_|_\___| |_|\_|\_,_|_|_|_|_.__/\___|_| /__/

// delete prime numbers
#include <stdio.h>

int main()
{
    int size;
    int primeArrayIndex = 0;
    printf("Enter the size of the array");
    scanf("%d", &size);
    int array[size + 5];
    int primeArray[size];
    for (int input = 0; input < size; input++)
    {
        scanf("%d", &array[input]);
    }
    for (int arrayValue = 0; arrayValue < size - primeArrayIndex; arrayValue++)
    {
        int flag = 0;

        if (array[arrayValue] == 0 || array[arrayValue] == 1)
        {
            // for (int del01 = arrayValue; del01 < size; del01++)
            // {
            //     array[del01] = array[del01 + 1];
            // }
            // arrayValue--;
        }
        else
        {

            for (int primeCheck = 2; primeCheck < array[arrayValue] / 2 + 1; primeCheck++)
            {
                if (array[arrayValue] == 2)
                {
                    flag = 0;
                }

                else if (array[arrayValue] % primeCheck == 0)
                {
                    flag++;
                }
            }
            if (flag > 0)
            {
                // printf("Not Prime %d    ", array[arrayValue]);
            }
            else // Prime numbers
            {
                for (int delete = arrayValue; delete < size; delete ++)
                {
                    array[delete] = array[delete + 1];
                }
                arrayValue--;
                primeArrayIndex++;
            }
        }
    }
    printf("\n\n");
    for (int arrayIndex = 0; arrayIndex < size - primeArrayIndex; arrayIndex++)
    {
        printf("Prime : %d    ", array[arrayIndex]);
    }
}
