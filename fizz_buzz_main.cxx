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

