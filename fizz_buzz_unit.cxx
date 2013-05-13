// Author: Jeremy Reed
// File: fizz_buzz_unit.cxx
// Date: 1-12-2013
// Contributors: NONE
// Purpose: Fizz Buzz test program.

#include <iostream>
#include "fizz_buzz_unit.h"
#include "fizz_buzz.h"

using namespace std;

/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////

int main( int argc, char** argv )
{
   process_input_unit( );

   return 0;
}

/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////

// Test process_input(...)
int process_input_unit( )
{

   cout << "Check the program's output if expecting an error." << endl;
   cout << "Multiple errors can occur." << endl << endl;

   long int f = 0;
   long int g = 0;
   long int min = 0;
   long int max = 0;

   // Test correct input.  process_input should return 0 here.
   cout << "Test correct input." << endl;
   if ( process_input( "3", "5", "1", "100", &f, &g, &min, &max ) )
   {
      cout << "Test FAILED." << endl;
   }
   else
   {
      cout << "Test PASSED." << endl;
   }
   cout << endl;

   // Test f <= 0.  (f == 0).  process_input should return 1 here.
   cout << "Test f <= 0. (f == 0)." << endl;
   if ( process_input( "0", "3", "-20", "100", &f, &g, &min, &max ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   // Test f <= 0. (f < 0).  process_input should return 1 here.
   cout << "Test f <= 0. (f < 0)." << endl;
   if ( process_input( "-10", "3", "-20", "100", &f, &g, &min, &max ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   // Test f > g.  process_input should return 1 here.
   cout << "Test f > g." << endl;
   if ( process_input( "5", "3", "1", "100", &f, &g, &min, &max ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   // Test f = g.  process_input should return 1 here.
   cout << "Test f == g." << endl;
   if ( process_input( "5", "5", "1", "100", &f, &g, &min, &max ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   // Test min <= 0. (min == 0)
   cout << "Test min <= 0. (min == 0)." << endl;
   if ( process_input( "3", "5", "0", "100", &f, &g, &min, &max ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   // Test min <= (min < 0)
   cout << "Test min <= 0. (min < 0)." << endl;
   if ( process_input( "3", "5", "-20", "100", &f, &g, &min, &max ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   // Test max <= 0. (max == 0)
   cout << "Test max <= 0. (max == 0)." << endl;
   if ( process_input( "3", "5", "1", "0", &f, &g, &min, &max ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   // Test max <= 0. (max < 0)
   cout << "Test max <= 0. (max < 0)." << endl;
   if ( process_input( "3", "5", "1", "-10", &f, &g, &min, &max ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   // Test min > max.
   cout << "Test min > max." << endl;
   if ( process_input( "3", "5", "10", "5", &f, &g, &min, &max ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   // Test inputs larger than LONG_MAX. 
   // f > LONG_MAX.
   cout << "Test f > LONG_MAX." << endl;
   if ( process_input( "3433434353453523452345234523452345", "5", "1", "100",
                       &f, &g, &min, &max ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   } 

   // g > LONG_MAX.
   cout << "Test g > LONG_MAX." << endl;
   if ( process_input( "3", "34345345352345234523452345235234", "1", "100",
                       &f, &g, &min, &max ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }

   return 0;
}

/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////

