#include <stdlib.h>
#include <stdio.h>

int main()
{
	char *s = 0;

	s = (char *)malloc(5);
	*s = 0;

	if (s == "") {
		printf("Yes\n");
	}
        return 0;
}
