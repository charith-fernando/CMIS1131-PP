#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* -----------------------------------------------Q2 part I-----------------------------------------------------*/
    int height;

    printf("Enter the height: ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++){
        for (int j = i; j > 0; j--){
            printf("* ");
        }
        printf("\n");
    }


    /* -----------------------------------------------Q2 part II-----------------------------------------------------*/
    int pyramidHeight;

    printf("Enter pyramid height: ");
    scanf("%d", &pyramidHeight);

    int temp = pyramidHeight;

    for (int i = 1; i <= pyramidHeight; i++){
        for (int j = temp; j > 0; j--){
            printf(" ");
        }
        temp--;

        for (int k = i; k > 0; k--){
        printf("* ");
        }

        printf("\n");
    }



    return 0;
}
