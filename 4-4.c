#include <stdio.h>
int main(void) {
    int N;
    scanf("%d", &N);
    long long S = 0;
    int i = 1;
    while (i <= N) {
        S += i;
        ++i;
    }
    printf("%lld\n", S);
    return 0;
}

