#include <stdio.h>

int main() {
    char a;
    int b,c;
    scanf("%c %d %d",&a,&b,&c);
    for (int i=0;i<c;i++){
        for (int j=0;j<b;j++){
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}