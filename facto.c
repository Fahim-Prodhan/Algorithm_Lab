
#include<stdio.h>
int facto(unsigned int i) {
    if(i <= 1) {
        return 1;
    }
    return i*facto(i-1);
}

int main() {
    int i ;
    scanf("%d", &i);

    printf("factorial  is = %d",facto(i));

    return 0;
}
