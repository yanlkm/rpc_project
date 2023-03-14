/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "phenixV1.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

struct utilisateur *
inscrire_1(struct utilisateur *argp, CLIENT *clnt)
{
	static struct utilisateur clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, INSCRIRE,
		(xdrproc_t) xdr_utilisateur, (caddr_t) argp,
		(xdrproc_t) xdr_utilisateur, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

struct partenaire *
creationpartenaire_1(struct partenaire *argp, CLIENT *clnt)
{
	static struct partenaire clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, CREATIONPARTENAIRE,
		(xdrproc_t) xdr_partenaire, (caddr_t) argp,
		(xdrproc_t) xdr_partenaire, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

struct partenaire *
recherche_1(struct utilisateur *argp, CLIENT *clnt)
{
	static struct partenaire clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, RECHERCHE,
		(xdrproc_t) xdr_utilisateur, (caddr_t) argp,
		(xdrproc_t) xdr_partenaire, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

struct commande *
achat_1(struct detail_commande *argp, CLIENT *clnt)
{
	static struct commande clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, ACHAT,
		(xdrproc_t) xdr_detail_commande, (caddr_t) argp,
		(xdrproc_t) xdr_commande, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

struct note *
notation_1(struct note *argp, CLIENT *clnt)
{
	static struct note clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, NOTATION,
		(xdrproc_t) xdr_note, (caddr_t) argp,
		(xdrproc_t) xdr_note, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

struct commande *
annulation_1(struct commande *argp, CLIENT *clnt)
{
	static struct commande clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, ANNULATION,
		(xdrproc_t) xdr_commande, (caddr_t) argp,
		(xdrproc_t) xdr_commande, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

struct commande *
reactivation_1(struct commande *argp, CLIENT *clnt)
{
	static struct commande clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, REACTIVATION,
		(xdrproc_t) xdr_commande, (caddr_t) argp,
		(xdrproc_t) xdr_commande, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

void *
historique_1(struct partenaire *argp, CLIENT *clnt)
{
	static char clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, HISTORIQUE,
		(xdrproc_t) xdr_partenaire, (caddr_t) argp,
		(xdrproc_t) xdr_void, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&clnt_res);
}

struct commande *
fincommande_1(int *argp, CLIENT *clnt)
{
	static struct commande clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, FINCOMMANDE,
		(xdrproc_t) xdr_int, (caddr_t) argp,
		(xdrproc_t) xdr_commande, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
supprimercompte_1(struct utilisateur *argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, SUPPRIMERCOMPTE,
		(xdrproc_t) xdr_utilisateur, (caddr_t) argp,
		(xdrproc_t) xdr_bool, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

struct partenaire *
deletecomment_1(struct partenaire *argp, CLIENT *clnt)
{
	static struct partenaire clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, DELETECOMMENT,
		(xdrproc_t) xdr_partenaire, (caddr_t) argp,
		(xdrproc_t) xdr_partenaire, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

struct partenaire *
modificationcoordonnees_1(struct partenaire *argp, CLIENT *clnt)
{
	static struct partenaire clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, MODIFICATIONCOORDONNEES,
		(xdrproc_t) xdr_partenaire, (caddr_t) argp,
		(xdrproc_t) xdr_partenaire, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}