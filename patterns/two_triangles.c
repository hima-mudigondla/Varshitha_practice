#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n); 
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n - i; j++) {
            printf("* ");
        }

        
        for (int j = 0; j < 2 * i; j++) {
            printf("  ");
        }

        for (int j = 0; j < n - i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

