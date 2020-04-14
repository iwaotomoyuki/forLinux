#include <stdio.h>

static int total = 0;

void init(void);
void add(int x);
int get(void);

void init(void)
{
	total = 0;
}

void add(int x)
{
	total += x;
}

int get(void)
{
	return total;
}

int main(void)
{
	int i = 0;

	init();
	for(i = 0; i < 1000; i++) {
		add(i);
	}
	printf("total = %d\n", get());
	return 0;
}
