/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
*/

#include "phenixV1.h"

struct utilisateur *
inscrire_1_svc(struct utilisateur *argp, struct svc_req *rqstp)
{
	static struct utilisateur  result;
    strcpy(result.nom,argp->nom);
    strcpy(result.prenom,argp->prenom);
    strcpy(result.adresse,argp->adresse);
    strcpy(result.mail,argp->mail);
    result.etat_compte=argp->etat_compte;
    printf("client bien initialisé\n");;

    
	return &result;
}

struct partenaire *
creationpartenaire_1_svc(struct partenaire *argp, struct svc_req *rqstp)
{
	static struct partenaire  result;

	/*
	 * insert server code here
	 */
    strcpy(result.nom,argp->nom);
    strcpy(result.secteur,argp->secteur);
    strcpy(result.lieu,argp->lieu);
    result.notes=argp->notes;
    printf("partenaire créé !\n");
	return &result;
}

struct partenaire *
recherche_1_svc(struct utilisateur *argp, struct svc_req *rqstp)
{
	static struct partenaire  result;
    
	/*
	 * insert server code here
	 */
    strcpy(result.lieu,argp->adresse);
    strcpy(result.nom,"X"); 
    strcpy(result.secteur,"X"); 
    printf("Recherche de partenaire en cours !\n"); 

	return &result;
}

struct commande *
achat_1_svc(struct detail_commande *argp, struct svc_req *rqstp)
{
	static struct commande  result;
    
    result.detail=(*argp); 
    result.etat_commande=1;
    printf("Achat en cours !"); 
	/*
	 * insert server code here
	 */

	return &result;
}

struct note *
notation_1_svc(struct note *argp, struct svc_req *rqstp)
{
	static struct note  result;

	/*
	 * insert server code here
	 */
    
 strcpy(result.commentaire,argp->commentaire); 
 result.note=argp->note;
 result.commande_note=argp->commande_note; 
 printf("Notation faite !\n");

	return &result;
}

struct commande *
annulation_1_svc(struct commande *argp, struct svc_req *rqstp)
{
	static struct commande  result;

	/*
	 * insert server code here
	 */
   result=(*argp); 
   result.etat_commande=0;

	return &result;
}

struct commande *
reactivation_1_svc(struct commande *argp, struct svc_req *rqstp)
{
	static struct commande  result;

	/*
	 * insert server code here
	 */
    result=(*argp); 
   result.etat_commande=2;



	return &result;
}

void *
historique_1_svc(struct partenaire *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	return (void *) &result;
}

struct commande *
fincommande_1_svc(int *argp, struct svc_req *rqstp)
{
	static struct commande  result;

	/*
	 * insert server code here
	 */

	return &result;
}

bool_t *
supprimercompte_1_svc(struct utilisateur *argp, struct svc_req *rqstp)
{
	static bool_t  result;

	/*
	 * insert server code here
	 */

	return &result;
}

struct partenaire *
deletecomment_1_svc(struct partenaire *argp, struct svc_req *rqstp)
{
	static struct partenaire  result;

	/*
	 * insert server code here
	 */

	return &result;
}

struct partenaire *
modificationcoordonnees_1_svc(struct partenaire *argp, struct svc_req *rqstp)
{
	static struct partenaire  result;

	/*
	 * insert server code here
	 */

	return &result;
}
