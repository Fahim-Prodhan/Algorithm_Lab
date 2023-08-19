#include<stdio.h>
#include<math.h>
//int binarySearch(int A[n], int n, int searchItem);
int main() {
    int A[100], n, searchItem;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    printf("Enter the Array: ");
    for(int i = 0; i<n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the key: ");
    scanf("%d", &searchItem);

    int x = binarySearch( A, n, searchItem);

    if(x!=-1) {
        printf("The position of the key is = %d ", x);
    }else {
        printf("Unsuccessful!");
    }




}

int binarySearch(int A[], int n, int searchItem) {
    int L = 0;
    int R = n-1;
    while(L<=R) {
        int m = ceil((L+R)/2);
        if(A[m]<searchItem) {
            L = m +1;
        }else if(A[m]>searchItem) {
            R = m-1;
        }else{
            return m;
        }
    }
    return -1;
}

