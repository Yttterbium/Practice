#include <stdio.h>

int minSteps(int start, int end) {
    int distance = end - start;
    int steps = 0;

    while (distance > 0) {
        if (steps == 0 || distance % 2 == 0) {
            distance -= 2;
        } else {
            distance--;
        }
        steps++;
    }

    return steps + 1;
}

int main() {
    int start, end;
    printf("Введіть x,y: ");
    scanf("%d %d", &start, &end);
    int result = minSteps(start, end);
    printf("Мінімальна кількість кроків: %d\n", result);
    return 0;
}
