#include <stdio.h>
void flowchart_algorithm(int x) {
    int result = 1;

    for (int i = 1; i <= 1500; i++) {
        if (i % 2 == 0) {
            result += i;
        } else {
            result *= i;
        }

        if (result > 1000) {
            result -= 100;
        }

        printf("Step %d: result = %d\n", i, result);
    }
}

			
