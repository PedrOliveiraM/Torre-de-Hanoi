#include "jogo.h"
#include <pilha.h>
namespace pom{

int Jogo::getQuantidadeDeDiscos() const
{
    return quantidadeDeDiscos;
}

void Jogo::setQuantidadeDeDiscos(int newQuantidadeDeDiscos)
{
    quantidadeDeDiscos = newQuantidadeDeDiscos;
}

int Jogo::getQuantidadeDeJogadas() const
{
    return quantidadeDeJogadas;
}

void Jogo::setQuantidadeDeJogadas(int newQuantidadeDeJogadas)
{
    quantidadeDeJogadas = newQuantidadeDeJogadas;
}

Jogo::Jogo(int quantidadeDeDiscos):
    quantidadeDeDiscos(quantidadeDeDiscos),
    quantidadeDeJogadas(0)

{
    if (quantidadeDeDiscos < 3 || quantidadeDeDiscos > 7 ) throw QString ("TAMANHO NAO PODE SER MENOR QUE 3 OU MAIOR QUE 7");
        torreA = new Pilha (quantidadeDeDiscos);
        torreB = new Pilha (quantidadeDeDiscos);
        torreC = new Pilha (quantidadeDeDiscos);
        int x = quantidadeDeDiscos;
        for (int pos = x ; pos > 0 ; pos--)
            torreA->inserir(pos);
    }

QString Jogo::vitoria(){
    QString saida = "";
    if (torreA->estaVazia() && torreC->estaVazia())
        saida +=  QString (" PARABENS VOCE VENCEU ! \n Quantidade de jogadas: " + QString::number(quantidadeDeJogadas));
    if (torreA->estaVazia() && torreB->estaVazia())
       saida += QString (" PARABENS VOCE VENCEU ! \n Quantidade de jogadas: " + QString::number(quantidadeDeJogadas));

    return saida;
}
bool Jogo::consultarVitoria()
{
    if (torreA->estaVazia() && torreC->estaVazia())
        return true;
     if (torreA->estaVazia() && torreB->estaVazia())
         return true;
     else
         return false;

}

void Jogo::moverA_B(){                          //A ----------- B
    if(torreA->estaVazia()){

        quantidadeDeJogadas++;
        throw QString("ESTA VAZIA");


    }
    else if(torreB->estaCheia()){

        quantidadeDeJogadas++;
        throw QString("ESTA CHEIA");


    }
    else if(torreB->estaVazia()){

        int aux = torreA->acessar();
        torreA->retirar();
        torreB->inserir(aux);
        quantidadeDeJogadas++;

    }
    else if(torreA->acessar() > torreB->acessar()){

            quantidadeDeJogadas++;
            throw QString("NAO É POSSIVEL EXECUTAR ESSA JOGADA");

    }

    else{
        int aux = torreA->acessar();
        torreA->retirar();
        torreB->inserir(aux);
        quantidadeDeJogadas++;
    }
  //  vitoria();
}
void Jogo::moverA_C(){                                  //A ----------- C
    if(torreA->estaVazia()){

        quantidadeDeJogadas++;
        throw QString("ESTA VAZIA");

    }
    else if(torreC->estaCheia()){

        quantidadeDeJogadas++;
        throw QString("ESTA CHEIA");

    }
    else if(torreC->estaVazia()){

        int aux = torreA->acessar();
        torreA->retirar();
        torreC->inserir(aux);
        quantidadeDeJogadas++;

    }
    else if(torreA->acessar() > torreC->acessar()){

            quantidadeDeJogadas++;
            throw QString("NAO É POSSIVEL EXECUTAR ESSA JOGADA");

    }

    else{
        int aux = torreA->acessar();
        torreA->retirar();
        torreC->inserir(aux);
        quantidadeDeJogadas++;
    }
 //  vitoria();
}
void Jogo::moverB_A(){                                     //B ----------- A
    if(torreB->estaVazia()){

        quantidadeDeJogadas++;
        throw QString("ESTA VAZIA");

    }
    else if(torreA->estaCheia()){

        quantidadeDeJogadas++;
        throw QString("ESTA CHEIA");

    }
    else if(torreA->estaVazia()){

        int aux = torreB->acessar();
        torreB->retirar();
        torreA->inserir(aux);
        quantidadeDeJogadas++;

    }
    else if(torreB->acessar() > torreA->acessar()){

            quantidadeDeJogadas++;
            throw QString("NAO É POSSIVEL EXECUTAR ESSA JOGADA");

    }

    else{
        int aux = torreB->acessar();
        torreB->retirar();
        torreA->inserir(aux);
        quantidadeDeJogadas++;
    }
  //  vitoria();
}
void Jogo::moverB_C(){                                   //B ----------- C
    if(torreB->estaVazia()){

        quantidadeDeJogadas++;
        throw QString("ESTA VAZIA");

    }
    else if(torreC->estaCheia()){

        quantidadeDeJogadas++;
        throw QString("ESTA CHEIA");

    }
    else if(torreC->estaVazia()){

        int aux = torreB->acessar();
        torreB->retirar();
        torreC->inserir(aux);
        quantidadeDeJogadas++;

    }
    else if(torreB->acessar() > torreC->acessar()){

            quantidadeDeJogadas++;
            throw QString("NAO É POSSIVEL EXECUTAR ESSA JOGADA");

    }

    else{
        int aux = torreB->acessar();
        torreB->retirar();
        torreC->inserir(aux);
        quantidadeDeJogadas++;
    }
  //  vitoria();
}
void Jogo::moverC_A(){                                             //C ----------- A
    if(torreC->estaVazia()){

        quantidadeDeJogadas++;
        throw QString("ESTA VAZIA");

    }
    else if(torreA->estaCheia()){

        quantidadeDeJogadas++;
        throw QString("ESTA CHEIA");

    }
    else if(torreA->estaVazia()){

        int aux = torreC->acessar();
        torreC->retirar();
        torreA->inserir(aux);
        quantidadeDeJogadas++;

    }
    else if(torreC->acessar() > torreA->acessar()){

            quantidadeDeJogadas++;
            throw QString("NAO É POSSIVEL EXECUTAR ESSA JOGADA");

    }

    else{
        int aux = torreC->acessar();
        torreC->retirar();
        torreA->inserir(aux);
        quantidadeDeJogadas++;
    }
  //  vitoria();
}
void Jogo::moverC_B(){                                                      //C ----------- B
    if(torreC->estaVazia()){

        quantidadeDeJogadas++;
        throw QString("ESTA VAZIA");


    }
    else if(torreB->estaCheia()){

        quantidadeDeJogadas++;
        throw QString("ESTA CHEIA");


    }
    else if(torreB->estaVazia()){

        int aux = torreC->acessar();
        torreC->retirar();
        torreB->inserir(aux);
        quantidadeDeJogadas++;

    }
    else if(torreC->acessar() > torreB->acessar()){

            quantidadeDeJogadas++;
            throw QString("NAO É POSSIVEL EXECUTAR ESSA JOGADA");

    }

    else{
        int aux = torreC->acessar();
        torreC->retirar();
        torreB->inserir(aux);
        quantidadeDeJogadas++;
    }
  //  vitoria();
}

QString Jogo::getTorreA()  {
    return torreA->getPilha();
}
QString Jogo::getTorreB()  {
    return torreB->getPilha();
}
QString Jogo::getTorreC()  {
    return torreC->getPilha();
}


Jogo::~Jogo(){

}
}
