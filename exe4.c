//
//  main.c
//  exe4
//
//  Created by НУРИЯ on 8/25/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
//
// Nuriya Umirbekova exe 4
#include <stdio.h>
int main()
{
   int x, y, *a, *b, swap;
   printf("enter 2 number\n");
   scanf("%d%d", &x, &y);
   printf("Before\nx = %d\ny = %d\n", x, y);
   a = &x;
   b = &y;
   swap = *b;
   *b = *a;
   *a = swap;
   printf("After\nx = %d\ny = %d\n", x, y);
}
