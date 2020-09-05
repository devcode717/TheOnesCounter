/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// N = 00001100
// Pos = 3
// N >> 1:  
//          00000110                0&0 = 0,  1&0 = 0;  0&1 = 0; 1&1 = 1
//      &   00000001
//     -------------
//                 0
//
// N >> 2:  00000011
// N >> 3:  00000001
// N >> 4:  00000000
int
getbit (int N, int pos)
{
  int mask = 1;
  return (N >> pos) & mask;
}

int
returnMaxDigits ()
{
  return sizeof (int) * 8;
}


/*William write this algorithm*/
int
totalOnesInNumber (int N)
{
  int countOfOnes = 0;
  for (int i = 0; i < returnMaxDigits (); i++)
    {
      int bit = getbit (N, i);
      if (bit == 1)
	{
	  countOfOnes++;
	}
    }

  return countOfOnes;
}



int
main ()
{
  //printf("Hello World\n");
  int i = 0 b11111111111111010;	// int i = 1; int i = 3 (11);
  printf ("Total ones in number (%d) is (%d)\n", i, totalOnesInNumber (i));
  return 0;
}

