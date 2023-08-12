#include<stdio.h>
void gn(int a, int b)
{
    if(a>b)
    {
        printf("%d is greater", a);
    }
    else
    {
        printf("%d is greater", b);
    }
}

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    gn(a,b);

}
