#include "com.h"
#include <iostream>

using namespace std;

Comunication::Comunication(){

};

void Comunication::changesemaph(bool value){
    this->semaph=value;
};

void Comunication::imprime(){
	this->changesemaph(false);
    std::cout << "Estado sem�foro:"<< this->semaph << std::endl;
    
};

bool Comunication::isAvailable(){
	/*if(this->semaph == 1){
		return true;
	}else{
		return false;
	};*/
	return (this->semaph);
};

