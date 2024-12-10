Variables 
{
    // Declare Variables // Declar variables only when you need them.
    int number;  // Declare Variables // 
    float sqrt2, sqrt3, pi; // Declare multiple variables // 
    char letter = 'c'; // Initialization is when you Delclaration and Assignment // 
}

if, else if, else (conditional)
{
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y) // else only binds to the previous if. 
    {
        printf("x is not less than y\n"); 
    }
    else 
    {
        printf("x is equal to y\n");
    }

    Optional If-Else shorthand the Ternary operator (? :) 

    int x = (expr) ? 5 : 6;  //bascially asking a quick question, if expr is true, x = 5, if expr is false x = 6.
    // Is identical to // 
    int x; 
    if (expr) 
    {
        x = 5; 
    }
    else 
    {
        x = 6; 
    }

}

Counter
{
    int counter = 0; 
    counter = counter + 1 
    counter += 1; 
    counter ++;
    counter --; 
}

while Loop // while(true) makes an infinite/ forever loop until break;
// use when you want a loop to repeat an unknown number of times, possibly not at all. 
// ex. in a game, keep sprites updated, so long as player is alive //
{
    int i = 0;
    while (i < 3) 
    {
        printf("Meow\n");
        i++; 
    }

    while (1) // aka while (true) // but you can't use booleans unless you #include <stdbool.h>
    {
        printf("Meow\n"); 
    }
}

do while Loop (executes the code within do once, then checks the while(condition), if (true), ill run the loop again. Only in C, not python.
// use when you want a loop to repeat an unknown number of times, but atleast once. 
// ex. often used when prompting a user for input, until an acceptable input is given. 
{
    int n;
    do
    {
        n = get_int("Input positive number: ");
    } while (n < 0);
}

For Loop
// use when you want a loop to run a discrete number of times, even if you don't the exact number during the moment of program compilation
// ex. ask user for a number like 100, and the loop runs 100x. 
{
    int i = 0;
    for (i < 3)
    {
        printf("Meow\n");
        i++; 
    }
    // Shorthand // 
    for (int i = 0; i < 3; i++)
    {
        printf("Meow\n"); 
    }
}

Switch (c only) 
{
    int x = get_int();
    switch(x)
    {
        case 1:
            printf("One!\n");
            break;
        case 2: 
            printf("Two!\n");
            break;
        case 3: 
            printf("Three!\n");
            break;
        default:
            printf("Sorry!\n");
    }
        // switch() is a conditional statement that permits enumeration of discrete cases, an alternative to boolean expressions. 
        // it's important to break between each case or else it will "fall through" each case, unless intentional. 
}
