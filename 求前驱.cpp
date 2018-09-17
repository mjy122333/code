#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define maxsize 20
typedef int Element;
typedef struct{
  Element a[maxsize];
  int listsize;
  int listlength;
}slist;
int Initlist(slist &la);
int PriorElem(slist la,int e);
int main()
{   int e,n,i,k=0;
    slist la;
    Initlist(la);
    printf("输入数组长度");
    scanf("%d",&n);
    printf("输入数组元素");

    for(i=0;i<n;i++)
        scanf("%d",&la.a[i]);
    la.listlength=5;
    printf("输入指定的元素");
    scanf("%d",&e);
    k=PriorElem(la,e);
    if(k==1)
        printf("不存在该元素");
    return 0;
}
int Initlist(slist &la)
{
    la.listsize=maxsize;
    la.listlength=0;
}
int PriorElem(slist la,int e)
{     int i;

    for(i=1;i<=la.listlength;i++)
        {if(la.a[i-1]==e)
        {   if(i==1) printf("该元素没有前驱元素") ;
            else printf("该元素的前驱元素是%d",la.a[i-2]);
            return 0;
         }

      }
    return 1;


}



