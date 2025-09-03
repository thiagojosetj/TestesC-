#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int meses, pessoasInicio, pessoasEntrando, totalPessoas;
    float valorPorMes, totalAPagar, totalPago, parcelaAtual, totalTotal;

    cout << fixed << setprecision(2);

    cout << "==============================================\n";
    cout << "       CALCULADORA DE DIVISAO DE PARCELAS    \n";
    cout << "==============================================\n\n";

    cout << "Digite o numero de meses ja pagos: ";
    cin >> meses;

    cout << "Digite o valor da parcela (R$): ";
    cin >> valorPorMes;

    cout << "Digite o numero de pessoas que estao pagando desde o comeco: ";
    cin >> pessoasInicio;

    cout << "Quantas pessoas entrando: ";
    cin >> pessoasEntrando;

    totalPago = meses * valorPorMes * pessoasInicio;
    totalPessoas = pessoasInicio + pessoasEntrando;
    totalAPagar = (totalPago / totalPessoas) / pessoasInicio;
    parcelaAtual = (valorPorMes * pessoasInicio) / totalPessoas;
    totalTotal = totalAPagar * pessoasInicio;

    cout << "==============================================";
    cout << "\nO total pago ate agora e de R$" << totalPago << endl;
    cout << "\nO total a pagar a cada pessoa que ja estava antes e de R$" << totalAPagar << endl;
    cout << "\nO valor que cada pessoa que esta entrando agora deve pagar e de R$" << totalTotal << endl;
    cout << "\nO valor da parcela atual vai ficar em R$" << parcelaAtual << endl;
    cout << "\nNumero total de pessoas no grupo e de " << totalPessoas << endl;
    cout << "\n==============================================\n";
    cout << "          CALCULO FINALIZADO!           \n";
    cout << "==============================================\n";

    return 0;
}