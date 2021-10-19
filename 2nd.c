#include<stdio.h>
#include<conio.h>
int main()
{
    int n,result;
    printf("Enter a no.");
    scanf("%d",&n);
    result=abs(n-51);
    printf("Absolute difference is %d",result);
    if(n>51){
        result=result*3;
        printf("\nAbsolute difference is %d",result);
    }
}
