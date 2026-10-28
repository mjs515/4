#include <stdio.h>
#include <stdint.h>
int main(void) {
    uint16_t n1, n2;
    float result;
    printf(" n1, n2: ");
    scanf("%hu %hu", &n1, &n2);
    result = (float)n1 / ((float)n1 + n2);
    printf("Результат: %f\n", result);
    printf("Размер uint16_t: %llu байт\n",
           (unsigned long long)sizeof(uint16_t));
    printf("Размер float: %llu байт\n",
           (unsigned long long)sizeof(float));
    printf("Размер int: %llu байт\n",
           (unsigned long long)sizeof(int));
    return 0;
}
