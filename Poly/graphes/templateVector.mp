input metauml;
beginfig(1);
	Class.intVect("Vector")
		("-m_size : int", "-data : T *")
		("+operator[](int) : T",
		 "+operator=(Vector &) : Vector",
  		 "+getSize() : int"
			);
	ClassTemplate.Tint("T", "size : int")(intVect);
	
	Class.doubleVect("Vector")
		("-m_size : int", "-data : T *")
		("+operator[](int) : T",
		 "+operator=(Vector &) : Vector",
		 "+getSize() :int");
	ClassTemplate.Tdouble("T", "size : double")(doubleVect);

	
	leftToRight(30)(intVect, doubleVect);
	drawObjects(intVect, Tint);
	drawObjects(doubleVect, Tdouble);
endfig;
end

