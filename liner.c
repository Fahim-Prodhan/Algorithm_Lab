#include<stdio.h>
int main()
{
    int i,n,key,a[100];
    printf("Enter the length of Array: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    for(i = 0; i<n; i++)
    {
        if(a[i]== key)
        {
            printf("The number is found at %d position",i);
        }
        if(i == n)
        {
            printf("Error 404 ! Number is not found");
        }
    }
    return 0;
}
