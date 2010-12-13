#pragma once

ref class IzuzetakAdresa : public System::Exception
{
public:
	IzuzetakAdresa (System::String ^msg) : Exception (msg) {}

};