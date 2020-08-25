//
//  main.c
//  exe2
//
//  Created by НУРИЯ on 8/25/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
//
//Nuriya Umirbekova exe2
#include <stdio.h>
#include <string.h>
#define length_m 256
void reverse(char*, int, int);
int main() {
    char string[length_m]; //string in c is a collection of char symbols, the string
    printf("enter a string: \n");
    scanf("%s",string);
    reverse(string, 0, strlen(string)-1);
    printf("Reverse of the string: %s\n", string);
}
void reverse(char *x, int start, int end)
{
    char c;
   if (start >= end)
      return;
   c=*(x+start);
   *(x+start)=*(x+end);
   *(x+end)=c;
   reverse(x, ++start, --end);
}


