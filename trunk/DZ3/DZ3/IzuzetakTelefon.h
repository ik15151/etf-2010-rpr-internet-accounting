#pragma once

ref class IzuzetakTelefon : public System::Exception
{
public:
	IzuzetakTelefon (String ^msg) : Exception (msg) {}

};