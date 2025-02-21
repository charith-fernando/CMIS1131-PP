#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool valid(int element[]);
int common_difference(int element[]);
int nth_element(int element[], int n);
int sum_of_n_terms(int element[], int n);

int main()
{
    int arr[] = {3, 7, 11, 15, 19, 23};

    printf("Common difference is: %d\n", common_difference(arr));
    printf("10th element is: %d\n", nth_element(arr, 10));
    printf("Sum of first 12 terms is: %d\n", sum_of_n_terms(arr, 12));

    return 0;
}

bool valid(int element[]){
    int arrSize = 6;
    int difference = element[1] - element[0];

    for (int i = 2; i < arrSize; i++){
        if (!(element[i] - element[i - 1] == difference)){
            //returns false if common difference is not same for all consecutive digits
            return false;
        }
    }

    return true;
}

int common_difference(int element[]){
    if (valid(element)){
        // returns common difference
        return element[1] - element[0];
    }

    return 0;
}

int nth_element(int element[], int n){
    if (valid(element)){
        int diff = common_difference(element);

        //returns nth element. uses the formula n = a + (n-1)d
        return (element[0] + (n-1)*diff);
    }

    return 0;
}

int sum_of_n_terms(int element[], int n){
    if (valid(element)){
        int diff = common_difference(element);

        //return sum of first n terms. uses formula Sn = n/2(2a + (n-1)d
        return (n*(2*element[0] + (n - 1)*diff))/2;
    }

    return 0;
}
