#pragma once
#include <iostream>
#include <cstring>
#include <vector>
#include <typeinfo>
#include <exception>
#include <memory>

class Data
{
	int zi;
	std::string luna;
	int an;
public:
	Data();
	Data(int zi1, std::string luna1, int an1);
	Data(const Data& data);
	~Data();
	friend std::istream& operator>>(std::istream& in, Data& obj);
	friend std::ostream& operator<<(std::ostream& out, Data& obj);
	void operator=(const Data& obj);
	int get_zi();
	std::string get_luna();
	int get_an();
	void set_zi(int z);
	void set_luna(std::string l);
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
	virtual void citire() = 0;
	virtual void afisare() = 0;
	std::string get_nume();
	std::string get_prenume();
	float get_salariu();
	Data get_data_angajare();
	void set_nume(std::string n);
	void set_prenume(std::string p);
	void set_salariu(float s);
	void set_data_angajare(Data d);
	virtual ~Angajat();
};
class Part_Time : public Angajat
{
protected:
	int nr_ore_zi;
	Data final_contract;
public:
	virtual void citire() override;
	virtual void afisare() override;
	Part_Time();
	~Part_Time() override;
	int get_nr_ore_zi();
	Data get_final_contract();
	void set_nr_ore_zi(int nr);
	void set_final_contract(Data final);

};
class Permanent : public Angajat
{
protected:
	int nr_minori_intretinere;
public:
	virtual void citire() override;
	virtual void afisare() override;
	Permanent();
	~Permanent() override;
	int get_nr_minori();
	void set_nr_minori(int nr);
};

class Expired : public std::exception
{
public:
	const char* motive();
};
