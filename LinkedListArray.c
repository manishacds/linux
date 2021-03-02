#include<stdio.h>
#include<stdlib.h>

 

struct node{
    int data;
    struct node *link;
};

 

struct node *root;
int size,data,i;

 

int main(){
    //creation of array
    printf("enter the size of array\n");
    scanf("%d",&size);
    struct node *arr[size];
    
    for(int i=0;i<size;i++){
        arr[i]=createnodes();
    }
   
}

 

createnodes(){
    printf("Enter the size of linked list\n");
 scanf("%d",&size);
    
    for(i=0;i<size;i++){
        if(i==0){
            root =(struct node*)malloc(sizeof(struct node));
            printf("enter the data\n");
            scanf("%d",&data);
            root->data=data;
            root->link=NULL;
        }
        else
        {
            struct node *temp,*p;
            temp = (struct node*)malloc(sizeof(struct node));
            printf("enter the data\n");
            scanf("%d",&temp->data);
            temp->link=NULL;
            if(root==NULL){
                root=temp;
            }
            else{
                p=root;
                while(p->link!=NULL)
                {
                  p=p->link;
                }
                p->link=temp;
        }
    }
    }
    display();
    return;
}
display(){
    struct node *temp;
    temp=root;

 

    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
    return;
}
 