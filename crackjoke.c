#include <stdio.h>

void Spam(char*);

void Spam(char* str)
{
	while (1)
		printf(" %s ", str);
}

int main ()
{
	Spam("  'Long time no C!'  ");

	return 0;
}
