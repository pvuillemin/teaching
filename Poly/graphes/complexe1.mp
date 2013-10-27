input metauml;
beginfig(1);
	Note.nA("Nom de la classe");
	Note.nB("Proprietes");
	Note.nC("Methodes");

	Class.C("Complexe")
		("+reel : double", "+imag : double")
		("+module(): double");

	leftToRight.top(20)(C, nA);
	topToBottom.left(20)(nA, nB, nC);


	drawObject(C);
	drawObject(nA);
	drawObject(nB);
	drawObject(nC);
			
	
	clink(dashedLink)(C.namePict, nA);
	clink(dashedLink)(C.attributeStack.pict[0], nB);
	clink(dashedLink)(C.methodStack.pict[0], nC);
endfig;
end

