#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/**
 * struct print_type - struct for the print function
 *
 * @type: the type of the argument
 * @f: pointer to the corresponding print function
 */

typedef struct ptype_t
{
	char type;
	void (*f)(va_list);
} ptype_t;

void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void pr_int(va_list);
void pr_char(va_list);
void pr_float(va_list);
void pr_str(va_list);


#endif
