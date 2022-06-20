//   ___                   __   ___ ___                              
//  / __|_  _ _ __    ___ / _| |_  )   \   __ _ _ _ _ _ __ _ _  _ ___
//  \__ \ || | '  \  / _ \  _|  / /| |) | / _` | '_| '_/ _` | || (_-<
//  |___/\_,_|_|_|_| \___/_|   /___|___/  \__,_|_| |_| \__,_|\_, /__/
//                                                           |__/    
// ******************** Sum of 2 dimensional arrays ********************

#include <stdio.h>

int main()
{
    int arraySize = 0;
    printf("Enter the size of arrays");
    scanf("%d", &arraySize);
    int array1[arraySize][arraySize];
    int array2[arraySize][arraySize];
    int arrayResult[arraySize][arraySize];
    // ******************** Getting the values of array1 from user ********************
    for (int row = 0; row < arraySize; row++)
    {
        for (int col = 0; col < arraySize; col++)
        {
            printf("Enter the values of array 1 @ row : %d column : %d: ",row, col);
            scanf("%d", &array1[row][col]);
        }
    }

    // ******************** Getting the values of array2 from user ********************
    for (int row = 0; row < arraySize; row++)
    {
        for (int col = 0; col < arraySize; col++)
        {
            printf("Enter the values of array 2 @ row : %d column : %d: ",row, col);
            scanf("%d", &array2[row][col]);
        }
    }

    // ******************** Adding the array1 and array2 and asigns on arrayResult ********************
    for (int rowPrint = 0; rowPrint < arraySize; rowPrint++)
    {
        for (int colPrint = 0; colPrint < arraySize; colPrint++)
        {
             arrayResult[rowPrint][colPrint] =  array1[rowPrint][colPrint] +  array2[rowPrint][colPrint];
            
        }
        printf("\n");
    }


    // ******************** Printing the array : arrayResult ********************

     for (int rowPrint = 0; rowPrint < arraySize; rowPrint++)
    {
        for (int colPrint = 0; colPrint < arraySize; colPrint++)
        {
            printf("%d\t", arrayResult[rowPrint][colPrint]);
        }
        printf("\n");
    }
}
