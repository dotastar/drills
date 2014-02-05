#include <stdlib.h>
#include <limits.h>
#include <sys/time.h>
#include <stdio.h>

int main() {
	struct timeval tv;
	int i;
	int r;
	double rd;

	gettimeofday(&tv, 0);
	srandom(tv.tv_sec);

	for (i = 0; i < 100; i++) {
		r = random();
		rd = r/((double)RAND_MAX + 1);
		printf("%f\n", rd);
	}

	return 0;
}
