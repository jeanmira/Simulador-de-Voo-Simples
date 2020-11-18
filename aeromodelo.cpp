#include "aeromodelo.h"

namespace SimuladorDeVooSimples
{
    // Construtor que inicializa os parâmetros

    Aeromodelo::Aeromodelo(const string modelo, const string marca, const string cor, const string modeloTransmissor, float servoProfundor, float servoLeme, float servoAileronEs, float servoAileronDi, float servoAcelerador, float preco) : Aviao(modelo, marca, servoProfundor, servoLeme, servoAileronEs, servoAileronDi, servoAcelerador)
    {
        setPreco(preco);
        setCor(cor);
        setModeloTransmissor(modeloTransmissor);
    }

    // Métodos para mudar as variaveis
    void Aeromodelo::setPreco(float preco) { this->preco = (preco < 0.0) ? 0.0 : preco; }
    void Aeromodelo::setCor(string cor) { this->cor = cor; }
    void Aeromodelo::setModeloTransmissor(string modeloTransmissor) { this->modeloTransmissor = modeloTransmissor; }

    // Métodos para saber os valores das variáveis
    float Aeromodelo::getPreco() { return this->preco; }
    string Aeromodelo::getCor() { return this->cor; }
    string Aeromodelo::getModeloTransmissor() { return this->modeloTransmissor; }

    // Imprime todos os dados do aeromodelo
    void Aeromodelo::printAeromodelo()
    {
        Aviao::imprimirDadosAviao();
        cout << "Cor: " << this->cor << "\n"
             << "Valor: " << this->preco << "\n"
             << "\n";
    }

} // namespace SimuladorDeVooSimples
