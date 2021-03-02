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
int i,flag=0,k=-1;
main()
{
FILE *fp;
fp=fopen("employeedb","r+b");
int search;
printf("enter emp id to update\n");
scanf("%d",&search);
fseek(fp,0,SEEK_SET);
        for(i=0;i<10;i++)
        {
         fread(&em[i],sizeof(em[i]),1,fp);
         if(search==em[i].empid)
           {
                printf("empl is found\n");
                printf("enter the name to be updated\n");
                scanf("%s",em[i].empname);
                printf("enter the cmpny\n");
                scanf("%s",em[i].cmpny);
                fseek(fp,sizeof(em[i])*(i),SEEK_SET);
                fwrite(&em[i],sizeof(em[i]),1,fp);
                break;
          }
 
        }
        printf("updated empl name is %s, and cmpny name is %s\n",em[i].empname,e
fclose(fp);
}