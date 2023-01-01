#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
extern void registration(){
//	printf("bienvenu dans la page registration");
int n ,i,choix,a;


typedef	struct  adherents{
		char nom [20];
		char prenom[20];
		char identifiant[20];
		char adress[30];
		char type[30];
			
	}adherent;
adherent ad;
FILE *fp; 
fp = fopen("adherents.txt","a");
if(fp==NULL){
	printf("something went wrang\n");
	goto end;
} 
printf ("combien d'adherent voulez vous ajouter:\n");
scanf("%d",&n);
for(i=0;i<n;i++){
	fflush(stdin);
	printf("donner le nom de l adhrent:\n ");
	gets(ad.nom);
	fprintf(fp,"\n%s\t",ad.nom);
	printf("donner le prenom de l adhrent:\n ");
	gets(ad.prenom);
	fprintf(fp,"%s\t",ad.prenom);
//	printf("donner l identifiant de l adhrent:\n ");
//	gets(ad.identifiant);
 	srand(time(NULL)); 
	a=rand()%50;
	itoa(a,ad.identifiant,10);
	fprintf(fp,"%s\t",ad.identifiant);
		
	printf("donner l'adresse  de l adhrent:\n ");
	gets(ad.adress);
	fprintf(fp,"%s\t",ad.adress);
	
	printf("donner le choix du type:\n");
	printf("saisir 1 pour un etudiant\n");
	printf("saisir 2 pour un enseignant\n");
	printf("saisir 3 pour un visiteur\n");
	
	scanf("%d",&choix);
	
		switch(choix){
		case 1:
		strcpy(ad.type,"etud");
		fprintf(fp,"%s\t",ad.type);
		break;
		
		case 2 :
		strcpy(ad.type,"ensei");
		fprintf(fp,"%s\t",ad.type);
		break;
		
		case 3:
		strcpy(ad.type,"visit");
		fprintf(fp,"%s\t",ad.type);
		break;
	
}

printf("adherent %d ajouter avec succee",i+1);

}

	if (fp==NULL){
		end:	
			printf("you are to exit from due to file issue\n");
	}
	
	fclose(fp); 
}

