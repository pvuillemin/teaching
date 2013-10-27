input metauml;
beginfig(1);
	Class.C("intVector")
		("-m_size : int", "-data : int *")
		("+operator[](int) : int",
		 "+operator=(intVector &) : intVector",
  		  "+getSize() : int"
			);

	
	drawObject(C);
endfig;
end

