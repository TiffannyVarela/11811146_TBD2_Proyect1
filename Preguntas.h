#pragma once
#include <iostream>
using namespace std

class Preguntas
{
	int idP, string titulo, string desc;
public:
	Preguntas();
	Preguntas(int, string, string,int);
	int getIDP();
	void setIDP(int);
	string getTitle();
	void setTitle(string);
	string getDesc();
	void setDesc(string);
	~Preguntas();
	
};