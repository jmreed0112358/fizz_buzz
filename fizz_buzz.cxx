// Author: Jeremy Reed
// File: Fizz Buzz
// Date: 1-12-2013
// Contributors: NONE
// Purpose: Fizz Buzz test program.

#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include "fizz_buzz.h"

using namespace std;

int main( int argc, char* argv[] )
{

   int f = 0;
   int g = 0;
   int min = 0;
   int max = 0;

   if ( argc != 5 )
   {
      print_usage( );
      exit(-1);
   }
   else
   {
      cout << "f:   " << argv[1] << endl
           << "g:   " << argv[2] << endl
           << "min: " << argv[3] << endl
           << "max: " << argv[4] << endl << endl;
   }

   f = atoi( argv[1] );
   g = atoi( argv[2] );
   min = atoi( argv[3] );
   max = atoi( argv[4] );

   if ( check_input( f, g, min, max ) )
   {
      cout << "Check your input!" << endl;
      print_usage( );
      exit(-1);
   }

   run( f, g, min, max );
   return 0;
}

int
run( int f, int g, int min, int max )
{

   int i = 0;
   int x = 0;
   int y = 0;

   for ( i = min ; i <= max ; i++ )
   {

      // Compute remainers.
      x = i % f;
      y = i % g;

      
      // Check remainders.
      if ( ( x == 0 ) && ( y == 0 ) )
      {
         cout << i << " FizzBuzz" << endl;
      }
      else if ( ( x == 0 ) && ( y != 0 ) )
      {
         cout << i << " Fizz" << endl;
      }
      else if ( ( x != 0 ) && ( y == 0 ) )
      {
         cout << i << " Buzz" << endl;
      }
      else
      {
         cout << i << endl;
      }
   }

   return 0;

}

int
check_input( int f, int g, int min, int max )
{
   // Range Checks:
   if ( f <= 0 || f > INT_MAX )
   {
      cout << "Error: f is outside the permitted range." << endl;
      return 1;
   }

   if ( g <= 0 || g > INT_MAX )
   {
      cout << "Error: g is outside the permitted range." << endl;
      return 1;
   }

   if ( f > g )
   {
      cout << "Error: f > g." << endl;
      return 1;
   }

   if ( f == g )
   {
      cout << "Error: f = g." << endl;
      return 1;
   }

   if ( min <= 0 || min > INT_MAX )
   {
      cout << "Error: min is outside the permitted range." << endl;
      return 1;
   }

   if ( max <= 0 || max > INT_MAX )
   {
      cout << "Error: max is outside the permitted range." << endl;
      return 1;
   }

   return 0;
}

void
print_usage( )
{
   cout << "usage: fizz_buzz <f> <g> <min> <max>" << endl
        << "f, g: Numbers to check for divisiblity" << endl
        << "      Must be in the range 0 < f,g, <= " << INT_MAX << endl
        << "      Also, f != 0, f < g." << endl
        << "min, max: Range of numbers to test against." << endl
        << "          Must be in the range 0 < min,max <= " << INT_MAX << endl
        << "          And min < max." << endl << endl;
}
