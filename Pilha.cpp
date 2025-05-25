#include "Pilha.h"

#include <iostream>

using namespace std;

Pilha::Pilha()
{
	topo = NULL;
}

void Pilha::push(int d)
{
	No* novoNo = new No(d);
	
	novoNo->proximo = topo;
	topo = novoNo;
}

void Pilha::pop()
{
	if(topo == NULL){
		cout << "Pilha vazia!" << endl;
		return;
	}
	
	No* remover = topo;
	
	cout << remover->dado  << " removido!" << endl;
	
	topo = topo->proximo;
	
	delete remover;
}

int Pilha::peek()
{
	if(topo == NULL){
		cout << "Pilha vazia!" << endl;
		return -1;
	}
	
	return topo->dado;
}

void Pilha::exibirPilha()
{
	if(topo == NULL){
		cout << "Pilha vazia!" << endl;
		return;
	}
	
	No* temp = topo;
	
	cout << "Topo->";
	while(temp != NULL){
		cout << temp->dado << "->";
		temp = temp->proximo;
	}
	
	cout << "NULL" << endl;
}


