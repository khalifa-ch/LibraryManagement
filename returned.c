#include<stdio.h>
#include<string.h> 	
extern void returned(char *ptr) {
	int l,i,j,id;
	char erp[10],str [10000],word[10],*tmp,ch,ch1;
	FILE *fp,*fp1;
	strcpy(erp,ptr);
	l=strlen(erp);
	fp=fopen("documentsEmpruntés.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	printf("\nsaisir le code du document :\t");
	scanf("%d",&id);
	fp1=fopen("documentsEmpruntés.txt","r");
	do{

	itoa(id,word,10);
	j=0;
	do{
	ch=fgetc(fp1);
	str[j]=ch; 
	j++;	
 }while(str[j]!='\n');
 tmp=strstr(str,word);
 if(tmp!=NULL)
 	printf("\n*** document rendu avec succes *** \n");
 else
 	printf("document n'est pas present!!!! ");
 
printf("\navez vous un autre document a rendre sinon cliquez vous sur 0:\t");
scanf("%d",&id); 	
}while(id!=0);	

fclose(fp1);
}
