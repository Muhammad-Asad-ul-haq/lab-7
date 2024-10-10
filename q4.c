#include <stdio.h>

int main() 
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int numbers[size];
    printf("Enter the numbers:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int smallest = numbers[0];
    int largest = numbers[0];
    for (int i = 1; i < size; i++) 
    {
        if (numbers[i] < smallest) 
        {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) 
        {
            largest = numbers[i];
        }
    }

    printf("The smallest number in the array is: %d\n", smallest);
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
