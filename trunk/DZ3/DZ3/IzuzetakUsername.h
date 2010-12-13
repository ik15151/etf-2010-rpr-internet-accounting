#pragma once

ref class IzuzetakUsername : public System::Exception
{
public:
	IzuzetakUsername (String ^msg) : Exception (msg) {}

};