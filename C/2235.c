#include <stdio.h>
int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x==y || x==z || y==z) printf("S\n");
    else if (x+y==z || x+z==y || y+z==x) printf("S\n");
    else printf("N\n");
    return 0;
}
