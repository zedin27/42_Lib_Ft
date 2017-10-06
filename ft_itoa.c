#include "libft.h"
#include <stdio.h>


char *ft_itoa(int n)
{
	int b;
	char *a;

	b = 0;

 	if (n == -2147483648) //This is to pass the int min + allocation tests
 	{
		a = ft_strnew(12);
		a = ft_strcpy(a, "-2147483648");
 		return (a); 
	}

	if (n < 0)
	{
		n = n * -1;
		b++;
	}

	b = (b + (int)ft_intlen(n));
	a = ft_strnew(b); 
	if (a == NULL)
		return (NULL);

	b--;

	while (n > 9)
	{
		a[b--] = ((n % 10) + '0');
		n = (n / 10);
	}

	a[b] = (n + '0');
	if (b-- == 1)
		a[b] = '-';
	
	return(a);
}


/*   int main(int argc, char* argv[])   */
/*   {   */

/*   	if (argc != 2)   */
/*   	{   */
/*   		printf("*a plaintive sigh escapes the computer speakers*\n");   */
/*   		return(0);   */
/*   	}   */

/*   	int a = atoi(argv[1]);   */
	
/*   	printf("%s\n", ft_itoa(a));   */

/*   	return (26);   */

/*   }   */

/* ################################################## */
/* ################################################## */

/* char *ft_itoa(int n) */
/* { */
/* 	char *a; */
/* 	int b; */
/* 	int e; */
/* 	a = ft_strnew(13); */
/* 	if( a == NULL) */
/* 		return(NULL); */

/* 	if (n == -2147483648) */
/* 	{ */
/* 		a = "-2147483648"; */
/* 		return (a); */
/* 	} */
/* 	e = 0; */
/* 	if (n < 0) */
/* 	{ */
/* 		n = n * -1; */
/* 		a[e] = '-'; */
/* 		e++; */
/* 	} */
/* 	b = 1000000000; */
/* 	while (b > 9) */
/* 	{ */
/* 		if ((n / b) != 0) */
/* 		{ */
/* 			a[e] = ((n / b) + '0'); */
/* 			if ((n % b) < (b / 10)) */
/* 			{ */
/* 				a[++e] = '0'; */
/* 				n = (n - b); */
/* 				b  = b / 10; */
/* 			} */
/* 			else */
/* 			{ */
/* 				n = (n % b); */
/* 				e++; */
/* 			} */
/* 		} */
/* 		b = b / 10; */
/* 	} */
	
/* 	a[e] = ((n / b) + '0'); */
	
/* 	return(a); */

/* /\* 	int a; *\/ */
/* /\* 	long result; *\/ */
/* /\* 	result = (long)n; *\/ */
/* /\* 	a = 0; *\/ */

/* } */

/* ################################################## */
/* ################################################## */

/* char *ft_itoa(int n) */
/* { */
/* 	int b; */
/* 	int d; */
/* 	char *a; */
/* 	a = malloc(sizeof(char) * 17); */

/* 	if (a == NULL) */
/* 		return (NULL); */
	
/* 	bzero(a, 17); */
/* 	b = 0; */

/* 	if (n < 0) */
/* 	{ */
/* 		b++; */
/* 		a[0] = '-'; */
/* 		n = n * -1; */
/* 	} */

/* 	d = n; */

/* 	while(d > 10) */
/* 	{ */
/* 		d = d / 10; */
/* 		b++; */
/* 	} */

/* 	while (n > 10) */
/* 	{ */
/* 		a[b--] = ((n % 10) + '0'); */
/* 		n = n / 10; */
/* 	} */
/* 	if (n == 10) */
/* 	{ */
/* 		a[b--] = '0'; */
/* 		a[b] = '1'; */
/* 	} */
/* 	else */
/* 		a[b] = (n + '0'); */

/* 	return (a); */
/* } */
