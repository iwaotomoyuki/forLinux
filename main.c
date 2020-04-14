#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char* argcv[])
{
	if(argc != 2) {
		/* Todo:本来はここでヘルプを表示する */
		return -1;
	}
	{
		int i = 0;
		/* Todo:本来は文字列チェックをするべき */
		int count = atoi(argcv[1]);
		init();
		for(i = 0; i < count; i++) {
			add(i);
		}
		printf("total = %d\n", get());
		return 0;
	}
}
