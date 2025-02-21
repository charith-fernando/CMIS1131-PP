#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h> //for the value of PI (M_PI) in line 109


void triangle();
void rectangle();
void square();
void circle();
void parallelogram();

int main()
{
    int choice;

    while (true){
        printf("****** AREA CALCULATOR ******\n");
        printf("    1 - Triangle\n");
        printf("    2 - Rectangle\n");
        printf("    3 - Square\n");
        printf("    4 - Circle\n");
        printf("    5 - Parallelogram\n");

        printf("\n    0 - Terminate the program\n\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 0:
                printf("\nProgram ended!");
                return 0;

            case 1:
                triangle();
                break;

            case 2:
                rectangle();
                break;

            case 3:
                square();
                break;

            case 4:
                circle();
                break;

            case 5:
                parallelogram();
                break;

            default:
                printf("\nEnter a valid choice!\n\n");
        }
    }


    return 0;
}

void triangle(){
    float base, v_height;

    printf("\nEnter the base of triangle: ");
    scanf("%f", &base);

    printf("Enter the vertical height of triangle: ");
    scanf("%f", &v_height);

    printf("\nArea of the triangle is: %.2f\n\n", (base*v_height)/2);

    return;
}

void rectangle(){
    float height, width;

    printf("\nEnter the height of rectangle: ");
    scanf("%f", &height);

    printf("Enter the width of rectangle: ");
    scanf("%f", &width);

    printf("\nArea of the rectangle is: %.2f\n\n", height*width);

    return;
}

void square(){
    float height;

    printf("\nEnter height of the square: ");
    scanf("%f", &height);

    printf("\nArea of the square is: %.2f\n\n", height*height);

    return;
}

void circle(){
    float radius;

    printf("\nEnter the radius of circle: ");
    scanf("%f", &radius);

    printf("\nArea of the circle is: %.2f\n\n", M_PI*radius*radius);

    return;
}

void parallelogram(){
    float base, v_height;

    printf("\nEnter the base of parallelogram: ");
    scanf("%f", &base);

    printf("Enter the vertical height of parallelogram: ");
    scanf("%f", &v_height);

    printf("\nArea of the parallelogram is: %.2f\n\n", base*v_height);

}
