#include<stdio.h>
#include<conio.h>
int main()
{
int result;
int a=4,b=3;
char ch;
scanf("%c",&ch);
switch(ch)
{
case '+': result=a+b;
          break;
case '-': result=a-b;
          break;
case '*': result= a*b;
          break;
case '/': result= a/b;
          break;
case '%': result =a%b;
          break;

  }
  printf("result is %d",result);
  return 0;
}
