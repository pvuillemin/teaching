input metauml;
beginfig(1);
	Class.C("doubleVector")
		("-m_size : int", "-data : double *")
		("+operator[](int) : double",
		 "+operator=(doubleVector &) : doubleVector");

	
	drawObject(C);
endfig;
end

