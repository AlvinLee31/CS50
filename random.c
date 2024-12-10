

Magic Number / Macro / Preprocessor Directive for creating symbolic constants  // only in C // From Ch 1's sections "magic numbers"
{
// if #include is similar to copy/paste , #define is analogous to find/replace // it's just instusry standard to use ALL CAPS for DEFINED CONSTANTS, not a compiler requirement
  #define NAME REPLACEMENT 

  //example//
  #define PI 3.14159265
  // This header will replace every "PI" with 3.14149265 when compliling
  #define COURSE "CS50"
  // This header will replace every COURSE with "CS50" when compiling 

  // case example // 
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

