input metauml;
beginfig(1);
	Class.Vehicule("Vehicule")
		("-m_etat : int", 
		 "-m_couleur : int", 
		 "-m_prix : int")
		("+getEtat() : int", 
		 "+setEtat(int etat) : void",
		 "+getCouleur() : int", 
		 "+setCouleur(int fuel) : void",
  		 "+getPrix() : int", 
		 "+setPrix(int fuel) : void",
  		 "+description() : void ");

	Class.Velo("Velo")
		("-m_antivol : bool")
		("+aUnAntivol() : bool",
		"+aUnAntivol(bool antivol) : void");
			
	Class.Voiture("Voiture")
		("-m_fuel : int")
		("+getFuel() : int",
		 "+setFuel(int fuel) : void");

	leftToRight(20)(Velo, Voiture);
	topToBottom(20)(Vehicule, Velo);

	drawObjects(Vehicule, Velo, Voiture);
	
	link(inheritance)(Voiture.n -- Vehicule.s);
	link(inheritance)(Velo.n -- Vehicule.s);
endfig;
end

