/*print the values which will provide the targeted sum values*/
#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=(size-1);i++)
    {
    printf("Enter the %d value:\n",(i+1));
    scanf("%d",&a[i]); 
    }
    int a1,b1;
    int flag=0;
    int k;
    printf("Enter the target sum value:\n");
    scanf("%d",&k);
    for(int i=0;i<(size-1);i++)
    {
        for(int j=0;j<=(size-1);j++)
        {
            if(a[i]+a[j]==k)
            {
            a1=a[i];
            b1=a[j];
            flag++;
            }
        }
    }
    if(flag!=0)
    {
        printf("a1=%d\tb1=%d",a1,b1);
    }
    else
    {
        printf("-1");
    }
    return 0;
}