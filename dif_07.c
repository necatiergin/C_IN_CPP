#include <stdio.h>

int main(void)
{
	printf("sizeof(char) = %zu\n", sizeof(char));
	printf("sizeof(int) = %zu\n", sizeof(int));
	printf("sizeof('A') = %zu\n", sizeof('A'));

	// 'A' is a character constant in C of type int
	// 'A' is a character literal in C++ of type char
}
