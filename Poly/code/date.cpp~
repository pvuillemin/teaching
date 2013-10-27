#include "Date.h"

unsigned int Date::baseNbJours = 1900;

Date::Date(int _jour, int _mois, int _annee)
{
	assert(_jour >= 1);
	assert(_jour <= 31);
	assert(_mois >= 1);
	assert(_mois <= 12);
	assert(_annee >= baseNbJours);
	int i;
	
	nbJours = 0;
	//On commence par convertir les annees
	for(i = baseNbJours; i < _annee; i++)
		if estBissextile(i)
			nbJours += 366
		else
			nbJours += 365;
	
	//On convertit ensuite les mois
	for(i = 0; i < _mois; i++)
		nbJours += listeMois[i].nbJours;

	//Puis on ajoute enfin les jours
	nbJours += _jour;
	
		
}


Date::~Date()
{
}


Date::ToJMA(unsigned int &jour, unsigned int mois, unsigned int &annee)
{
	annees_ecoulees = 0;
	mois_ecoules = 0;
	jours_ecoules = 0;
	
	while (nbJours > 365)
		if estBissextile(annees_ecoulees)
			nbJours -= 366
		else
			nbJours -= 365;
		annees_ecoulees++;
	
	mois_ecoules = 0;
	while (nbJours > 30)
		nbJours -= listeMois[mois_ecoules];
		mois_ecoules++;
	
	jour = jour_ecoules;
	mois = mois_ecoules;
	annee = annees_ecoulees + baseNbJours

	assert(jour >= 1);
	assert(jour <= 31);
	assert(mois >= 1);
	assert(mois <= 12);
	assert(annee >= baseNbJours);			
}

bool Date::estBissextile()
{
	if (annee % 4 == 0)
		return true;
	else
		return false;
}

Date::ajoute(Date date)
{
	//On commence par sommer directement,
	//et on propage les retenues apres
	int annee_resultat = annee + date.annee;
	unsigned int mois_resultat = mois + date.mois;
	unsigned int jour_resultat = jour + date.jour;
	
	//On commence par le jour
	mois_resultat += jour_resultat / 7;
	
}

Date::affiche()
{
	cout << jour << " " << listeMois[mois] << " " << annee;
}
