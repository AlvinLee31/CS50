#include <stdio.h> 
#include <cs50.h> 

>> code test.c
>> make test   : Complile into binary executable 
>> ./test     : Execute test 


printf()
{
    int x = 1; 
    int y = 2;
    string z = "WoW"
    printf("%i and %s\n", x + y, z);

    >> 3 and WoW 

    format codes:
    %c  // char 
    %s  //String
    %i  //integer
    %li // Long
    %f  // float
}

Operators
{
    Type Casting // change variable to desired format on the fly
    long x = 1;
    long y = 2;

    float z = (float) x / (float) y; //changes long to float format. 
    printf("%.20f\n", z); //prints 20 //Floating Point imprecision: prints 20 digits of the float. ex(.33333333333342897409) 
        // use double for more floating point precision: printf("%.20f\n"); you can only print %f though. 
}

DESIGN
{
    const int n = 5 (makes n a constant that cannnot be changed later in the code)
}

