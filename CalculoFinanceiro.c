#include <stdio.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL,"Portuguese"); // ISSO SERVE PRA QUE OS CARACTERES ESPECIAIS EM PORTUGUÊS SEJAM IMPRESSOS CORRETAMENTE
  
  char mes[10];
  float salario1, salario2, beneficio1, beneficio2, outrasReceitas1, outrasReceitas2;
  
  // DÁ AS BOAS VINDAS E SOLICITA DADOS DO USUÁRIO
  printf("***************************************************\n");
  printf("** Vamos fazer os calculos finaneiros deste mês? **\n");
  printf("***************************************************\n");
  printf ("\n\n");
  printf ("Digite o mês para cálculo (nome): ");
  scanf ("%s", &mes);
  fflush (stdin);
  printf ("Este cálculo é referente ao mês de %s.\n\n", mes);
  
  // PEDE AO USUÁRIO TODAS AS ENTRADAS
  printf (".....::::: Digite as entradas do mês de %s :::::.....\n", mes);                               
  printf ("\n");
  printf ("SALÁRIO DO ESPOSO (xxxx.xx): R$ ");
  scanf ("%f", &salario1);
  fflush (stdin);
  printf ("SALÁRIO DA ESPOSA (xxxx.xx): R$ ");
  scanf ("%f", &salario2);
  fflush (stdin);
  printf ("BENEFÍCIOS DO ESPOSO (xxxx.xx): R$ ");
  scanf ("%f", &beneficio1);
  fflush (stdin);
  printf ("BENEFÍCIOS DA ESPOSA (xxxx.xx): R$ ");
  scanf ("%f", &beneficio2);
  fflush (stdin);
  printf ("RECEITAS EXTRAS DO ESPOSO (xxxx.xx): R$ ");
  scanf ("%f", &outrasReceitas1);
  fflush (stdin);
  printf ("RECEITAS EXTRAS DA ESPOSA (xxxx.xx): R$ ");
  scanf ("%f", &outrasReceitas2);
  fflush (stdin);
  printf ("\n");
  
  float somaSalario, somaBeneficio, somaOutrasReceitas;
  somaSalario = salario1 + salario2;  
  somaBeneficio = beneficio1 + beneficio2;
  somaOutrasReceitas = outrasReceitas1 + outrasReceitas2;
  
  printf (".....::::: Entradas no mês de %s :::::.....\n\n", mes);                            
  printf ("SALÁRIOS: R$ %.2f\n", somaSalario);
  printf ("BENEFÍCIOS: R$ %.2f\n", somaBeneficio);    
  printf ("DEMAIS RECEITAS: R$ %.2f\n\n", somaOutrasReceitas);
  
  // CALCULA A SOMA DE TODAS AS ENTRADAS E DÁ O RESULTADO FINANCEIRO
  float somaTudo, calculaDizimo, somaDizimavel, somaInvestivel, calculaOferta, calculaCarro, calculaReformaCasa, calculaGastosConjuntos, calculaGastosElias, calculaGastosGisele, calculaInvestimentoEmergencia, calculaInvestimentoViagem, calculaInvestimento; 
  somaTudo = somaSalario + somaBeneficio + somaOutrasReceitas;
  somaDizimavel = somaSalario + somaBeneficio;
  somaInvestivel = somaSalario + somaOutrasReceitas;

  printf ("- TOTAL DE ENTRADAS: R$ %.2f\n\n", somaTudo);
  
  calculaDizimo = (somaDizimavel * 0.1);
  calculaOferta = (somaDizimavel * 0.06);
  calculaGastosConjuntos = (somaTudo * 0.15);
  calculaGastosElias = (somaTudo * 0.1);
  calculaGastosGisele = (somaTudo * 0.1);
  calculaInvestimentoEmergencia = (somaInvestivel * 0.09);
  calculaInvestimentoViagem = (somaInvestivel * 0.09);
  calculaInvestimento = (somaInvestivel * 0.1);
  calculaCarro = (somaInvestivel * 0.12);
  calculaReformaCasa = (somaInvestivel * 0.09);
  
  printf (".....::::: Resultados para o mês de %s :::::.....\n\n", mes);                               
  printf ("- DÍZIMOS: R$ %.2f\n", calculaDizimo);
  printf ("- OFERTAS: R$ %.2f\n", calculaOferta);
  printf ("- GASTOS ESPOSO: R$ %.2f\n", calculaGastosElias);
  printf ("- GASTOS ESPOSA: R$ %.2f\n", calculaGastosGisele);
  printf ("- CARRO: R$ %.2f\n", calculaCarro);
  printf ("- REFORMA DA CASA: R$ %.2f\n", calculaReformaCasa);
  printf ("- POUPANÇA DE EMERGÊNCIA: R$ %.2f\n", calculaInvestimentoEmergencia);
  printf ("- POUPANÇA DE VIAGEM: R$ %.2f\n", calculaInvestimentoViagem);
  printf ("- INVESTIMENTOS SEM RESGATE PRÓXIMO: R$ %.2f\n\n", calculaInvestimento);
  
return 0; 
}