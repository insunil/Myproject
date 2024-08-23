#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
     FILE *fp;
     fp=fopen(argv[1],"w");
   
     for(int i=0;i<strlen(argv[2]);i++)
     { 
      char c=argv[2][i];
        fputc(c,fp);
     }
     fclose(fp);
}
