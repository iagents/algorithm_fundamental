#include "bitwise_operators.h"

namespace algorithm_fundamental
{
  int bitwise_add(int x, int y)
  {
    // Iterate until there is no carry
    while( y > 0 )
    {
      // Carry contains common set bits of x and y
      int carry = x & y;
      // Sum of bits of x and y where at least one of the bits isn't set
      x = x ^ y;
      y = carry << 1;
    }

    return x;
  }
}
