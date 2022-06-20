//   _____ _               _      _____      _ _           _
//  / ____| |             | |    |  __ \    | (_)         | |
// | |    | |__   ___  ___| | __ | |__) |_ _| |_ _ __   __| |_ __ ___  _ __ ___   ___
// | |    | '_ \ / _ \/ __| |/ / |  ___/ _` | | | '_ \ / _` | '__/ _ \| '_ ` _ \ / _ \
// | |____| | | |  __/ (__|   <  | |  | (_| | | | | | | (_| | | | (_) | | | | | |  __/
//  \_____|_| |_|\___|\___|_|\_\ |_|   \__,_|_|_|_| |_|\__,_|_|  \___/|_| |_| |_|\___|
// ******************** Check Palindrome ********************

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char array[100];
    int size = 0;
    bool notPalindrome = false;
    printf("Enter a string");
    scanf("%s", array);
    for (int i = 0; array[i] != '\0'; i++)
    {
        size ++;
    }
    // size = strlen(array);

    for (int iterate = 0; iterate < size / 2; iterate++)
    {
        // compare the first element of array with last element
        if (array[iterate] != array[size - iterate - 1])
        {
            notPalindrome = true;
            printf("Entered word is not a palindrome");
            break;
        }
    }
    if (notPalindrome == false)
    {
        printf("It is a palindrome");
    }
    return 0;
}
