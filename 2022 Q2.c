#include <stdio.h>
#include <stdlib.h>

int main()
{
    int[] numbers = {1,2,3,4,5,6,7,8,9,11,12};
    //int numbers[] = {1,2,3,4,5,6,7,9};

    int length = sizeof(numbers)/sizeof(numbers[0]);
    int n = length + 1;

    int sum = 0;

    for (int i = 0; i < length; i++){
        sum += numbers[i];
    }

    int properSum = (n*(n + 1))/2;

    int missingNumber = properSum - sum;

    printf("Missing number is: %d", missingNumber);
    return 0;
}
