#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct emp{
    int empid;
    char empname[10];
    char cmpny[10];
};
typedef struct emp ll;
ll emp[10];
int i;
main()
{   FILE *fp;
    fp=fopen("employeedb","wb");
    for(i=0;i<10;i++)
    {   printf("enter the empid\n");
        scanf("%d",&(emp[i].empid));
        printf("enter the empname\n");
        scanf("%s",emp[i].empname);
        printf("enter the cmpny\n");
        scanf("%s",emp[i].cmpny);
        fwrite(&emp[i],sizeof(emp[i]),1,fp);
    }
    fclose(fp);
}