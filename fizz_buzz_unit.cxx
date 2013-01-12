// Author: Jeremy Reed
// File: fizz_buzz_unit.cxx
// Date: 1-12-2013
// Contributors: NONE
// Purpose: Fizz Buzz test program.

#include <iostream>
#include "fizz_buzz_unit.h"
#include "fizz_buzz.h"

using namespace std;

int main( int argc, char** argv )
{
   check_input_unit( );

   return 0;
}

// Test check_input(...)
int check_input_unit( )
{

   cout << "Check the program's output if expecting an error." << endl;
   cout << "Multiple errors can occur." << endl << endl;

   // Test correct input.  check_input should return 0 here.
   cout << "Test correct input." << endl;
   if ( check_input( 3, 5, 1, 100 ) )
   {
      cout << "Test FAILED." << endl;
   }
   else
   {
      cout << "Test PASSED." << endl;
   }
   cout << endl;

   // Test f <= 0.  (f == 0).  check_input should return 1 here.
   cout << "Test f <= 0. (f == 0)." << endl;
   if ( check_input( 0, 3, -20, 100 ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   // Test f <= 0. (f < 0).  check_input should return 1 here.
   cout << "Test f <= 0. (f < 0)." << endl;
   if ( check_input( -10, 3, -20, 100 ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   // Test f > g.  check_input should return 1 here.
   cout << "Test f > g." << endl;
   if ( check_input( 5, 3, 1, 100 ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   // Test f = g.  check_input should return 1 here.
   cout << "Test f == g." << endl;
   if ( check_input( 5, 5, 1, 100 ) )
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
   if ( check_input( 3, 5, 0, 100 ) )
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
   if ( check_input( 3, 5, -20, 100 ) )
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
   if ( check_input( 3, 5, 1, 0 ) )
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
   if ( check_input( 3, 5, 1, -10 ) )
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
   if ( check_input( 3, 5, 10, 5 ) )
   {
      cout << "Test PASSED." << endl;
   }
   else
   {
      cout << "Test FAILED." << endl;
   }
   cout << endl;

   return 0;
}
