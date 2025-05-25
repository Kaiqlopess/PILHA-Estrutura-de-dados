 #include "No.h"
 
 #include <iostream>
 
 class Pilha{
 	private:
 		No* topo;		
 	public:
 		Pilha();
 		
 		void push(int d);
 		void pop();
 		int peek();
 		void exibirPilha();
 	
 };
