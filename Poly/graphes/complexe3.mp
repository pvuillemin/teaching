input metauml;
beginfig(1);
	Class.A("Complexe")
		("+rho : double", "+theta : double")
		("+module() : double", 
		 "+getReel() : double",
		 "+getImag() : double",
		 "+setReel(double reel) : void",
		 "+setImag(double imag) : void",
		 "+module() : double");

	A.nw = (0, 0); % optional, implied
	drawObject(A);
endfig;
end

