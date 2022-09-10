#include "pilha.h"

namespace pom{

Pilha::Pilha(int tamanho):
    tamanho(0),
    topo(-1),
    array(0)
{
    if(tamanho <= 0) throw QString("Tamanho nao pode ser <= 0");
    try {
        array = new int[tamanho];
        this->tamanho = tamanho;
    } catch (std::bad_alloc&) {
        throw QString("Memoria insuficiente");
    }
}
Pilha::~Pilha(){
    if(array) delete[] array;
    }

bool Pilha::estaCheia() const {
     if (topo == tamanho -1)
         return true;
     else
         return false;

    }
bool Pilha::estaVazia() const{
    return (topo == -1) ;

}
void Pilha::inserir(int elemento){
    //1- verificar se esta cheia
    //2- topo ++
    //3- colocar elementos no vetor
    if(estaCheia()){
        throw QString("A PILHA ESTA CHEIA\n");
    }
    else{
        topo ++;
        array[topo] =  elemento;

    }
}
int Pilha::quantidadeDeElementos() const{
    return topo+1;
}

void Pilha::retirar(){
    //verificar se esta vazia
    if (estaVazia()){
        throw QString("A PILHA ESTA VAZIA\n");
    }else{
        topo--;
    }
}
int Pilha::acessar() const{
    //1- verificar se esta vazia
    //2- retornar o elemento do topo
    if(estaVazia()){
        return 0;
    }
    else {
        return array[topo];
    }
}

QString Pilha::getPilha() {//--------------------------------------------------
    QString saida ="";
    int x = quantidadeDeElementos();
    for (int pos = x-1; pos >= 0 ; pos --){
         saida += QString::number(array[pos]) + "\n";
    }
    return saida;
}
}




