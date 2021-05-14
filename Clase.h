#pragma once
#include <iostream>
using namespace std;

class Clase
{
	int idC, string nombreC;
public:
	Clase();
	Clase (int, string);
	int getIDC();
	void setIDC(int);
	string getNombreC();
	void setNombreC(string);
	~Clase();
	
};