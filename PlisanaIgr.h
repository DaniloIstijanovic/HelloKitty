#pragma once
#ifndef Plisana_h
#define Plisana_h
class plisanaIgr : public Igracka
{
private:
	Vrsta vrsta;
public:
	plisanaIgr()
	{
		vrsta = Maca;
		naziv = "Hello Kitty";
		opsegGodina = "2-7";
	}
	plisanaIgr(Dinstring a, Dinstring b, Vrsta c)
	{
		vrsta = c;
		naziv = a;
		opsegGodina = b;
	}
	void ispisi()
	{
		cout << "Plisana igracka:" << endl
			<< "Naziv: " << naziv << endl << "Vrsta: ";
		if (vrsta == Medo)
			cout << "Medved" << endl;
		else if (vrsta == Maca)
			cout << "Macka" << endl;
		else if (vrsta == Zeko)
			cout << "Zec" << endl;
		else
			cout << "Pas" << endl;
		cout << "Opseg godina: " << opsegGodina << endl
			
	}
};


#endif 