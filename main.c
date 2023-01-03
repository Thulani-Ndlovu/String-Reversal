/*
Creator: Thulani Ndlovu
date: 03/01/2023
Title: String reversal
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void stringReverse(char *name);
int main(void)
{

   char name_[]= "School";
   printf("Unreversed string: %s\n", name_);
   stringReverse(name_); 
   printf("Reversed string = %s\n ",name_);
    return 0;
}
void stringReverse(char *name)
{
        char temp;
        int length = strlen(name);
        int midpoint = length/2;
   
       for(int j=0;j<midpoint;j++)
        {
           temp = name[j];
           name[j]=name[(length-(j+1))];
           name[(length-(j+1))] = temp;
           
        }
}
