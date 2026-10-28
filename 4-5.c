#include <stdio.h>
double m_to_ft(double m) {
    const double COEF = 3.281;
    return m * COEF;
}
int main(void) {
    double value;
    while (scanf("%lf", &value) == 1) {
        double result = m_to_ft(value);
        printf("%.2f\n", result);
    }
    return 0;
}

