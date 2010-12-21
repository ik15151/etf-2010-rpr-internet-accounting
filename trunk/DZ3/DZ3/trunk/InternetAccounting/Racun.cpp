#include "stdafx.h"
#include "Racun.h"


Racun::Racun (String ^username, String ^mjesec, bool placeno) 
: _username (username), _mjesec (mjesec), _placeno (placeno) { ++_id_racuna; }