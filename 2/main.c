#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int lcm_array(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; ++i) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int main() {
    int r;
    scanf("%d", &r); 
    
    int numbers[r];
    
    for (int i = 0; i < r; ++i) {
        scanf("%d", &numbers[i]);
    }
    
    int result = lcm_array(numbers, r);
    
    printf("%d\n", result);
    
    return 0;
}
