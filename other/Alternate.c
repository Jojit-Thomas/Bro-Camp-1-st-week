//           _ _                        _         _   _                 _                   
//     /\   | | |                      | |       | \ | |               | |                  
//    /  \  | | |_ ___ _ __ _ __   __ _| |_ ___  |  \| |_   _ _ __ ___ | |__   ___ _ __ ___ 
//   / /\ \ | | __/ _ \ '__| '_ \ / _` | __/ _ \ | . ` | | | | '_ ` _ \| '_ \ / _ \ '__/ __|
//  / ____ \| | ||  __/ |  | | | | (_| | ||  __/ | |\  | |_| | | | | | | |_) |  __/ |  \__ \
// /_/    \_\_|\__\___|_|  |_| |_|\__,_|\__\___| |_| \_|\__,_|_| |_| |_|_.__/ \___|_|  |___/
                                                                                         

#include <stdio.h>

int main()
{
    //1
    int i;
    int size;

    //2
    printf("How many numbers you want to enter : ");
    scanf("%d", &size);

    //3
    int array[size];

    //4
    for (i = 0; i < size; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &array[i]);
    }

    //5
    printf("Alternate elements of the input array : \n");
    for (i = 0; i < size; i += 2)
    {
        printf("%d ", array[i]);
    }
}