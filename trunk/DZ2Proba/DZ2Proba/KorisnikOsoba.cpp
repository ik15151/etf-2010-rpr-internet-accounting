#include "stdafx.h"
#include "KorisnikOsoba.h"

String ^KorisnikOsoba::Print ()
{
	return _ime + "\t\t\t" + _prezime;
}