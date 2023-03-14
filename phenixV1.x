

struct partenaire{
    char lieu[50];
    char nom[50];
    char secteur[50];
    struct note* notes;
};

struct utilisateur{
    char adresse[50];
    char nom[40];
    char prenom[40];
    char mail[40];
    bool etat_compte; /* toujours vrai sauf s'il le supprime*/
};



struct article {
    int num;
    int id_partenaire;
    char nom[40];
    int prix_unite;
};
/* Panier ou articles articles */

struct detail_commande {
    struct article article[20];
    int nb_arctile;
};
struct commande {
    int num;
    int prix;
    struct utilisateur client;
    struct detail_commande detail;
    bool etat_commande; 
};

struct note{
    int note;
    char commentaire[500];
    struct commande commande_note;
};



program PHENIX_PROG {
    
    version SCENARIO_1 {
        struct utilisateur INSCRIRE(struct utilisateur)=1;
        struct partenaire CREATIONPARTENAIRE(struct partenaire)=2;  
        struct partenaire RECHERCHE(struct utilisateur)=3;
        struct commande ACHAT(struct detail_commande)=4; /* pas sûr car on prend en compte le fait qu'il y ait une commande en cours*/
        struct note NOTATION(struct note)=5; 
        struct commande ANNULATION(struct commande)=6;
        struct commande REACTIVATION(struct commande)=7; 
        void HISTORIQUE(struct partenaire)=8;
        struct commande FINCOMMANDE(int)=9; 
        bool SUPPRIMERCOMPTE(struct utilisateur)=10; 
        struct partenaire DELETECOMMENT(struct partenaire)=11;
        struct partenaire MODIFICATIONCOORDONNEES(struct partenaire)=12;


    }=1;
}=0x20000001;

