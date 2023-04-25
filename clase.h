#pragma once
#include <iostream>
#include <cstring>
#include <vector>
#include <typeinfo>
class Data
{
	int zi;
	const char* luna;
	int an;
public:
	Data();
	Data(int zi1, const char* luna1, int an1);
	Data(Data &data);
	~Data();
	friend std::istream& operator>>(std::istream& in, Data* obj);
	friend std::ostream& operator<<(std::ostream& out, Data& obj);
	void operator=(const Data& obj);
	int get_zi();
	const char* get_luna();
	int get_an();
	void set_zi(int z);
	void set_luna(char* l);
	void set_an(int a);
};
class Angajat
{
protected:
	std::string nume;
	std::string prenume;
	float salariu;
	Data data_angajare;
public:
	Angajat();
	Angajat(std::string nume1, std::string prenume1, float salariu1, Data data_angajare1);
	Angajat(Angajat& angajat);
	friend std::istream& operator>>(std::istream& in, Angajat* obj);
	friend std::ostream& operator<<(std::ostream& out, Angajat& obj);
	void operator=(const Angajat& obj);
	std::string get_nume();
	std::string get_prenume();
	float get_salariu();
	Data get_data_angajare();
	void set_nume(std::string n);
	void set_prenume(std::string p);
	void set_salariu(float s);
	void set_data_angajare(Data d);
	virtual void afisare() = 0;
};
class Part_Time:public Angajat
{
	int nr_ore_zi;
	Data final_contract;
public:
	Part_Time();
	Part_Time(int nr_ore_zi, Data final_contract);
	Part_Time(Part_Time& part);
	friend std::istream& operator>>(std::istream& in, Part_Time* obj);
	friend std::ostream& operator<<(std::ostream& out, Part_Time* obj);
	void operator=(const Part_Time& obj);
	int get_nr_ore_zi();
	Data get_final_contract();
	void set_nr_ore_zi(int nr);
	void set_final_contract(Data final);
	void afisare() override;
};
class Permanent:public Angajat
{
	int nr_minori_intretinere;
public:
	Permanent();
	Permanent(int nr_minori_intretinere);
	Permanent(Permanent& perm);
	friend std::istream& operator>>(std::istream& in, Permanent* obj);
	friend std::ostream& operator<<(std::ostream& out, Permanent& obj);
	void operator=(const Permanent& obj);
	int get_nr_minori();
	void set_nr_minori(int nr);
	void afisare() override;
};
