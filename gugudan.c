#include <stdio.h>

int main()
{
	int m;
	int j;

	scanf("%d", &m);

	for(j = 1; j < 10; j++)
		printf("%d * %d = %d\n", m, j, m*j);

	return 0;
}
