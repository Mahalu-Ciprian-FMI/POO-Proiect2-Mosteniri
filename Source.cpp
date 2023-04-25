#include "clase.h"
int main()
{
	int prima;
	std::cout << "Introduceti bonusul: ";
	std::cin >> prima;
	std::vector<Angajat*> v;
	std::cout << "Introduceti numarul de angajati al firmei: ";
	int angajare;
	std::cin >> angajare;
	while (angajare)
	{
		int tip;
		std::cout << "Introduceti tipul contractului 1-Permanent 2-Part_Time: ";
		std::cin >> tip;
		try
		{
			if (tip == 1 || tip == 2)
			{
				angajare--;
				if (tip == 1)
				{
					v.push_back(new Permanent());
				}
				else
				{
					v.push_back(new Part_Time());
				}
			}
			else
				throw(tip);
		}
		catch (int wrongnumber)
		{
			std::cout << "Numarul " << wrongnumber << " a fost introdus, in loc de 1 sau 2.\n";
		}
	}
	std::vector<Permanent> v1;
	std::vector<Part_Time> v2;
	/*
	for (auto p = v.begin();p != v.end();p++)
	{
		if (typeid(**p) == typeid(Permanent))
			v1.push_back(dynamic_cast<Permanent*>(*p));
		else
			v2.push_back(dynamic_cast<Part_Time*>(*p));
	}*/
	/*for (auto p = v1.begin();p != v1.end();p++)
	{
		try
		{
			if (nr_minori_intretinere < 0)
				throw(nr_minori_intretinere);
			else
				if (nr_minori_intretinere == 0)
					salariu += prima;
				else
					salariu += ((2020 - data_angajare.an) / 100) * prima;
		}
		catch(int nr_copii)
		{
			std::cout << "O persoana nu poate avea un numar de copii negativ, precum: " << nr_copii;
		}
	*/
	/*
	for (auto p = v2.begin();p != v2.end();p++)
	{
		try
		{
			if (final_contract.zi > 31)
				throw(final_contract.zi);
			else
				if (final_contract.zi < 31)
					salariu += prima;
				else
					salariu += (7.5 * prima);
		}
		catch (int zi)
		{
			std::cout << "O luna nu poate avea " << zi << " zile";
		}
	}
	*/
	/*
	for (auto p = v1.begin();p != v1.end();p++)
	{
		p.afisare();
	}
	for (auto p = v2.begin();p != v2.end();p++)
	{
		p.afisare();
	}*/
	return 0;
}