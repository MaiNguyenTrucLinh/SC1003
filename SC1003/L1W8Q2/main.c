#include <stdio.h>

int main(){

    int lineNo, input, total, count;
    double average;
    int n;

    printf("Enter number of lines: \n");
    scanf("%d", &lineNo);
    for (n = 0; n<lineNo; n++) {
        count = 0;
        total = 0;
        printf("Enter line %d (end with -1): \n", n+1);
        scanf("%d", &input);
        while (input != -1) {
            total += input;
            count++;
            scanf("%d", &input);
        }
        average = total/count;
        printf("Average = %.2f\n", average);
    }

    return 0;
}
