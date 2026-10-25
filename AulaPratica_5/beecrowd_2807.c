#include <stdio.h>
 
int main() {
 
	int i, n, iccanobif[100];

	iccanobif[0] = 1;
	iccanobif[1]= 1;

	scanf("%d", &n);

	for (i = 2; i < n; ++i)
		iccanobif[i] = iccanobif[i - 1] + iccanobif[i - 2];

	for (i = n - 1; i >= 1; --i)
		printf("%d ", iccanobif[i]);

	printf("%d\n", iccanobif[i]);

    return 0;
    
}