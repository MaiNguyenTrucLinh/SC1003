#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    int i,j;
    int num = 0;

    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("Pattern: \n");

    for (i=0; i<height; i++) {
        for (j=0; j<i+1; j++)
            printf("%d", num+1);
        num = (num+1)%3;
        printf("\n");
    }


    return 0;
}
