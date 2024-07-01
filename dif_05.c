#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10; ++i) {
		int i = 333; //valid in C invalid in C++
		//local i hides loop variable i
		printf("%d ", i);
	}
}
