#include <stdio.h>
int main() {
    int i, j;
    double m[12][12], soma=0.0;
    char n;
    
   
    scanf("%c", &n);

    for (i=0; i<12; i++) {
        for (j=0; j<12;j++) {

            scanf("%lf", &m[i][j]);
        }
    }

    for (i=0; i<6; i++) {
        for (j=0; j<i; j++) {
           soma+=m[i][j];
        }
    }
    for (i=6; i<12; i++) {
        for (j=0; j<12-i-1; j++) {
           soma+=m[i][j];
        }
    }
    if (n==83) printf("%.1lf\n", soma);
    else printf("%.1lf\n", soma/30);

    return 0;
}
