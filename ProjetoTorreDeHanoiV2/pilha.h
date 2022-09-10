#ifndef PILHA_H
#define PILHA_H
#include <QString>
namespace pom{
class Pilha
{
         //Atributos
private:

    int tamanho;
    int topo;
    int *array;

public:
    Pilha();
    Pilha(int tamanho);
    ~Pilha();
    bool estaCheia() const;
    bool estaVazia() const;
    void inserir(int elemento);
    int acessar()const;
    void retirar ();
    int quantidadeDeElementos() const;
    //metodo para facilitar o trabalho da torre !
    QString getPilha();
    QString QuantidadeElementos();
    //QString getPilha();


};

}
#endif // PILHA_H
