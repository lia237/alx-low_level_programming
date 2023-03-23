#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * integer_print - print integers.
(* a blank line
*@args: the list of parameters
* Description: this function prints integers)?
(* section header: the header of this function is variadic_functions.h)*
* Return:no return a void func.
*/

void print_all(const char * const format, ...)
{
	 va_list args;
	 const char *p;
	 char c, *s;
	 int i;
	 float f;

	 va_start(args, format);
	 while (*p)
	 {
		 if (*p == 'c')
		 {
			 c = (char)va_arg(args, int);
			 printf("%c", c);
		 }
		 else if (*p == 'i')
		 {
			 i = va_arg(args, int);
			 printf("%d", i);
		 }
		 else if (*p == 'f')
		 {
			 f = (float)va_arg(args, double);
			 printf("%f", f);
		 }
		 else if (*p == 's')
		 {
			 s = va_arg(args, char *);
			 if (s == NULL)
				 printf("(nil)");
			 else
				 printf("%s", s);
		 }
		 p++;
		 if (*p)
			 printf(", ");
	 }
	 va_end(args);
	 printf("\n");
}
