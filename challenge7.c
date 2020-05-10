#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int b,c,a;
double result1,result2,result,descriminant;
scanf("%d%d%d",&a,&b,&c);
descriminant=(b*b)-(4*a*c);

switch(descriminant>0)
  {
    case 1: result1=(-b+sqrt(descriminant))/(2*a);
        result2=(-b-sqrt(descriminant))/(2*a);
        printf("%f",result1);
        printf("%f",result2);
        break;
  case 0:
        switch(descriminant<0)
             {
               case 0: printf("both roots are equal");
                       result=-b/(2*a);
                       printf("%f",result);
                      break;
              case 1: result1=(-b+sqrt(descriminant))/(2*a);
                      result2= (-b-sqrt(descriminant))/(2*a);
                      printf("%f",result1);
                      printf("%f",result2);
                      break;
             }
        break;

 }
return 0;
}
