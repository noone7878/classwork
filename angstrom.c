#include <stdio.h>

int main(void) {
    int n, s, r, save, temp;

    for (n = 1; n <= 1000; n++) {
        save = n;
        s = 0;  // Initialize sum for each number
        temp = n;  // Use a temporary variable

        while (temp > 0) {
            r = temp % 10;
            s = s + r * r * r;
            temp = temp / 10;
        }

        if (save == s) {  // Compare with sum
            printf("%d\n", save);
        }
    }

    return 0;
}
