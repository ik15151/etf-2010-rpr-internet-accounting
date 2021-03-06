#pragma once
#include "Paket.h"


using namespace System;

ref class Korisnik abstract
{
	String ^_username, ^_naziv_paketa, ^_adresa, ^_password, ^_telefon;
	bool _modem, _suspenzija, _mirovanje;

public:
	Korisnik (String ^username, String ^naziv_paketa, String ^adresa, String ^password, String ^telefon, bool modem) 
		:_username (username), _naziv_paketa (naziv_paketa), _adresa (adresa), _password (password), _telefon (telefon), _modem (modem), _suspenzija (false), _mirovanje (false)  {}

	String ^Username () { return _username; }
	void Username (String ^val) { _username = val; }

	String ^Naziv_paketa () { return _naziv_paketa; }
	void Naziv_paketa (String ^val) { _naziv_paketa = val; }

	String ^Adresa () { return _adresa; }
	void Adresa (String ^val) { _adresa = val; }

	String ^Password () { return _password; }
	void Password (String ^val) { _password = val; }

	String ^Telefon () { return _telefon; }
	void Telefon (String ^val) { _telefon = val; }

	bool Modem () { return _modem; }
	void Modem (bool val) { _modem = val; }

	bool Suspenzija () { return _suspenzija; }
	void Suspenzija (bool val) { _suspenzija = val; }

	bool Mirovanje () { return _mirovanje; }
	void Mirovanje (bool val) { _mirovanje = val; }

	virtual String ^Print () = 0;
	

};