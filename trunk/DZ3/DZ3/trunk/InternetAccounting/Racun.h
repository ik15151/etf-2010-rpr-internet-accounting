#pragma once
using namespace System;

ref class Racun
{
	static int _id_racuna = 0;
	String ^_username, ^_mjesec;
	bool _placeno;

public:
	Racun (String ^username, String ^mjesec, bool placeno);

	int Id_racuna () { return _id_racuna; }
	void Id_racuna (int val) { _id_racuna = val; }

	String ^Username () { return _username; }
	void Username (String ^val) { _username = val; }

	String ^Mjesec () { return _mjesec; }
	void Mjesec (String ^val) { _mjesec = val; }

	bool Placeno () { return _placeno; }
	void Placeno (bool val) { _placeno = val; }

};