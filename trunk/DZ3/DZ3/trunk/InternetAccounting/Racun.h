#pragma once
#include "KontrolaTimer.h"

using namespace InternetAccounting;
using namespace System;
using namespace System::IO;
using namespace System::Xml::Serialization;

[Serializable]
public ref class Racun : KontrolaTimer
{
	static int _id_racuna = 0;
	String ^_username, ^_mjesec;
	bool _placeno;

public:
	Racun () {}

	Racun (String ^username, String ^mjesec, bool placeno);
	Racun (String ^izdat, String ^username, String ^mjesec, bool placeno): KontrolaTimer (izdat), _username (username), _mjesec (mjesec), _placeno (placeno) {}

	int Id_racuna () { return _id_racuna; }
	void Id_racuna (int val) { _id_racuna = val; }

	String ^Username () { return _username; }
	void Username (String ^val) { _username = val; }

	String ^Mjesec () { return _mjesec; }
	void Mjesec (String ^val) { _mjesec = val; }

	bool Placeno () { return _placeno; }
	void Placeno (bool val) { _placeno = val; }

};