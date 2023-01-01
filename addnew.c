#include<stdio.h>
#include <stdlib.h>
#include <time.h>
extern void addnew(){
//	printf("bienvenu dans la page addnew");
typedef	struct  documents{
		char titre [20];
		char localisation[20];
		char code[20];
		int nb_exp;
		char type[20];
			
	}document;
document dc;
int n ,i,choix,a;
FILE *fp; 
fp = fopen("documents.txt","a");
if(fp==NULL){
	printf("something went wrang\n");
	goto end;
}

printf ("combien de documents voulez vous ajouter:\n");
scanf("%d",&n);
	for(i=0;i<n;i++){
		
		fflush(stdin);
		printf("donner le titre de document:\n");
		gets(dc.titre);
		fprintf(fp,"\n%s\t",dc.titre);
		printf("donner la localisation de document:\n");
		gets(dc.localisation);
		fprintf(fp,"%s\t",dc.localisation);
		
		srand(time(NULL)); 
		a=rand()%100;
		itoa(a,dc.code,10);
		fprintf(fp,"%s\t",dc.code);
		
		printf("donner le nombre d'exemplaires de document:\n");
		scanf("%d",&dc.nb_exp);
		fprintf(fp,"%d\t",dc.nb_exp);
		
		printf("donner le choix du type:\n");
		printf("saisir 1 pour un livre\n");
		printf("saisir 2 pour une magasine\n");
		printf("saisir 3 pour un article\n");
		scanf("%d",&choix);
	
		switch(choix){
		case 1:
		strcpy(dc.type,"livre");
		fprintf(fp,"%s\t",dc.type);
		break;
		
		case 2 :
		strcpy(dc.type,"magasine");
		fprintf(fp,"%s\t",dc.type);
		break;
		
		case 3:
		strcpy(dc.type,"article");
		fprintf(fp,"%s\t",dc.type);
		break;
	
}
printf("document %d ajouter avec succee",i+1);
		
}

	if (fp==NULL){
		end:	
			printf("you are to exit from due to file issue\n");
	}
	
	fclose(fp); 

}
