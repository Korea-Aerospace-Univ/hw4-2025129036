#include <stdio.h>

int main()
{
    int cor = 0, num = 0;
    scanf("%d", &cor);
    
    do {
        scanf("%d", &num);
        if ( num > cor )
            printf("%d>?", num);
        else if ( num < cor )
            printf("%d<?", num);
        else
            printf("%d==?", num);
    } while ( num != cor );
    
    return 0;
}
