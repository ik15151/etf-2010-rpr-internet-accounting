#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Xml::Serialization;

[Serializable]
public ref class RacunPlain
{
public:
	RacunPlain() {}

	RacunPlain (String ^izdat, String ^username, String ^mjesec, bool placeno) : _izdat (izdat), _username (username), _mjesec (mjesec), _placeno (placeno) { }

	[ XmlElement( ElementName = "Izdat" )]
	String ^_izdat;

	/*
	[ XmlElement( ElementName = "IDracuna" )]
	int ^_id_racuna;
	*/

	[ XmlElement( ElementName = "Username" )]
	String ^_username;

	[ XmlElement( ElementName = "Mjesec" )]
	String ^_mjesec;

	[ XmlElement( ElementName = "Placeno" )]
	bool _placeno;
};