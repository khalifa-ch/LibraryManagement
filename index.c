#include<stdio.h>
#include<conio.h>
#include<conio.h>

#include"registration.c"
#include"issue.c"
#include"returning.c"
#include"addnew.c"
 

extern void registration();
extern void issue();
extern void returning();
extern void addnew();



void main(){
	int choix;
	char username[15];
	char password[15];
	printf("***saisir votre identifiant ****:\n");
	scanf("%s",&username);
	printf("***saisir votre mot de passe***:\n");
	scanf("%s",&password);
	
	if(strcmp(username,"khalifa")==0){
		if(strcmp(password,"chelbi")==0){
			printf("bienvenu monsieur khalifa chelbi \n");
				do{
	printf("choisir votre operation :\n");
	printf("cliquer sur 1 pour ajouter un adherent \n");
	printf("appuyez sur 2 pour ajouter un document\n");
	printf ("appuyez sur 3 pour emettre un document\n");
	printf("appuyez sur 4 pour retourner un document\n");
	printf("appuyez sur 0 pour quitter\n");
	scanf("%d",&choix);
	switch(choix){
		case 1:
		registration();
		printf("\n\n");
		break;
		
		case 2 :
		addnew();
		printf("\n\n");
		break;
		
		case 3:
		issue();
		printf("\n\n");
		break;
		
		case 4:
		returning();
		printf("\n\n");
		break;
		
		default:
			printf("please enter a valid option\n");
			break;	
	}
	}while(choix != 0);
	printf(" u are exit\n");
			
		}
	else{
		printf("!!!!!\tmot de passe incorrect\t!!!!!!\n");
	}
	}
	else{
		printf("!!!!!\temail incorrect!!!!!!!!");
	}
	
	
	 getch();
	
	
} 
