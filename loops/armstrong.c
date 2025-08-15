#include <stdio.h>

void main()
{
    int n,ld,org,rev=0,i; // org --> original value , ld -->last digit
    printf("Enter a number :");
    scanf("%d",&n);
    org=n;
    while(n>0)
    {
        ld=n%10;
        rev=rev + (ld*ld*ld);
        n=n/10;
    }
    if(org==rev) printf("%d is an armstrong number",org);
    else printf("%d is not an armstrong number",org);
  
}