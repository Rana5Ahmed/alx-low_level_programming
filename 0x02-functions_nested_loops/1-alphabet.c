#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 */
 void print_alphabet ()
{ 
    char ch ='a' ;
    while (ch <='z')
     {
       _putchar('%s'ch);
        ch++ ;
     }     
    _putchar ('\n');
    return (0);
}