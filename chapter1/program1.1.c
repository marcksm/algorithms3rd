#include <stdio.h>
#define N 10
int main () {
	int i, p, q, t, id[N];
	for (i = 0; i < N; i++) id[i] = i;
	printf ("Input 2 digit i, j, where 0 <= i, j <= 9  to make a union between them\n");
	printf ("to quit input q\n");
	while(scanf("%d %d\n", &p, &q) == 2) {
		if (id[p] == id[q]) continue;
		for (t = id[p], i = 0; i < N; i++)
			if (id[i] == t) id[i] = id[q];
	}
	for (i = 0; i < N; i++) printf ("%d ", id[i]);
	return 0;

}
