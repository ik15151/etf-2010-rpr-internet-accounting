#pragma once

using namespace System;

ref class Paket
{
	String ^_naziv_paketa, ^_download_limit, ^_brzina_pristupa_download_upload;
	double _cijena;

public:
	Paket (String ^naziv_paketa, String ^download_limit, String ^brzina_pristupa_download_upload, double cijena)
		: _naziv_paketa (naziv_paketa), _download_limit (download_limit), _brzina_pristupa_download_upload (brzina_pristupa_download_upload), _cijena (cijena) {}

	String ^Naziv_paketa () { return _naziv_paketa; }
	void Naziv_paketa (String ^val) { _naziv_paketa = val; }

	String ^Download_limit () { return _download_limit; }
	void Download_limit (String ^val) { _download_limit = val; }

	String ^Brzina_pristupa_download_upload () { return _brzina_pristupa_download_upload; }
	void Brzina_pristupa_download_upload (String ^val) { _brzina_pristupa_download_upload = val; }

	double Cijena () { return _cijena; }
	void Cijena (double val) { _cijena = val; }

};