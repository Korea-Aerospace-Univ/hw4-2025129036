#include <stdio.h>

int main() {
    int N = 0, numcount = 0, strcount = 0, numfin = 0, strfin = 0;
    char ch = 0;
    
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++) {
        scanf("%c", &ch);
        
        if (ch >= 'a' && ch <= 'z') {
            strcount++;
            numcount = 0;
            
            if (strcount > strfin)
                strfin = strcount;
        }    
        else if (ch >= 0 && ch <= 9) {
            numcount++;
            strcount = 0;
            
            if (numfin < numcount)
                numfin = numcount;
        }
        else
            numcount = 0;
            strcount = 0;
    }
    printf("%d\n", strfin);
    printf("%d\n", numfin);
}
