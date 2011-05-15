#include <iostream>

using namespace std;

int main( void )
{

   int i = 0;
   int x = 0;
   int y = 0;

   for ( i = 1 ; i != 101 ; i++ )
   {

      x = i % 3;
      y = i % 5;

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
