// Author: Jeremy Reed
// File: fizz_buzz.h
// Date: 1-12-2013
// Contributors: NONE
// Purpose: Fizz Buzz test program.

#ifndef FIZZ_BUZZ_H
#define FIZZ_BUZZ_H

#include <errno.h>
#include <string.h>

   int process_input( const char* F, const char* G, 
                      const char* MIN, const char* MAX,
                      long int* f, long int* g, long int* min, long int* max );
   int run( const long int f, const long int g, 
            const long int min, const long int max );
   int check_input( long int f, long int g, long int min, long int max );
   void print_usage( );
   

#endif
