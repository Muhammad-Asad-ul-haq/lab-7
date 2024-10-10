#include <stdio.h>

int main() 
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid size\n");
        return 0;
    }

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int repeatFound = 0;
    int checked[n]; 
    for (int i = 0; i < n; i++) {
        checked[i] = 0;
    }

    printf("Repeated numbers:  ");
    
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        
        if (checked[num] == 1) {
            printf("%d and ", num);
            repeatFound = 1;
        }
        
        checked[num] = 1;
    }

    if (!repeatFound) {
        printf("No repeated value");
    }

    printf("\n");

    return 0;
}
