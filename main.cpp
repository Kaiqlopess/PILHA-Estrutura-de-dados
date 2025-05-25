#include <iostream>

#include "Pilha.h"

int main(int argc, char** argv) {
	Pilha p;
	
	p.push(5);
	p.push(6);
	p.push(7);
	
	p.exibirPilha();
	
	p.pop();
	
	p.exibirPilha();
	
	p.pop();
	
	p.exibirPilha();
	
	return 0;
}
