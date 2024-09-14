//
// Created by Maria Hilda Bermejo on 4/30/20.
//

#include "UFunciones.h"


unsigned int   Factorial(unsigned int n)
{
   if(n==0)
       return 1;
   return n * Factorial(n-1);
}

/* 5!  =   1 x 2 x 3 x 4 x 5
 * 5!  =   5 x 4 x 3 x 2 x 1
 *
 * factorial(5 ) = 120
 *
 *  * factorial(5 ) = 5 x factorial(4)
 *                      4 x factorial(3)
 *                           3  x factorial(2)
 *                                 2 x factorial(1)
 *                                       1 x factorial(0)     caso base n==0
 *
 */


unsigned int  producto(unsigned int n1, unsigned int n2)
{
   if( n2==1)
       return n1;
   return n1 + producto(n1,n2-1);
}

/* producto(5, 4) =   5 + 5 + 5 + 5
 * producto(5,4) =   20

 *  * producto(5,4) =   5 + producto(5,3)
 *                        5 + producto(5,2)
 *                               5 + producto(5,1) caso base multiplicando ==1
 *                                       5
 *
 */



unsigned int   cociente(unsigned int dividendo, unsigned int divisor)
{
    if( dividendo < divisor)
        return 0;
    return  1 + cociente(dividendo-divisor, divisor);
}

/*
 * cociente(17, 3)
 * cociente(17, 3) =  17 - 3 = 14  (1)
 *                    14 - 3 = 11  (2)
 *                    11 - 3 = 8   (3)
 *                    8 - 3  = 5  (4)
 *                    5 - 3  = 2  (5)
 *

 *
 */


unsigned int   sumatoria(unsigned int num)
{
   if(num ==1)
       return 1;
   return num + sumatoria(num-1);
}

/*  1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9..
 *
 *  7 + 6 + 5 + 4 + 3 + 2 + 1

 *
 * 7 + 6 + 5 + 4 + 3 + 2 + 1
 *  sumar(7) = 7 + sumar(6)
 *                  6 + sumar(5)
 *                          5 + sumar(4)
 *                                4 + sumar(3)
 *                                      3 + sumar(2)
 *                                             2 + sumar(1)  caso base n==1
 *
 *
 */