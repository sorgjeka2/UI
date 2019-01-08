#include <stdio.h>

int main()
{
	int m;
	int i;

	scanf("%d", &m);

	for(i = 1; i < 10; i++)
		printf("%d * %d = %d\n", m, i, m*i);

	return 0;
}
