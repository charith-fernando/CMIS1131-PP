#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // find length if the string
    int length = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++){
        length++;
    }

    printf("Length of the string: %d\n", length);

    // find how many vowels are there in the string
    for (int i = 0; str[i] != '\0'; i++){
        str[i] = tolower(str[i]);
    }

    int vowelCount = 0;

    for (int i=0; i < length; i++){
        switch (str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowelCount++;
                break;

        }
    }

    printf("There are %d vowels in the string!\n", vowelCount);

    //find number of spaces
    int spaceCount = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' '){
            spaceCount++;
        }
    }

    printf("There are %d spaces in the string!\n", spaceCount);
    return 0;
}
