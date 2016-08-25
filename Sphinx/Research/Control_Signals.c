
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>



int main(int argc, char *argv[]){

    int i = 1, j = 0;
    int currentnumber;
	int result;
	int t=100;
	int getchange;
	
	char cwd[1024];
	
	FILE  *newfile;
	
	if (getcwd(cwd, sizeof(cwd)) != NULL)
        fprintf(stdout, "Current working dir: %s\n", cwd);
    else
        perror("getcwd() error");
		
	strcat(cwd,"/");
    strcat(cwd,"resultfile");
    newfile = fopen(cwd,"w");
	if (newfile == NULL)
        perror("failed to open file\n");
		
		
	for(j=0;j<8;j++){
		fprintf(newfile,"Vtest-%d- NAMEOFNODE VSS PWL( ",j);
		getchange=0;
		currentnumber = (int)strtol(argv[1], NULL, 16);
					currentnumber = currentnumber >> j;
					result = currentnumber & 1;
					//printf("%d",result);
					if(result==1){
						fprintf(newfile,"%d%s",0," 1.2 ");
						getchange = 1;
					}
					if(result==0){
						fprintf(newfile,"%d%s",0," 0 ");
						getchange = 0;
					}
			for(i=2;i<argc;i++){
					currentnumber = (int)strtol(argv[i], NULL, 16);
					currentnumber = currentnumber >> j;
					result = currentnumber & 1;
					//printf("%d",result);
					if(result==1){
						if(getchange==0){
							fprintf(newfile,"%d%s",(t*(i-1)-1)," 0 ");
						}
						fprintf(newfile,"%d%s",t*(i-1)," 1.2 ");
						getchange = 1;
					}
					if(result==0){
						if(getchange==1){
							fprintf(newfile,"%d%s",(t*(i-1)-1)," 1.2 ");
						}
						fprintf(newfile,"%d%s",t*(i-1)," 0 ");
						getchange = 0;
					}
			}
			fprintf(newfile,")\n");
	}
	fclose(newfile);
	
}

