#include<stdio.h>
int main()
{
	int mail(int n);
	int n,m;
    printf("请输入信的总数：");
    scanf("%d",&n);
    m=mail(n);
    printf("%d",m);
	return 0;
}


int mail(int n)
{
  if (n==1) return 0;
  if (n==2) return 1;
  if (n>=3)
  {
  	int m;
  	m=(mail(n-1)+mail(n-2))*(n-1);
  	return m;
  }
}
