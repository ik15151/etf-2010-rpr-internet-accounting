#pragma once

ref class IzuzetakOsoba : public System::Exception
{
public:
	IzuzetakOsoba (System::String ^msg) : Exception (msg) {}

};