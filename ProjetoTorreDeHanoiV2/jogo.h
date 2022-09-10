#ifndef JOGO_H
#define JOGO_H
#include<pilha.h>

namespace pom{

class Jogo
{
private:
    pom::Pilha *torreA;
    pom::Pilha *torreB;
    pom::Pilha *torreC;
    int quantidadeDeDiscos;
    int tamanho;
    int quantidadeDeJogadas;
public: 
    Jogo();
    Jogo(int quantidadeDeDiscos);
    ~Jogo();
    int getQuantidadeDeDiscos() const;
    void setQuantidadeDeDiscos(int newQuantidadeDeDiscos);
    int getQuantidadeDeJogadas() const;
    void setQuantidadeDeJogadas(int newQuantidadeDeJogadas);
    void moverA_B();
    void moverA_C();

    void moverB_A();
    void moverB_C();

    void moverC_A();
    void moverC_B();

    QString getTorreA();
    QString getTorreB();
    QString getTorreC();

    bool consultarVitoria();
    QString vitoria();
    QString quantElementosB();


};
}
#endif // JOGO_H
