#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
// MUST CHECK FOR NULLS WHEN NECESARY
// %% behaves weirdly
	
	printf("Characters and strings\n---------------------\n");
	int i = ft_printf("%cola%s%s\n", 'h', "cara", NULL);
	int j = printf("%cola%s%s\n", 'h', "cara", NULL);
	printf("My len: %d\n", i);
	printf("Original len: %d\n", j);
	
	printf("\nHexadecimals\n---------------------\n");
	int a = ft_printf("%x %x %x %X %X %X\n", 1234, 1111, 81272347, 1234, 1111, 81272347);
	int b = printf("%x %x %x %X %X %X\n", 1234, 1111, 81272347, 1234, 1111, 81272347);
	printf("My len: %d\n", a);
	printf("Original len: %d\n", b);
	
	printf("\nInt\n---------------------\n");
	int c = ft_printf("%i %i %i %i\n", 1234, 0, -1234, -2147483648);
	int d = printf("%i %i %i %i\n", 1234, 0, -1234, -2147483648);
	printf("My len: %d\n", c);
	printf("Original len: %d\n", d);
	
	printf("\nUnsigned\n---------------------\n");
	int m = ft_printf("%u %u\n", -2147483650, 3147483650);
	int n = printf("%u %u\n", -2147483650, 3147483650);
	printf("My len: %d\n", m);
	printf("Original len: %d\n", n);
	
	printf("\nVoid *\n---------------------\n");
	void *jiji = malloc(sizeof(char));
	void *jojo = malloc(sizeof(int));
	int o = ft_printf("%p %p %p\n", jiji, jojo, NULL);
	int p = printf("%p %p %p\n", jiji, jojo, NULL);
	printf("My len: %d\n", o);
	printf("Original len: %d\n", p);
}
