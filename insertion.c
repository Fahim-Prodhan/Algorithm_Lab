#include<stdio.h>
int main() {
    int n, i;
    printf("Enter the length: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of array: ");

    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    int key,j;
    for(j=0; j<n; j++) {
        key = a[j];
        i = j-1;
        while(i>=0&&key<a[i]) {
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
    printf("Insertion sort : ");
    for(i=0; i<n; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
