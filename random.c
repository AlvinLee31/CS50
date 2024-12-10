

Magic Number / Macro / Preprocessor Directive for creating symbolic constants  // only in C // From Ch 1's sections "magic numbers"
{
// if #include is similar to copy/paste , #define is analogous to find/replace // it's just instusry standard to use ALL CAPS for DEFINED CONSTANTS, not a compiler requirement
  #define NAME REPLACEMENT 

  //example//
  #define PI 3.14159265
  // This header will replace every "PI" with 3.14149265 when compliling
  #define COURSE "CS50"
  // This header will replace every COURSE with "CS50" when compiling 

  // case example of a Maigc Number (bad problematiclly defined / hard coded constants //
  card deal_cards(deck name)
  {
    for (int i = 0; i < 52; i++)
      {
         // deal the card function/code 
      }
  } 
  // 52 is a Magic Number (which bad because if someone who doesn't know decks have 52 cards read our code they may not know where "52" came from) 
  // if we locally-globally define a variable 
  card deal_cards(deck name)
  {
    int deck_size = 52 
    for (int i = 0; deck_size; i++); 
    {
      
    }
  } 
    // this is better, but new problem is that even if we locally-globally defined the variable, we could potentially reassign deck_size = deck_size - 1; 
    // which would change the variable to 51, fucking up our code down the line.  

  // FIXED using #define // 
  // FIXED using #define // 
  // FIXED using #define // 
  
  #define DECKSIZE 52 
  card deal_cards(deck name)
  {
    for (int i = 0; i < DECKSIZE; i++)
      {
         // deal the card function/code 
      }
  }
  // This use case allows us to globally define our DECKSIZE to be 52
  // that way our deck isn't hard coded to 52 (germans use 32 card decks), 
  // nor is it locally-globally defined in a way that could be accidentally reassigned via DECKSIZE = DECKSIZE - 1; which would globally change the DECKSIZE to 51, fucking up our code. 
}

