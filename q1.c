#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int num[n];

    for(i = 0; i < n; i++) {
        printf("Enter the value of number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for(i = n-1; i >= 0; i--) {
         printf("%d ",num[i]);
        
    }
   



    return 0;
}