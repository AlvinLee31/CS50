Variables 
{
    // Declare Variables only when you need them.
    int number;  // Declare Variables // 
    float sqrt2, sqrt3, pi; // Declare multiple variables // 
    char letter = 'c'; // Initialization is when you Delclaration and Assignment // 
}

// Conditionals // if-else & switch 
// Conditionals //
// Conditionals // 
// Conditionals //
// Conditionals //

if, else if, else (conditional) // Use when you are using Boolean expressions to make decisions 
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

    Optional If-Else shorthand known as the Ternary operator (? :) 

    int x = (expr) ? 5 : 6;  
    
    //bascially asking a quick question, if expr is true, x = 5, if expr is false x = 6.
    // Is identical to the If-Else below // 
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

Switch (conditional, c only) // Use when using discrete cases to make decisions 
{
    // switch() is a conditional statement that permits enumeration of discrete cases, an alternative to boolean expressions. 
    
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
    // it's important to break between each case or else it will "fall through" each case, unless intentional. 
    // numberical order of the cases can be inversed to list top-down: case 3, case 2, case 1, default.
}

// LOOPS // while 
// LOOPS // for
// LOOPS // 
// LOOPS // 
// LOOPS // 

Counter & Increments
{
    int counter = 0; 

    counter = counter + 1 
    counter += 1; 
    counter ++;
    counter --; 
}

while Loop // while(true) makes an infinite/ forever loop until the conditional changes to false / or triggers a break;
// use when you want a loop to repeat an unknown number of times, possibly not at all. 
// ex. in a game, keep sprites updated, so long as player is alive //
{
    while (condition)
    {

    }

    // example 
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


for Loop
// use when you want a loop to run a discrete number of times, even if you don't the exact number during the moment of program compilation
// ex. ask user for a number like 100, and the loop runs 100x. 
// for (control variable; conditional; increment/decrement) 
{
    for (initialization; condition; updation)
    {
        
    }

    // example // 
    for (int i = 0; i < 3; i++)
    {
        printf("Meow\n"); 
    }

    //longform//
    
    int i = 0;
    for (i < 3)
    {
        printf("Meow\n");
        i++; 
    }
}

do while Loop (executes the code within do once, then checks the while(condition), if (true), runs the loop again. // exception is Python that uses "while true" 
// use when you want a loop to repeat an unknown number of times, but atleast once. 
// ex. often used when prompting a user for input, until an acceptable input is given. 
// Python does not have a "do-while" equivalent, so instead use a while loop with a conditional break |  while True: { print(); if i>=5; {break}} 
{
    do
    {
        
    } while(condition) 

    // example// 
    int n;
    do
    {
        n = get_int("Input positive number: ");
    } while (n < 0);
}

