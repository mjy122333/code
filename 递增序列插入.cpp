#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#define maxsize 20
typedef int Element;
typedef struct{
  Element a[maxsize];
  int listsize;
  int listlength;
}slist;
int insert_(slist &la,int e,int n);
int Initlist(slist &la);
int main()
{  slist la;
   int n,i,k;
     printf("请输入要插入的值");
   scanf("%d",&k);
   printf("输入la中数组的长度n");
   scanf("%d",&n);

   Initlist(la);
   la.listlength=n;
   printf("输入la中数值(按照非递减有序排列)");
   for(i=0;i<n;i++)
   scanf("%d",&la.a[i]);

   insert_(la,k,n);

}
int Initlist(slist &la)
{
    la.listsize=maxsize;
    la.listlength=0;
}
int insert_(slist &la,int e,int n)
{   int i,m;
    for(i=0;i<n;i++)
    {   if(e<=la.a[0])
    {
        for(i=n-1;i>=0;i--)
            la.a[i+1]=la.a[i];
        la.a[0]=e;
        break;
    }
    if(e>=la.a[n-1])
    {
       la.a[n]=e;
        break;
    }
        if(e>=la.a[i]&&e<=la.a[i+1])
        {    m=i;
            for(i=n-1;i>m;i--)
                la.a[i+1]=la.a[i];
               la.a[m+1]=e;
               break;
        }
    }
 printf("最后表的顺序是");
   for(i=0;i<n+1;i++)
    printf("%d ",la.a[i]);
    return 0;

}
