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

/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////

int main( int argc, char* argv[] )
{

   long int f = 0;
   long int g = 0;
   long int min = 0;
   long int max = 0;

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

   if ( process_input( argv[1], argv[2], argv[3], argv[4],
                       &f, &g, &min, &max ) )
   {
      print_usage( );
      exit( -1 );
   }

   run( f, g, min, max );
   return 0;
}

/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////

