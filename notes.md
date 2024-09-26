# C notes

Personal notes on the C programming language.

## Synthax

Minimal code:

````c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Hello world!\n");
    return 0;
}
````

Header file including functions:

````c
#include <file.h>
````

## Variables

### Types

https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/7669586-declarez-des-variables

Tableau signed

Tableau unsigned

int myNumber;



myNumber = 1;

The best is to assign a value at initialization:

int myNumber = 1;

Create constant:

int MY_CONST = 2;

Tableau affichage variable

printf("Your number is: %d", myNumber);

printf("Your number is: %d\n", myNumber);

printf("Your number is %d and mine is %d", myNumber, MY_CONST);


## User Input

int age = 0;
scanf("%d", &age);

To get a float use %f but for double use %lf

## Maths

int resultat = 0;
resultat = 5 + 3;
resultat = 5 - 3;
resultat = 5 * 3;
resultat = 5 / 3;
resultat = 5 % 3;

double resultat = 0;
    
resultat = 5.0 / 2.0;
printf ("5 / 2 = %lf", resultat);
