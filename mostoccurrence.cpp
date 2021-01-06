#include <stdio.h>
int main() 
{
    int n,i,max,ans;
    printf("enter the size: ");
    scanf("%d", &n);
    int a[n],h[6]={0};
    printf(" enter the input from 1 to 6 :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        h[a[i]]++;
    }
    max=h[1];
    for(i = 2; i < 6; i++)
    {
        if(max<h[i])
        {
            max=h[i];
            ans=i;
        }
   }
   printf("%d",ans); //most ouccurence
   return 0;
}
