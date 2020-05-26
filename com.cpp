#include "com.h"
#include <iostream>

//teste 00001;

using namespace std;

Comunication::Comunication(){

};

void Comunication::changesemaph(bool value){
    this->semaph=value;
};

void Comunication::imprime(){
	this->changesemaph(false);
    std::cout << "Estado semáforo:"<< this->semaph << std::endl;
    
};

bool Comunication::isAvailable(){
	return (this->semaph);
};

