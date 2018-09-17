#include <iostream>                //该程序实现两个表的并集
#include<stdio.h>
#include<stdlib.h>
#define maxsize 20
typedef int Element;
typedef struct{
  Element a[maxsize];
  int listsize;
  int listlength;
}slist;


int Initlist(slist &la);
void Intersect(slist &la,slist &lb,int e);
void Listdelete(slist &la,int i,Element e);
int LocateElem(slist lb,Element e);
int GetItem(slist la,int i,Element &e);
int main()
{  int e,k,i;
    slist la,lb,lc;
    Initlist(la);
    Initlist(lb);
    Initlist(lc);
    printf("输入la中数组的值(为方便我设置成了6个,下面的lb也是)");
    for(k=0;k<6;k++)
    scanf("%d",&la.a[k]);
    for(k=0;k<6;k++)
        lc.a[k]=la.a[k];
    printf("输入lb中数组的值");
    for(k=0;k<6;k++)
    scanf("%d",&lb.a[k]);
    la.listlength=6;lb.listlength=6;lc.listlength=6;
    Intersect(lc,lb,e);

}
int Initlist(slist &la)
{
    la.listsize=maxsize;
    la.listlength=0;
}                           //创建表
void Intersect(slist &lc,slist &lb,Element e)
{    int count=0;
    int i=1,b=lc.listlength;
    while(i<=lc.listlength&&count<=6){e=lc.a[i-1];
        GetItem (lc,i,e);
        if(!LocateElem(lb,e))
           {Listdelete(lc,i,e);
           b--;
           count++;
           continue;}
        i++;}
           printf("并集lc是");
    for(i=0;i<b;i++)
    { printf("%d ",lc.a[i]);}


}
void Listdelete(slist &la,int i,Element e)
{   int j;
    e=la.a[i-1];
    for(j=i;j<la.listlength;j++)
        la.a[j-1]=la.a[j];
    la.listlength--;
}
int LocateElem(slist lb,Element e)
{   int i;
    for(i=1;i<=lb.listlength;i++)
        if(lb.a[i-1]==e)return i;
    return 0;
}
int GetItem(slist la,int i,Element &e)
{
    e=la.a[i-1];
}

