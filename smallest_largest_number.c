#include <stdio.h>
 
int main()
{
 
        int size, i, second_largest;
 
        printf("\n Enter the size of the array: ");
        scanf("%d", &size);
        int array[size];
 
        printf("\n Enter %d elements of  the array: \n", size);
 
        for (i = 0; i < size; i++)
        {   
            scanf("%d", &array[i]);
        }
 
        second_largest = array[0];
 
        for (i = 1; i < size; i++) 
        {
            if (second_largest < array[i])
            second_largest = array[i-1];
        }
 
        printf("\n second_largest element present in the given array is : %d", second_largest);
 
        return 0;
 
}