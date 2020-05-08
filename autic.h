#pragma once
#ifndef Autic_h
#define Autic_h
class Autic : public Igracka
{
private:
	bool naStruju;
public:
	Autic()
	{
		naziv = "Fast boi";
		opsegGodina = "4 - 11";
		naStruju = false;
	}
	Autic(Dinstring a, Dinstring b, bool c)
	{
		naziv = a;
		opsegodina = b;
		nastruju = c;
	}
	void ispisi()
	{
		cout << "autic:" << endl
			<< "Naziv: " << naziv << endl << "Na struju: ";
		if (nastruju)
		{
			cout << "Jeste" << endl;
		}
		else 
		{
			cout << "Nije" << endl;
			cout << "Opseg godina: " << opsegGodina << endl
		}
	}
};


#endif
