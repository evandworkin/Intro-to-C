//
//  Marathon.c
//  
//
//  Created by Evan Dworkin on 1/31/24.
//

#include "Marathon.h"

/* the distance of a marathon in km */

#include <stdio.h>
#define MILES 26        //defined MILES in the preprocessor section this is NOT a
               //variable but will be substituted as a number wherever
                                       //it is in the program

int main()
{
  int miles, yards;
  float kilometers;

  /*miles = 26;*/
  yards = 385;
  kilometers = 1.609 * (MILES + yards / 1760.0);
  printf("\n A marathon is %f kilometers. \n\n", kilometers);
  return 0;
    
}
