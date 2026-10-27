#include <stdio.h>
#define K 1000
int main(void) {
    int volume;
    while (1) {
        printf("Введите объем в литрах: ");
        if (scanf("%d", &volume) != 1) {
            break;
        }
        if (volume<= 0) {
            break;
        }
        printf(" %d м^3\t%d л\n", volume / K, volume % K);
    }
    return 0;
}
