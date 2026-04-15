#include <stdio.h>

int main() {
    int cor = 0, num = 0, cnt = 0;
    scanf("%d", &cor);

    do {
        scanf("%d", &num);
        cnt++;

        if (num > cor)
            printf("%d>?\n", num);
        else if (num < cor)
            printf("%d<?\n", num);
        else
            printf("%d==?\n", num);

    } while (num != cor);

    printf("%d\n", cnt);

    return 0;
}
