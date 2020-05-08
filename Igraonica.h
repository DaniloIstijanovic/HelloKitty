#pragma once
#ifndef igraonica_h
#define Igraonica_h
class Igraonica
{
private:
	List <Igracka*> igracke;
public:
	bool dodajIgracku(Igracka* igr)
	{
		if (igracke.add(igracke.size() + 1, igr))
			return true;
		else
			return false;
	}
	bool baciIgracku(int i)
	{
		if (igracke.remove(i))
			return true;
		else
			return false;
	}
	bool nadjiIgracku(Dinstring a)
	{
		bool povratna = false;
		Igracka* igr;
		for (int i = 1; i <= igracke.size(); ++i)
		{
			igracke.read(i, igr);
			if (igracka->getNaziv() == a)
				povratna = true;
		}
		return povratna;
	}
	void ispisiIgracke()
	{
		cout << "Igraonica:" << endl
			<< "Broj igracaka: " << igracke.size() << endl;
		Igracka* igr;
		for (int i = 1; i <= igracke.size(); ++i)
		{
			igracke.read(i, igr);
			igr->ispisi();
		}
	}
};


#endif 
