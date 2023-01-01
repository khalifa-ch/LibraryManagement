#include<stdio.h>
#include<string.h>
extern void issued(char *ptr)
{
	int l,i,j,id;
	char erp[12],str[10000],word[10],ch,ch1,*tmp;
	FILE *fp,*fp1,*fp2;
	strcpy(erp,ptr);
	puts(erp);
	l=strlen(erp);
	fp=fopen("documents.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	printf("\ndonner le code du document que vous voulez emprunter:\t");
	scanf("%d",&id);
	fp1=fopen("documents.txt","r");
	do{ 
	
	itoa(id,word,10);
	i=0;
	do{
		ch1=fgetc(fp1); 
		str[i]=ch1;
		i++;
		
	}while(str[i]!='\n');
	tmp=strstr(str,word);
	if(tmp!=NULL)
	{
		printf("le code de document est correct:");
		fp2=fopen("documentsEmpruntés.txt","a");
		fprintf(fp2,"\n%s\t",erp);
		fprintf(fp2,"%s\t",word);
		fclose(fp2);
		printf("\ndocument emprunté ");
		
	}
	else
		printf("\nle code de document est incorrect:");
	printf("\ndonner le code du document que vous voulez emprunter\t:");
	scanf("%d",&id);
   }while(id!=0);
	fclose(fp);
	
}
