// nested if
#include <stdio.h>
void main ()
{
   int a,b,c;
  printf(" nested if \n");
   printf(" enter the numbers ");
   scanf(" %d %d %d ",&a,&b,&c);
    if (a>b)
    { if (a>c)
    {
    printf(" greatest no is :%d ",a ); }
    }
     else 
    {printf(" condition false ");
    }
} 
 // else if
#include <stdio.h>
void main (){
   int a,b,c ;
    printf(" else if\n");
   printf(" enter the nos ");
  scanf(" %d %d %d", &a,&b,&c);
 if (a>b && a>c)
 {
   
   printf(" a is greatest ",a);
      }
      else if(b>c && b>a)
      {
    printf("b is the greatest",b);
      }
      else
      {
         printf(" c is the greatest",c);
      }
}


// ternary
#include <stdio.h>
void main()
{
   int a,b,c;
   printf(" ternary condition\n");
   printf(" enter the values of a,b & c");
   scanf("%d %d %d",&a,&b,&c);
   //ternary operator
 (a>b)&&(a>c)?printf("a is greatest number"):printf(" condition failed");
}