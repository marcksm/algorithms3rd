#include <stdio.h>
#define N 10
int main () {
	int i, j, p, q, t, id[N];
	for (i = 0; i < N; i++) id[i] = i;
	printf ("Input 2 digit i, j, where 0 <= i, j <= 9  to make a union between them\n");
	printf ("to quit input q\n");
	while(scanf("%d %d\n", &p, &q) == 2) {
		for (i = p; i != id[i]; i = id[i]);
		for (j = q; j != id[j]; j = id[j]);
		if (i == j) continue;
		id[i] = j; 
	}
	for (i = 0; i < N; i++) printf ("%d ", id[i]);
	return 0;

}
