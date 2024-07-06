#include <stdio.h>
#include <math.h>

int cntInt(double x1, double y1, double r1, double x2, double y2, double r2) {
    double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if (dist == 0 && r1 == r2) {
        return -1;
    } else if (dist > r1 + r2 || dist < fabs(r1 - r2)) {
        return 0;
    } else if (dist == r1 + r2 || dist == fabs(r1 - r2)) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    double x1, y1, r1, x2, y2, r2;
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    int res = cntInt(x1, y1, r1, x2, y2, r2);

    if (res == -1) {
        printf("Кола мають безкінечно багато точок перетину.\n");
    } else {
        printf("Кількість точок перетину: %d\n", res);
    }

    return 0;
}
