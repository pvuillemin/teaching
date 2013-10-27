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
		 "+setPrix(int prix) : void",
  		 "+description() : void ");

	Class.Velo("Velo")
		("-m_antivol : bool")
		("+aUnAntivol() : bool",
		"+aUnAntivol(bool antivol) : void");
			
	Class.Voiture("Voiture")
		("-m_fuel : int")
		("+getFuel() : int",
		 "+setFuel(int fuel) : void");
	Class.VehiculeVolant("VehiculeVolant")
		("-m_MaxAltitude : int")
		("+getMaxAltitude() : int",
		"+setMaxAltitude(int altitude) : void");
			
	Class.VoitureVolante("VoitureVolante")(" ")(" ");
	

	leftToRight(20)(Velo, VehiculeVolant, Voiture);
	topToBottom(20)(Vehicule, VehiculeVolant, VoitureVolante);
	

	drawObjects(Vehicule, Velo, Voiture, VoitureVolante, VehiculeVolant);
	
	link(inheritance)(Voiture.n -- Vehicule.s);
	link(inheritance)(Velo.n -- Vehicule.s);
	link(inheritance)(VehiculeVolant.n -- Vehicule.s);
	link(inheritance)(VoitureVolante.n -- Voiture.s);
	link(inheritance)(VoitureVolante.n -- VehiculeVolant.s);
endfig;
end

