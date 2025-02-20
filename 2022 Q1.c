#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //include this library because u can't use keyword "true, false" without this

void cube();
void cuboid();
void cone();
void cylinder();
void sphere();

float const PI = 3.141592654;

int main()
{
    bool flag = true;
    while (flag){
        int choice;

        printf("***** VOLUME CALCULATOR *****\n\n");
        printf("    1 - Cube\n");
        printf("    2 - Cuboid\n");
        printf("    3 - Cone\n");
        printf("    4 - Cylinder\n");
        printf("    5 - Sphere\n");

        printf("\n    0 - Terminate the program\n");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 0:
                printf("\nProgram ended!");
                return 0;

            case 1:
                cube();
                break;

            case 2:
                cuboid();
                break;

            case 3:
                cone();
                break;

            case 4:
                cylinder();
                break;

            case 5:
                sphere();
                break;

            default :
                printf("\nEnter a valid choice!\n\n");

        }
    }
    return 0;
}

void cube(){
    float length;

    printf("\nEnter length of the cube: ");
    scanf("%f", &length);

    //printing the volume
    printf("\nVolume of cube is: %.2f\n\n\n", length*length*length);
    return;

}

void cuboid(){
    float length, height, width;
    printf("\nEnter the length of cuboid: ");
    scanf("%f", &length);

    printf("Enter the height of cuboid: ");
    scanf("%f", &height);

    printf("Enter the width of cuboid: ");
    scanf("%f", &width);

    printf("\nVolume of cuboid is: %.2f\n\n\n", length*height*width);
    return;
}

void cone(){
    float radius, height;

    printf("\nEnter radius of the cone: ");
    scanf("%f", &radius);

    printf("Enter height of the cone: ");
    scanf("%f", &height);

    printf("\nVolume of cone is: %.2f\n\n\n", (PI*radius*radius*height)/3);
    return;
}

void cylinder(){
    float radius, height;

    printf("\nEnter radius of cylinder: ");
    scanf("%f", &radius);

    printf("Enter height of cylinder: ");
    scanf("%f", &height);

    printf("\nVolume of cylinder is: %.2f\n\n\n", PI*radius*radius*height);
    return;
}

void sphere(){
    float radius;

    printf("\nEnter radius of the sphere: ");
    scanf("%f", &radius);

    printf("\nVolume of sphere is: %.2f\n\n\n", (4*PI*radius*radius*radius)/3);
    return;
}
