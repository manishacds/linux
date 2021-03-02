#include<stdio.h>
#include<stdlib.h>

main()
{
  FILE *fp1,*fp2; 
  char a[100];
  fp1=fopen("test.txt","w+");
  printf("enter smthng\n");
  scanf("%s",a);
  fwrite(&a,sizeof(a),1,fp1);
  fclose(fp1);
  fp2=fopen("test.txt","rb");
  fseek(fp2,0,SEEK_SET);
  fread(&a,sizeof(a),1,fp2);
  printf("%s",a);
  fclose(fp2);
}

  