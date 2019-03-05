#include<stdio.h>
int plus(int a, int b){ return a+b; }
int minus(int a, int b){ return a-b; }
int multiply(int a, int b){ return a*b; }
int divided(int a, int b){ return a/b; }
int (*arrfun[4]) (int a, int b);
int main(void)
{
  int a,c,result;
  int b;  // 0:+ 1:- 2:* 3:/
  printf("input a= \n");
  scanf("%d", &a);   
  printf("input 0 1 2 3 to + - * / \n");
  scanf("%d", &b);
  printf("input c= \n");
  scanf("%d",&c);
  arrfun[0] = plus; /* address of sum() */
  arrfun[1] = minus; /* address of subtract() */
  arrfun[2] = multiply; /* address of mul() */
  arrfun[3] = divided; /* address of div() */
  result = (*arrfun[b]) (a, c);
  printf("result = %d",result);
}
