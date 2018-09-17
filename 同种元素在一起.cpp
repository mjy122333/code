#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
typedef char Element;
typedef struct{
  Element a[20];
  int listsize;
  int listlength;
}slist;

int Initlist(slist &la);
int trans(slist &la);
void listdelete(slist &la,int i,char &e);
void listinsert(slist &la,int n,char e);
int main()
{  slist la;
   int n,i,j;
   printf("输入字符数（a,b组成）");
   cin>>n;
    Initlist(la);
    printf("输入字符");
    for(i=0;i<n;i++)
        cin>>la.a[i];
   la.listlength=n;
  trans(la);
  for(j=0;j<la.listlength;j++)
        printf("%c",la.a[j]);
}
 int Initlist(slist &la)
{
    la.listsize=20;
    la.listlength=0;
}
int trans(slist &la)
{
    int k=la.listlength-1;
    int i=0,count=0;
    char x;
    while(i<=k&&count<=(k+1))
    {
        if(la.a[i]=='a')
        {i++;
            continue;}
        else{
            listdelete(la,i,x);
            listinsert(la,k,x);
            count++;

        }
    }

}
void listdelete(slist &la,int i,char &e)
{   int j;
    e=la.a[i];

    for(j=i;j<la.listlength-1;j++)
        la.a[j]=la.a[j+1];

}
void listinsert(slist &la,int i,char e)
{
    la.a[i]='b';
}
