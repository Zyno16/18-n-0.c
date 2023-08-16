#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
   do{
    printf("enter a number");
    scanf("%d",&n);
   }while(n<=0);
    for(i=1;i<=n;i++){

    if(n % i==0)
        printf("the numbers is %d\n",i);

    }

    return 0;
}
