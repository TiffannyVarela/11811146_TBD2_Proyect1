#pragma once
 #include <iostream>
 using namespace std

 class Examen
 {
 	int idE, int num_preguntas;
 public:
 	Examen();
 	Examen (int, int, int);
 	int getIDE();
 	void setIDE(int);
 	int getNum_P();
 	void setNum_P(int);
 	~Examen();
 	
 };