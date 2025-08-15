#include<stdio.h>
#include<string.h>
void main() 
{
    int i,n1,n2 ,c=1;
    char a[30] , b[30];
    printf("Enter first string :");
    gets(a);
    printf("Enter second string :");
    gets(b);
    n1 = strlen(a);
    n2 = strlen(b);
    if(n1!=n2)
        printf("The sizes of the strings are different for comparison.\n");
    else
    {
        printf("Size of first string is : %d",n1);
        printf("\nSize of second string is : %d",n2);
        for(i=0;i<n1;i++)
        {
            if(a[i]>='A'&& a[i]<='Z')
                a[i] += 32;
            
            if(b[i]>='A' && b[i]<='Z')
                b[i] +=32;
            
            if(a[i]!=b[i]){
              c=0;
              break;
            }
        }
        if(c==1) printf("\nStrings are same");
        else printf("\nStrings are not same");
    }
}