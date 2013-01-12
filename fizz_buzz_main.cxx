// Author: Jeremy Reed
// File: fizz_buzz.cxx
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
