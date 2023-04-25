#include "clase.h"

Data::Data()
{
	std::cout << "Introduceti ziua:";
	std::cin >> zi;
	//std::cout << "Introduceti luna:\n";
	//std::cin >> luna;
	std::cout << "Introduceti anul:";
	std::cin >> an;
}
Data::Data(int zi1, const char* luna1, int an1)
	:zi(zi1), luna(luna1), an(an1)
{
	std::cout << zi << " " << luna << " " << an;
}
Data::Data(Data& data)
{
	zi = data.zi;
	luna = data.luna;
	an = data.an;
}
Data::~Data()
{
	delete& zi;
	delete[] luna;
	delete& an;
}
int Data::get_zi()
{
	return zi;
}
const char* Data::get_luna()
{
	return luna;
}
int Data::get_an()
{
	return an;
}
void Data::operator=(const Data& obj)
{
	zi = obj.zi;
	luna = obj.luna;
	an = obj.an;
}
std::ostream& operator<<(std::ostream& out, Data& obj)
{
	std::cout << obj.zi << " " << obj.luna << " " << obj.an;
	return out;
}
std::istream& operator>>(std::istream& in, Data* obj)
{
	std::cout << "Introduceti ziua,luna si anul";
	//in >> obj->get_zi() >> obj->get_luna() >> obj->get_an();
	return in;
}
void Data::set_zi(int z)
{
	zi = z;
}
void Data::set_luna(char* l)
{
	luna = l;
}
void Data::set_an(int a)
{
	an = a;
}

Angajat::Angajat()
{
	std::cout << "Introduceti numele:";
	std::cin >> nume;
	std::cout << "Introduceti prenumele:";
	std::cin >> prenume;
	std::cout << "Introduceti salariul:";
	std::cin >> salariu;
	//std::cout << "Introduceti data_angajarii";
	//std::cin >> data_angajare;
	//std::cout <<nume << " " <<prenume<< " " <<salariu<<" "<<data_angajare;
}
Angajat::Angajat(std::string nume1, std::string prenume1, float salariu1, Data data_angajare1)
{
	nume = nume1;
	prenume = prenume1;
	salariu = salariu1;
	data_angajare = data_angajare1;
}
Angajat::Angajat(Angajat& angajat)
{
	nume = angajat.nume;
	prenume = angajat.prenume;
	salariu = angajat.salariu;
	data_angajare = angajat.data_angajare;
}
std::istream& operator>>(std::istream& in, Angajat* obj)
{
	std::cout << "Introduceti numele,prenumele,salariul si data";
	//in >> obj->get_nume() >> obj->get_prenume() >> obj->get_salariu() >> obj.get_data_angajare();
	return in;
}
std::ostream& operator<<(std::ostream& out, Angajat& obj)
{
	std::cout << obj.nume << " " << obj.prenume << " " << obj.salariu << " " << obj.data_angajare;
	return out;
}
void Angajat::operator=(const Angajat& obj)
{
	nume = obj.nume;
	prenume = obj.prenume;
	salariu = obj.salariu;
	data_angajare = obj.data_angajare;
}
std::string Angajat::get_nume()
{
	return nume;
}
std::string Angajat::get_prenume()
{
	return prenume;
}
float Angajat::get_salariu()
{
	return salariu;
}
Data Angajat::get_data_angajare()
{
	return data_angajare;
}
void Angajat::set_nume(std::string n)
{
	nume = n;
}
void Angajat::set_prenume(std::string p)
{
	prenume = p;
}
void Angajat::set_salariu(float s)
{
	salariu = s;
}
void Angajat::set_data_angajare(Data d)
{
	data_angajare = d;
}
void Angajat::afisare()
{
	std::cout << "Numele: " << nume << " Prenumele: " << prenume << " Salariul: " << salariu;//<< " Data Angajarii" << data_angajare;
}
Part_Time::Part_Time()
{
	std::cout << "Introduceti nr_ore_Zi:";
	std::cin >> nr_ore_zi;
	//std::cout << "Introduceti final_contract:";
	//std::cin >> final_contract;

}
Part_Time::Part_Time(int nr_ore_zi1, Data final_contract1)
{
	nr_ore_zi = nr_ore_zi1;
	final_contract = final_contract1;
}
Part_Time::Part_Time(Part_Time& part)
{
	nr_ore_zi = part.nr_ore_zi;
	final_contract = part.final_contract;
}
std::istream& operator>>(std::istream& in, Part_Time* obj)
{
	std::cout << "Introduceti Numarul de ore pe zi si contractul final";
	//in >> obj->get_nr_ore_zi() >> obj->get_final_contract();
	return in;
}
std::ostream& operator<<(std::ostream& out, Part_Time* obj)
{
	//std::cout << obj->get_nr_ore_zi() << " " << obj->get_final_contract();
	return out;
}
void Part_Time::operator=(const Part_Time& obj)
{
	nr_ore_zi = obj.nr_ore_zi;
	final_contract = obj.final_contract;
}
/*
int get_nr_ore_zi()
{
	return nr_ore_zi;
}
Data get_final_contract()
{
	return final_contract;
}
void set_nr_ore_zi(int nr)
{
	nr_ore_zi = nr;
}
void set_final_contract(Data final)
{
	final_contract = final;
}*/
void Part_Time::afisare()
{
	Angajat::afisare();
	std::cout << " Numarul de ore lucrate pe zi: " << nr_ore_zi;//<< " Data finalizarii contractului " << final_contract;
}
Permanent::Permanent()
{
	std::cout << "Introduceti nr de copii: ";
	std::cin >> nr_minori_intretinere;
}
Permanent::Permanent(int nr_minori_intretinere1)
{
	nr_minori_intretinere = nr_minori_intretinere1;
}
Permanent::Permanent(Permanent& perm)
{
	nr_minori_intretinere = perm.nr_minori_intretinere;
}
std::istream& operator>>(std::istream& in, Permanent* obj)
{
	std::cout << "Introduceti nr de minori";
	in >> obj->nr_minori_intretinere;
	return in;
}
std::ostream& operator<<(std::ostream& out, Permanent& obj)
{
	std::cout << obj.nr_minori_intretinere;
	return out;
}
void Permanent::operator=(const Permanent& obj)
{
	nr_minori_intretinere = obj.nr_minori_intretinere;
}
/*
int get_nr_minori()
{
	return nr_minori_intretinere;
}
void set_nr_minori(int nr)
{
	nr_minori_intretinere = nr;
}*/
void Permanent::afisare()
{
	Angajat::afisare();
	std::cout << " Numarul de copii: " << nr_minori_intretinere;
}