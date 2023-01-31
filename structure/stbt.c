#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
 double calc_area(triangle *tr) {
	double p = (tr->a + tr->b + tr->c) / 2.0;
	return sqrt(p * ((p - tr->a) * (p - tr->b) * (p - tr->c)));
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
	triangle tr_tmp;

	for (int i = 0; i < n; i++) {
		for (int j = i +1; j < n; j++) {
			if (calc_area(&tr[i]) > calc_area(&tr[j])) {
				tr_tmp = tr[i];
				tr[i] = tr[j];
				tr[j] = tr_tmp;
			}
		}
	}

}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}