#pragma once

ref class IzuzetakPassword : public System::Exception
{
public:
	IzuzetakPassword (String ^msg) : Exception (msg) {}

};