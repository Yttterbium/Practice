#include <stdio.h>

int main() {
    int a, b, c;
    double r1, r2, r3, tr, t;
    
    scanf("%d %d %d", &a, &b, &c);
    
    r1 = 1.0 / a;
    r2 = 1.0 / b;
    r3 = 1.0 / c;
    
    tr = r1 + r2 + r3;
    
    t = 1.0 / tr;
    
    printf("%.2f\n", t);
    
    return 0;
}
