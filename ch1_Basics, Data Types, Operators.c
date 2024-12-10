#include <stdio.h> 
#include <cs50.h> 

>> code test.c
>> make test   : Complile into binary executable 
>> ./test     : Execute test 


printf()
{
    int x, y;                         // declaration 
    x = 1;                            // assignment 
    y = 2;                            // assignment 
    string z = "WoW"                  // initialization (when you have a declaration & assignemnt on the same line) 
    printf("%i and %s\n", x + y, z);  
}
$$ 3 and WoW 

Data types in C:  
    char   // character // 1 byte (8bits) // 256 
    int    // integer // 4bytes (32bits) // -2.1474 billion to 2.1474 billion // -2^31 to 2^31
           // Qualifiers: 
           // unsigned int: that disable negative ints and doubles the range of positive int to 4.294billion // 2^32 
           // const int: 
           // long int: 
           // short int: 
    float  // float // 4 bytes (32bits) // can store real numbers & decimal points, but due to limited memory is not very precise when calculating large numbers. 
    double // double // 8 bytes (64bits) // like a float, has double precision, but uses more memory. 
    void   // Is a type, not a data type // used to return "nothing" or take no paramters 
    // Blelow only exist when you #include <CS50.h>
    bool   // boolean // stores true or false // any non-zero number is considered true  
    string // strings of characters 

format codes:
    %c  // char 
    %s  //String
    %i  //integer 
    %li // Long
    %f  // float & double 

Data Types in C:
    int
    
        
Arithamtic Operators
{
    C Operators: +, -, * , / , % 
    % modulus: gives us the remainder after dividing // 13 % 4 = 1 

    Shorthand Operator Syntax:
    x = x * 5; //can be written as 
    x *= 5;   // works for all 5 C operators
    
    x++; & x--; // C provides furhter shorthand for incredmenting or decrementing a variable by 1. 
    
    Type Casting // change variable to desired format on the fly
    long x = 1;
    long y = 2;

    float z = (float) x / (float) y; //changes long to float format. 
    printf("%.20f\n", z); //prints 20 //Floating Point imprecision: prints 20 digits of the float. ex(.33333333333342897409) 
        // use double for more floating point precision: printf("%.20f\n"); you can only print %f though. 
}

Logical Operators
{
    && // Logical AND: is true only if both operands are true, otherwise false.
    || // Logical OR: is true with either operands are true, otherwise false. 
    ! // Logical NOT: inverts the value of its operant 
}

Relational Operators
{
    Less than/ Greater than: <, <=, >, >=
    Equality:     (x == y) 
    Inequality:   (x != y) 
}


DESIGN
{
    const int n = 5 (makes n a constant that cannnot be changed later in the code)
}

