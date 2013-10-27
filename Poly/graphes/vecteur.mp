input metauml;
beginfig(1);
	Class.A("Vecteur")
		("+dimension : unsigned int", "+coordonnees : double *")
		("+norme(): double");

	A.nw = (0, 0); % optional, implied
	drawObject(A);
endfig;
end

