#include<stdio.h>

int main()
{
    //Declaration
    char userLetter;

    //Data/Input
    printf("Enter any character : ");
    scanf("%c", &userLetter);

    //Processing/Calculations
    if (userLetter == 'a' || userLetter == 'e' || userLetter == 'i' || userLetter == 'o' || userLetter == 'u' || userLetter == 'A' || userLetter == 'E' || userLetter == 'I' || userLetter == 'O' || userLetter == 'U'){
        printf("%c is a vowel", userLetter);
    } else {
        printf("%c is not a vowel", userLetter);
    }


    //Output




    return 0;
}
