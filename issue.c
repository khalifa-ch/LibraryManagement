#include<stdio.h>
#include"issued.c"
extern void issued(char *ptr);
extern void issue(){
//	printf("bienvenu dans la page emprunt");
	char bug[4],ch,word[12],str[10000],*ptr;
	int i;
	FILE *fp;
	fp=fopen("adherents.txt","r");
	gets(bug);
	printf("donner votre identifiant:\n");
	gets(word); 
	i=0;
	do{
		ch=fgetc(fp);
		str[i]=ch;
		i++;
		
	}while(str[i]!='\n');
	ptr=strstr(str,word);
	if(ptr!=NULL)
	{
		printf("vous etes admissible de emettre un document\t:");
		issued(word);
		
	}
	else
		printf("vous n'etes pas admissible d emettre a document");
	fclose(fp);
}
