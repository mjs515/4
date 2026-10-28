#include <stdio.h>
int main(void) {
    int N;
    scanf("%d", &N);
    int a = 0;
    int i = 0;
    while (i < N) {
        printf("%d", a);
        if (i < N -1) {
            printf(" ");
        }
	++a;
	++a;
	++a;
	++i;
    }
    printf("\n");
    return 0;
}
