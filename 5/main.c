#include <stdio.h>

#define MOD 12345

int count_sequences(int n) {
  if (n <= 0) return 0;
  if (n == 1) return 2;
  if (n == 2) return 4;
  if (n == 3) return 7;
  int sequences[n + 1];
  sequences[1] = 2;
  sequences[2] = 4;
  sequences[3] = 7;
  for (int i = 4; i <= n; ++i)
    sequences[i] = (sequences[i - 1] + sequences[i - 2] + sequences[i - 3]) % MOD;
  return sequences[n];
}

int main() {
  int n;
  printf("Введіть довжину послідовності n: ");
  scanf("%d", &n);
  int result = count_sequences(n);
  printf("Кількість шуканих послідовностей: %d\n", result);
  return 0;
}
