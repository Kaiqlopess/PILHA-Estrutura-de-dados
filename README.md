# 📚 Implementação de Pilha em C++

Este projeto tem como objetivo demonstrar a implementação de uma estrutura de dados **Pilha (Stack)** em C++ utilizando alocação dinâmica e ponteiros.

---

## 📌 O que é uma Pilha?

A **Pilha** é uma estrutura de dados do tipo **LIFO (Last In, First Out)**, ou seja, o último elemento a entrar é o primeiro a sair.

Exemplo prático: Uma pilha de pratos — você só consegue retirar o que está por cima.

---

## 🧠 Lógica da Implementação

A pilha foi implementada utilizando **nós dinâmicos** (classe `No`) conectados por ponteiros, simulando uma pilha encadeada.

### Métodos principais:

- `push(int d)`: insere um elemento no topo da pilha;
- `pop()`: remove o elemento do topo;
- `peek()`: retorna o valor do topo sem remover;
- `exibirPilha()`: exibe todos os elementos da pilha, do topo à base.

---

## 🖥️ Exemplo de Execução

```cpp
Pilha p;

p.push(5);
p.push(6);
p.push(7);

p.exibirPilha();   // Saída: Topo->7->6->5->NULL

p.pop();           // Saída: 7 removido!
p.exibirPilha();   // Saída: Topo->6->5->NULL

p.pop();           // Saída: 6 removido!
p.exibirPilha();   // Saída: Topo->5->NULL
