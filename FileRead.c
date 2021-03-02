#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct emp{
int empid;
char empname[10];
char cmpny[10];
};
typedef struct emp ll;
ll empl[10];
int i=0;
 main()
{
FILE *fp;
fp=fopen("employeedb","rb");
fseek(fp,0,SEEK_SET);
        for(i=0;i<10;i++)
        {
                fread(&empl[i],sizeof(empl[i]),1,fp);
                printf("%d\t",empl[i].empid);
                printf("%s\t",empl[i].empname);
                printf("%s\n",empl[i].cmpny);
        }
fclose(fp);
}