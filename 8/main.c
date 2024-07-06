#include <stdio.h>
#include <string.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int countAnagrams(char* word) {
    int length = strlen(word);
    int frequency[52] = {0};
    
    for (int i = 0; i < length; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            frequency[word[i] - 'A']++;
        } else if (word[i] >= 'a' && word[i] <= 'z') {
            frequency[word[i] - 'a' + 26]++;
        }
    }
    
    int result = factorial(length);
    
    for (int i = 0; i < 52; i++) {
        if (frequency[i] > 1) {
            result /= factorial(frequency[i]);
        }
    }
    
    return result;
}

int main() {
    char word[15];
    printf("Введіть слово: ");
    scanf("%s", word);

    int anagrams = countAnagrams(word);

    printf("Кількість можливих анаграм: %d\n", anagrams);

    return 0;
}
