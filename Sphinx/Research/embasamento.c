#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int verify(char *one,char *two){
  int i = 0;
  int tamanho = strlen(two);
  for(i=0;i<tamanho;i++){
     if(one[i]!=two[i]){
       return 0;
     }
  }
        return 1;


}
/*
void changeline(char *modline){
   int tamanho = strlen(modline);
   int i = 0,contador,antiga,firstpart;

   char newstring[128];
   char *mudei = " mudei";
   for(i=0;modline[i]!=' ';i++){
       newstring[i]=modline[i];
   }
   contador = i;
   firstpart = i;
   for(i=contador+1;modline[i]!=' ';i++);

   antiga = i-contador;
   printf("antigatamanho--->%d\n",antiga);
   for(i=0;i<strlen(mudei);i++){
       newstring[contador]=mudei[i];
       contador++;
   }
   i = firstpart+antiga;
   for(i;i<tamanho;i++){
       newstring[contador]=modline[i];
       contador++;
   }

   printf("I--->%d\n",i);
   printf("newstring-->%s\n",newstring);
}
*/


int main(int argc, char *argv[]){
    FILE  *fp, *newfile;
    char *line = NULL;
    size_t len = 0;
        ssize_t read;
        int status;

   char cwd[1024];
   char add2[1024];
   getcwd(add2, sizeof(cwd));
  if (getcwd(cwd, sizeof(cwd)) != NULL)
        fprintf(stdout, "Current working dir: %s\n", cwd);
   else
        perror("getcwd() error");

    printf("%s\n",add2);
    strcat(add2,"/LUT.sp");
    printf("%s\n",add2);
    fp = fopen(add2, "r");
    printf("%s\n",argv[1]);
    strcat(cwd,"/");
    strcat(cwd,argv[1]);
    newfile = fopen(cwd,"w");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    char *quebrado;
        printf("ARGCC----->%d\n",argc);
        int  j = 2;
    while ((read = getline(&line, &len, fp)) != -1) {

                if(line[1]!='G' && verify(line,"XSRamCell")== 1){
                        printf("ARGV----------->%s\n",argv[j]);
                        printf("ARGV----------->%c\n",argv[j]);
                        if(strcmp("0", argv[j])==0){
                           quebrado = strtok (line," ,.-");
                           printf ("%s ",quebrado);
                           fprintf(newfile,"%s ",quebrado);
                           quebrado = strtok (NULL, " ");

                           printf ("%s ","VSS");
                           fprintf(newfile,"%s ","VSS");
                           quebrado = strtok (NULL, " ");

                           printf ("%s ",quebrado);
                           fprintf(newfile,"%s ",quebrado);
                           quebrado = strtok (NULL, " ");

                           printf ("%s ","net_1");
                           fprintf(newfile,"%s ","net_1");
                           quebrado = strtok (NULL, " ");

                           while(quebrado!=NULL){
                                        printf ("%s ",quebrado);
                                        fprintf(newfile,"%s ",quebrado);
                                        quebrado = strtok (NULL, " ");
                           }
                        }
                        else{
                           quebrado = strtok (line," ,.-");
                           printf ("%s ",quebrado);
                           fprintf(newfile,"%s ",quebrado);
                           quebrado = strtok (NULL, " ");

                           printf ("%s ","net_1");
                           fprintf(newfile,"%s ","net_1");
                           quebrado = strtok (NULL, " ");

                           printf ("%s ",quebrado);
                           fprintf(newfile,"%s ",quebrado);
                           quebrado = strtok (NULL, " ");

                           printf ("%s ","VSS");
                           fprintf(newfile,"%s ","VSS");
                           quebrado = strtok (NULL, " ");

                           while(quebrado!=NULL){
                                        printf ("%s ",quebrado);
                                        fprintf(newfile,"%s ",quebrado);
                                        quebrado = strtok (NULL, " ");
                           }
                        }
                        j++;
        }

                else if(line[1]!='G'){
                        fprintf(newfile,"%s ",line);
                }
     }

    fclose(fp);
        fclose(newfile);
    if (line)
        free(line);
    exit(EXIT_SUCCESS);
}
