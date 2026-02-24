#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    int count = 0;

    for (a = 2; a <= 60; a += 2) { 
        for (b = 1; b <= 59; b += 2) { 
            if (b <= a) continue;
            for (c = 2; c <= 60; c += 2) { 
                if (c <= b) continue;
                for (d = 1; d <= 59; d += 2) { 
                    if (d <= c) continue;
                    for (e = 2; e <= 60; e += 2) {
                        if (e <= d) continue;
                        for (f = 1; f <= 59; f += 2) { 
                            if (f <= e) continue;
                            count++;
                        }
                    }
                }
            }
        }
    }

    printf("\nTotal de jogos possíveis: %d\n", count);
    return 0;
}