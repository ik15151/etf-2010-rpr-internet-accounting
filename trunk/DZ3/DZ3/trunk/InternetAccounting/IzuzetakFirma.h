#pragma once

ref class IzuzetakFirma : public System::Exception
{
public:
	IzuzetakFirma (System::String ^msg) : Exception (msg) {}

};