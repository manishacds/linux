#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node *link;
};
typedef struct node ll;
ll* first=NULL;
int stack[10];
int choice=0,data,top=-1,size,v;
int main()
{
while(1)
        {       printf("\n1.push\n2.strele\n3.altern\n4.stackele\n");
                printf("enter the choice\n");
                scanf("%d",&choice);
 
         switch(choice)
                {
                 case 1:push();
                 break;
                 case 2:strele();
                 break;
                 case 3:altern();
                 break;
                 case 4:stackele();
                 break;
                 default:printf("wrong choice\n");
                 exit(0);
  }
        }
}
push()
{ ll *temp;
 if(first==NULL)
      {
        first=(ll*)malloc(sizeof(ll));
        printf("enter data\n");
        scanf("%d",&first->data);
        first->link=NULL;
      }
  else
        {
        temp=(ll*)malloc(sizeof(ll));
        printf("enter data\n");
        scanf("%d",&temp->data);
        temp->link=first;
        first=temp;
        }
 
}
strele()
{ll *temp;
 if(first==NULL)
  {
        printf("ll is empty\n");
  }
else
 {
        temp=first;
        while(temp!=NULL)
        {
                printf("[%d  %u]->\t",temp->data,temp->link);
                temp=temp->link;
 
        }
 }
}
 
altern()
{       ll *temp;
        temp=(ll*)malloc(sizeof(ll));
        int i=0;
        if(first==NULL)
         {
             printf("LL is empty\n");
         }
        else
        {
                temp=first;
                while(temp!=NULL)
{
                        if(i%2==0)
                        { top++;
                          stack[top]=temp->data;
                         }
                        temp=temp->link;
 
                 i++;
                }
        }
 
}
stackele()
{
 if(top==-1)
  {
         printf("stack is empty\n");
 }
 else{
   printf("stack ele r\n");
   for(v=0;v<=top;v++)
        {  printf("%d\t",stack[v]);
        }
 
  }
        top=-1;


