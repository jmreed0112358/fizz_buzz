#include <iostream>
#include <stdlib.h>

using namespace std;

int main( int argc, char* argv[] )
{

   int i = 0;
   int f = 0;
   int g = 0;
   int x = 0;
   int y = 0;
   int min = 0;
   int max = 0;

   if ( argc != 5 )
   {
      cout << "usage: fizz_buzz <x> <y> <min> <max>" << endl
           << "x, y: Numbers to check for divisiblity" << endl
           << "min, max: Range of numbers to test against." << endl << endl;
      exit(-1);
   }
   else
   {
      cout << "x:   " << argv[1] << endl
           << "y:   " << argv[2] << endl
           << "min: " << argv[3] << endl
           << "max: " << argv[4] << endl << endl;
   }

   f = atoi( argv[1] );
   g = atoi( argv[2] );
   min = atoi( argv[3] );
   max = atoi( argv[4] );

   for ( i = min ; i != max ; i++ )
   {

      x = i % f;
      y = i % g;

      

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
