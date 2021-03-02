    #include<stdio.h>
#include<stdlib.h>
int l,stack[5],queue[5],top=0,f=-1,r=-1,choice=0,size=5,n,j;
int main()
{
 while(choice!=4)
        {printf("\n1.push\n2.stackele\n3.copy\n4.queele\n");
         printf("enter the choice\n");
         scanf("%d",&choice);
         switch(choice)
                {
                  case 1:push();
                  break;
                  case 3:copy();
                  break;
                  case 2:stackele();
                  break;
                  case 4:queele();
                  break;             
   default:printf("entered wrong choice\n");
                  exit(0);
                }
        }
}
 
void push()
{
  if(top==size)
    {
        printf("stack is full cannot push\n");
    }
  else
    {
        printf("enter the ele to be inserted\n");
        scanf("%d",&n);
        stack[top]=n;
        top++;
    }
}
void stackele()
{
        printf("pushed ele in the stack are\n");
        for(j=0;j<top;j++)
        {
        printf("%d\t",stack[j]);
        }
}
void copy()
{
 
        while(top>=0)
                {
                       if(r==f)
                        {
                                r++;
                        }
                        queue[r]=stack[top];
                        top--;
                        ++r;
                }
 
 }
void queele()
  {
    for(l=1;l<r;l++)
        {printf("%d\t",queue[l]);
        }
  }