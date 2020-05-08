#pragma once
#ifndef igracka_h
#define igracka_h
class Igracka
{
protected:
	Dinstring naziv;
	Dinstring opsegGodina;
public:
	virtual void ispisi() = 0;
	Dinstring getNaziv()const
	{
		return naziv;
	}
};


#endif 
