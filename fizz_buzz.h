// Author: Jeremy Reed
// File: fizz_buzz.h
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

#ifndef FIZZ_BUZZ_H
#define FIZZ_BUZZ_H

#include <errno.h>
#include <string.h>

   int run( const long int f, const long int g,
            const long int min, const long int max );
   int process_input( const char* F, const char* G, 
                      const char* MIN, const char* MAX,
                      long int* f, long int* g, long int* min, long int* max );
   int check_input( const long int f, const long int g, 
                    const long int min, const long int max );
   void print_usage( );
   

#endif
