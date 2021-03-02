/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<unistd.h>
int main(){
    int pipe1[2],pipe2[2],pipe3[2];
    int returnstatus1,returnstatus2,returnstatus3;
    int pid;
    int pipe1wmessage=4;
    int pipe2wmessage=6;
    int sum;
    int readmessage1,readmessage2,readmessage3;
    returnstatus1=pipe(pipe1);
    
    if(returnstatus1==-1){
        printf("unable to create pipe1");
        return 1;
    }
    returnstatus2=pipe(pipe2);
   if(returnstatus2==-1){
       printf("unable to create pipe 2");
       return 1;
   }
   returnstatus3=pipe(pipe3);
   if(returnstatus3==-1){
       printf("unable to create pipe 2");
       return 1;
   }
   pid=fork();
   if(pid!=0)//parent//
   {
       write( pipe1[1],&pipe1wmessage,sizeof(pipe1wmessage));
       write(pipe2[1],&pipe2wmessage,sizeof(pipe2wmessage));
       read(pipe3[0],&readmessage3,sizeof(readmessage3));
       printf("sum is %d",readmessage3);
       
   }
   else
   {
       read(pipe1[0],&readmessage1,sizeof(readmessage1));
       read(pipe2[0],&readmessage2,sizeof(readmessage2));
       sum=readmessage1+readmessage2;
       write(pipe3[1],&sum,sizeof(sum));
       
   }
   return 0;
   }
   
  