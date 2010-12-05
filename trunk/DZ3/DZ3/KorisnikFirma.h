#pragma once
#include "Korisnik.h"
using namespace System;

ref class KorisnikFirma : Korisnik
{
	String ^_naziv;
	int _PDV_broj;
public:
	KorisnikFirma (String ^username, String ^naziv_paketa, String ^adresa, String ^password, int telefon, bool modem, String ^naziv, int PDV_broj) 
		: Korisnik (username, naziv_paketa, adresa, password, telefon, modem), _naziv (naziv), _PDV_broj (PDV_broj) {}

	String ^Naziv () { return _naziv; }
	void Naziv (String ^val) { _naziv = val; }

	int PDV_broj () { return _PDV_broj; }
	void PDV_broj (int val) { _PDV_broj = val; }

	virtual String ^Print () override;
};