#pragma once

using namespace System;
using namespace System::Xml::Serialization; // za XmlElement

[Serializable]
public ref class Korisnik abstract
{
public:
	[ XmlElement( ElementName = "Username" )]
	String ^_username;
	[ XmlElement( ElementName = "Paket" )]
	String ^_naziv_paketa; 
	[ XmlElement( ElementName = "Adresa" )]
	String ^_adresa; 
	[ XmlElement( ElementName = "Password" )]
	String ^_password; 
	[ XmlElement( ElementName = "Telefon" )]
	String ^_telefon;

	[ XmlElement( ElementName = "Suspenzija" )]
	bool _suspenzija; 
	[ XmlElement( ElementName = "Mirovanje" )]
	bool _mirovanje; 
	[ XmlElement( ElementName = "Modem" )]
	bool _modem;

public:
	Korisnik () {}
	Korisnik (bool modem, String ^username, String ^naziv_paketa, String ^adresa, String ^password, String ^telefon) 
		: _modem (modem), _username (username), _naziv_paketa (naziv_paketa), _adresa (adresa), _password (password), _telefon (telefon), _suspenzija (false), _mirovanje (false)  {}

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

	bool Suspenzija () { return _suspenzija; }
	void Suspenzija (bool val) { _suspenzija = val; }

	bool Mirovanje () { return _mirovanje; }
	void Mirovanje (bool val) { _mirovanje = val; }

	bool Modem () { return _modem; }
	void Modem (bool val) { _modem = val; }

	virtual String ^Print () = 0;


};