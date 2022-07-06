#include <stdio.h>

int main(void)
{
	char ch = 'a';
	printf("print_alphabet;\n");

		while (ch <= 'z')
		{
			printf("%c", ch);
			ch++;
		}
	printf("\n");
	return (0);
}
