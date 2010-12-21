#include "stdafx.h"
#include "KorisnikOsoba.h"

String ^KorisnikOsoba::Print ()
{
	return _ime + " " + _prezime;
}
