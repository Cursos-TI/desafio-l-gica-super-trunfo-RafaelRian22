#include <stdio.h>
int main() {
  // definição das variáveis
  int populacao, populacao2 ,pontosturisticos,pontosturisticos2,comparacaopopulacional,comparacaopontosturisticos,
  comparacaopib,comparacaopibpercapita,comparacaoarea,comparacaosuperpoder,numero,numero2, carta1,carta2,
  comparacaodensidadepopulacional,resultado,resultado2;
  float area,area2,pib,pib2,densidadepopulacional,densidadepopulacional2,pibpercapita,pibpercapita2,densidadepopulacionalinversa,
  densidadepopulacionalinversa2,superpoder,superpoder2;
  char nomedacidade[50],nomedacidade2[50],estado[10],estado2[10];
  
  // Área para entrada de dados
  // carta 1
  printf("bem vindo ao jogo de cartas de estados brasileiro, digite os dados da carta1 e carta2.\n");
  printf("entrada de dados da carta1.\n");
  printf("digite uma letra inicial de um Estado brasileiro:\n");
  scanf("%s",estado);
  printf("digite o nome de uma cidade desse Estado:\n");
  scanf("%s",nomedacidade);
  printf("digite o número da população dessa cidade:\n");
  scanf("%d", &populacao);
  printf("digite a àrea em km² dessa cidade:\n");
  scanf("%f", &area);
  printf("digite o pib dessa cidade:\n");
  scanf("%f", &pib);
  printf("digite o número de pontos turísticos dessa cidade:\n");
  scanf("%d", &pontosturisticos);
 //carta2
  printf("entrada de dados da carta2.\n");
  printf("digite uma letra inicial de um Estado brasileiro:\n");
  scanf("%s",estado2);
  printf("digite o nome de uma cidade desse Estado:\n");
  scanf("%s",nomedacidade2);
  printf("digite o número da população dessa cidade:\n");
  scanf("%d", &populacao2);
  printf("digite a àrea em km² dessa cidade:\n");
  scanf("%f", &area2);
  printf("digite o pib dessa cidade:\n");
  scanf("%f", &pib2);
  printf("digite o número de pontos turísticos dessa cidade:\n");
  scanf("%d", &pontosturisticos2);
  // Área para cálculo 
  pibpercapita = (float)(pib)/populacao;
  pibpercapita2 = (float)(pib2)/populacao2;
  densidadepopulacional = (float)(populacao)/area;
  densidadepopulacional2 = (float)(populacao2)/area2;
  densidadepopulacionalinversa = (float)(area)/populacao;
  densidadepopulacionalinversa2 = (float)(area2)/populacao2;
  superpoder = (float)(area+pib+pibpercapita+populacao+densidadepopulacionalinversa+pontosturisticos);
  superpoder2 = (float)(area2+pib2+pibpercapita2+populacao2+densidadepopulacionalinversa2+pontosturisticos2);

  // Área para exibição dos dados da cidade
  printf("\ncarta 1: estado:%s\n código:%s01\n nome da cidade: %s\n população:%d\n PIB:%f\n pontosturísticos:%d\n área: %fkm²\n pi per capita:%f\n densidade populacional: %f\n superpoder: %f\n", estado,estado,nomedacidade,
    populacao,pib,pontosturisticos,area,pibpercapita,densidadepopulacional,superpoder);

  printf("\ncarta 2: estado:%s\n código:%s02\n nome da cidade: %s\n população:%d\n PIB:%f\n pontosturísticos:%d\n área: %fkm²\n pi per capita:%f\n densidade populacional:%f\n superpoder: %f\n", estado2,estado2,nomedacidade2,
    populacao2,pib2,pontosturisticos2,area2,pibpercapita2,densidadepopulacional2,superpoder2);

  //Área de comparação de cartas
  comparacaopopulacional = populacao > populacao2;
  comparacaoarea = area > area2;
  comparacaopib = pib > pib2;
  comparacaopontosturisticos = pontosturisticos > pontosturisticos2;
  comparacaopibpercapita = pibpercapita > pibpercapita2;
  comparacaodensidadepopulacional = densidadepopulacional < densidadepopulacional2;
  comparacaosuperpoder = superpoder > superpoder2;
  //menu
     //entrada de dados
  printf("\nmenu principal\n");
  printf("A carta que tiver o valor de cada propriedade ganhará um ponto, vence quem tiver mais pontos.\n");
  printf("escolha duas propriedades diferentes\n");
  printf("digite 1 para escolher a propriedade população:\ndigite 2 para escolher a propriedade área:\n");
  printf("digite 3 para escolher a pib:\ndigite 4 para escolher a propriedade pontos turísticos:\n");
  printf("digite 5 para escolher a propriedade pib per capita :\ndigite 6 para escolher a propriedade densidade populacional:\n");
  printf("digite 7 para escolher a propriedade super poder:\n");  
    scanf("%d",&numero);
  printf("digite a outra propriedade:\n");  
    scanf("%d",&numero2);
    //comparações das cartas
   resultado = 0;
   resultado2 = 0;
  if(numero == numero2){
    printf("Falha, você escolheu o mesmo atributo duas, tem que ser um diferente...\n");
  } else {
    switch (numero)
    {
    case 1:
      comparacaopopulacional? resultado++: resultado2++;
      printf("população: carta1: %d e carta2: %d...\n", resultado, resultado2);
      break;
    case 2:
      comparacaoarea? resultado++: resultado2++;
      printf("área: carta1: %d e carta2: %d...\n", resultado, resultado2);
      break;
    case 3:
      comparacaopib? resultado++: resultado2++;
      printf("pib: carta1: %d e carta2: %d...\n", resultado, resultado2);
      break;
    case 4:
      comparacaopontosturisticos? resultado++: resultado2++;
      printf("pontos turísticos: carta1: %d e carta2: %d...\n", resultado, resultado2);
      break;
    case 5:
      comparacaopibpercapita? resultado++: resultado2++;
      printf("pib per capita: carta1: %d e carta:2 %d...\n", resultado, resultado2);
      break;
    case 6:
      comparacaodensidadepopulacional? resultado++: resultado2++;
      printf("densidade populacional: carta1: %d e carta2: %d...\n", resultado, resultado2);
      break;
    case 7:
      comparacaosuperpoder? resultado++: resultado2++;
      printf("super poder: carta1: %d e carta2: %d...\n", resultado, resultado2);
      break;
    default:
     printf("Falha, você escolheu um numero diferentes das opções..\n");
     break;
    }
  switch (numero2)
    {
    case 1:
      comparacaopopulacional? resultado++: resultado2++;
      printf("população: carta1: %d e carta2: %d...\n", resultado, resultado2);
      break;
    case 2:
      comparacaoarea? resultado++: resultado2++;
      printf("área: carta1: %d e carta2: %d...\n", resultado, resultado2);
      break;
    case 3:
      comparacaopib? resultado++: resultado2++;
      printf("pib: carta1: %d e carta2: %d...\n", resultado, resultado2);
      break;
    case 4:
      comparacaopontosturisticos? resultado++: resultado2++;
      printf("pontos turísticos: carta1: %d e carta2: %d...\n", resultado, resultado2);
      break;
    case 5:
      comparacaopibpercapita? resultado++: resultado2++;
      printf("pib per capita: carta1: %d e carta2: %d...\n", resultado, resultado2);
      break;
    case 6:
      comparacaodensidadepopulacional? resultado++: resultado2++;
      printf("densidade populacional: carta1: %d e carta2: %d...\n", resultado, resultado2);
      break;
    case 7:
      comparacaosuperpoder? resultado++: resultado2++;
      printf("super poder: carta1: %d e carta2 %d...\n", resultado, resultado2);
      break;
    default:
     printf("Falha, você escolheu um numero diferentes das opções..\n");
     break;
    }
  //definição de vencedor
  carta1 = resultado > resultado2;
  carta2 = resultado < resultado2;
  if(carta1){
    printf("parabéns, carta1 venceu..\n");
  } else if (carta2){
    printf("parabéns, carta2 venceu..\n");
  } else{ 
    printf("empatado");
  }
  
  }
return 0;
}