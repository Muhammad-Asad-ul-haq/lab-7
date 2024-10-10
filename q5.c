#include <stdio.h>

int main() 
{
    int size;
    printf("Enter the number of temperatures: ");
    scanf("%d", &size);

    int temperature[size];
    printf("Enter the temperatures (in Centigrade):\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Temperature %d: ", i + 1);
        scanf("%d", &temperature[i]);
    }

    int smallest = temperature[0];
    int largest = temperature[0];
    int sum = temperature[0];
    int extremeDays = 0;
    
   
    for (int i = 1; i < size; i++) 
    {
        if (temperature[i] < smallest) 
        {
            smallest = temperature[i];
        }
        if (temperature[i] > largest) 
        {
            largest = temperature[i];
        }
        sum = sum+temperature[i];

       
        if (temperature[i] > 40 || temperature[i] < 0) 
        {
            if (extremeDays == 0)
                printf("Extreme temperatures on day %d", i + 1);
            else
                printf(" and day %d", i + 1);
            extremeDays++;
        }
    }

   
    float average = (float)sum / size;

    
    printf("\nAverage temperature: %.1f°C\n", average);
    printf("The lowest temperature is: %d°C\n", smallest);
    printf("The highest temperature is: %d°C\n", largest);

    if (extremeDays == 0)
        printf("No extreme temperatures recorded\n");

    return 0;
}
