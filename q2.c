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

    for(i = 0; i < n; i++) {
        sum = sum+num[i];
    }

    printf("Your sum is: %d\n", sum);

    return 0;
}