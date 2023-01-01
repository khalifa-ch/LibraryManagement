#include<stdio.h>
#include"returned.c"
extern void returned (char *ptr);
extern void returning(){

char bug[2],ch,word[12],str[10000],*tmp;
int i,j;
FILE * fp;
printf("saisir l'id de l adherent :\t ");
gets(bug);
gets(word);
fp=fopen("adherents.txt","r");
i=0;
do{
	ch=fgetc(fp);
	str[i]=ch; 
	i++;	
 }while(str[i]!='\n');	
 tmp=strstr(str,word);
 if(tmp!=NULL)
 {
 	printf("vous etes admissible de rendre un document\t!!");
 	returned(word);
 }
 else 
 	printf("vous n'etes pas admissible de rendre un document!!! :");
fclose(fp); 
 
 
 
}


