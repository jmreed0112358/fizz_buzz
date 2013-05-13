// Author: Jeremy Reed
// File: fizz_buzz.cxx
// Date: 1-12-2013
// Contributors: NONE
// Purpose: Fizz Buzz test program.

/*
Copyright (C) 2013 Jeremy Reed

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include "fizz_buzz.h"

using namespace std;


/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////

int
run( const long int f, const long int g,
     const long int min, const long int max )
{

   long int i = 0;
   long int x = 0;
   long int y = 0;

   for ( i = min ; i <= max ; i++ )
   {

      // Compute remainders
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

/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////

int
process_input( const char* F, const char* G, const char* MIN, const char* MAX,
               long int* f, long int* g, long int* min, long int* max )
{
   int retval = 0;

   errno = 0;
   *f = strtol( F, NULL, 10 );
   if ( errno != 0 )
   {
      cout << "Error: " <<  strerror( errno ) << endl;
      retval = 1;
   }
   if ( *f == LONG_MAX || *f == LONG_MIN )
   {
      cout << "Error: f: Over/Underflow." << endl;
      retval = 1;
   }

   *g = strtol( G, NULL, 10 );
   if ( *g == LONG_MAX || *g == LONG_MIN )
   {
      cout << "Error: g: Over/Underflow." << endl;
      retval = 1;
   }

   *min = strtol( MIN, NULL, 10 );
   if ( *min == LONG_MAX || *min == LONG_MIN )
   {
      cout << "Error: min: Over/Underflow." << endl;
      retval = 1;
   }

   *max = strtol( MAX, NULL, 10 );
   if ( *max == LONG_MAX || *max == LONG_MIN )
   {
      cout << "Error: max: Over/Underflow." << endl;
      retval = 1;
   }

   retval = check_input( *f, *g, *min, *max );

   return retval;
}

/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////

int
check_input( const long int f, const long int g, 
             const long int min, const long int max )
{

   int retval = 0;

   cout << "f:       " << f << endl
        << "g:       " << g << endl
        << "min:     " << min << endl
        << "max:     " << max << endl
        << "LONG_MAX: " << LONG_MAX << endl
        << "LONG_MIN: " << LONG_MIN << endl;

   // Range Checks:
   if ( f <= 0 || f >= LONG_MAX )
   {
      cout << "Error: f is outside the permitted range." << endl;
      retval = 1;
   }

   if ( g <= 0 || g >= LONG_MAX )
   {
      cout << "Error: g is outside the permitted range." << endl;
      retval = 1;
   }

   if ( f > g )
   {
      cout << "Error: f > g." << endl;
      retval = 1;
   }

   if ( f == g )
   {
      cout << "Error: f == g." << endl;
      retval = 1;
   }

   if ( min <= 0 || min >= LONG_MAX || min <= LONG_MIN )
   {
      cout << "Error: min is outside the permitted range." << endl;
      retval = 1;
   }

   if ( max <= 0 || max >= LONG_MAX || max <= LONG_MIN )
   {
      cout << "Error: max is outside the permitted range." << endl;
      retval = 1;
   }

   if ( min > max )
   {
      cout << "Error: min > max." << endl;
      retval = 1;
   }

   return retval;
}

/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////

void
print_usage( )
{
   cout << "usage: fizz_buzz <f> <g> <min> <max>" << endl
        << "f, g: Numbers to check for divisiblity" << endl
        << "      Must be in the range 0 < f,g, <= " << LONG_MAX << endl
        << "      Also, f != 0, f < g." << endl
        << "min, max: Range of numbers to test against." << endl
        << "          Must be in the range 0 < min,max <= " << LONG_MAX << endl
        << "          And min < max." << endl << endl;
}

/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////

