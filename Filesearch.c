#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct emp{
int empid;
char empname[10];
char cmpny[10];
};
typedef struct emp ll;
ll em[10];
int i,flag=0;
main()
{
FILE *fp;
fp=fopen("employeedb","rb");
int search;
printf("enter the emp id to search\n");
scanf("%d",&search);
fseek(fp,0,SEEK_SET);
        for(i=0;i<10;i++)
        {
                fread(&em[i],sizeof(em[i]),1,fp);
                if((em[i].empid)==search)
                  {
                        flag=1;
                        break;
                  }
        }
        if(flag==1)
        {
        printf("empl id is found,emp name is %s\n",em[i].empname);
        }
        else{
        printf("empl name not found\n");
        }
fclose(fp);
 
}
