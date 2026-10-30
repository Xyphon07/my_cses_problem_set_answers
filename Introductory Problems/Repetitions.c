#include <stdio.h>
#include <string.h>

char arr[1000005]; 

int main() {
    if (scanf("%1000000s", arr) != 1) return 0;

    int max_streak = 1;
    int current_streak = 1;

    for (int i = 1; arr[i] != '\0'; i++) {
        if (arr[i] == arr[i - 1]) {
            current_streak++;
        } else {
            if (current_streak > max_streak) {
                max_streak = current_streak;
            }
            current_streak = 1; 
        }
    }

    if (current_streak > max_streak) {
        max_streak = current_streak;
    }

    printf("%d\n", max_streak);
    return 0;
}

