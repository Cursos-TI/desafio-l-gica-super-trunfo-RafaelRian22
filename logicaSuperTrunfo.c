#include <stdio.h>
int main() {
  // definição das variáveis
  int populacao, populacao2 ,pontosturisticos,pontosturisticos2,comparacaopopulacional,comparacaopontosturisticos,comparacaopib,
  comparacaopibpercapita,comparacaoarea,comparacaosuperpoder,comparacaodensidadepopulacional;
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
  printf("digite a àrea em metros quadrado dessa cidade:\n");
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
  printf("digite a àrea em metros quadrado dessa cidade:\n");
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
  superpoder = (float)(area+pib+pibpercapita+populacao+densidadepopulacionalinversa+pontosturisticos+area);
  superpoder2 = (float)(area2+pib2+pibpercapita2+populacao2+densidadepopulacionalinversa2+pontosturisticos2+area2);

  // Área para exibição dos dados da cidade
  printf("\ncarta 1: estado:%s\n código:%s01\n nome da cidade: %s\n população:%d\n PIB:%f\n pontosturísticos:%d\n área: %fm²\n pi per capita:%f\n densidade populacional: %f\n superpoder: %f\n", estado,estado,nomedacidade,
    populacao,pib,pontosturisticos,area,pibpercapita,densidadepopulacional,superpoder);

  printf("\ncarta 2: estado:%s\n código:%s02\n nome da cidade: %s\n população:%d\n PIB:%f\n pontosturísticos:%d\n área: %fm²\n pi per capita:%f\n densidade populacional:%f\n superpoder: %f\n", estado2,estado2,nomedacidade2,
    populacao2,pib2,pontosturisticos2,area2,pibpercapita2,densidadepopulacional2,superpoder2);

  //Área de comparação de cartas
  comparacaopopulacional = populacao > populacao2;
  comparacaoarea = area > area2;
  comparacaopib = pib > pib2;
  comparacaopontosturisticos = pontosturisticos > pontosturisticos2;
  comparacaopibpercapita = pibpercapita > pibpercapita2;
  comparacaodensidadepopulacional = densidadepopulacional < densidadepopulacional2;
  comparacaosuperpoder = superpoder > superpoder2;

  // Área de exibição de exibição das comparações das cartas
  if(comparacaopopulacional){
    printf("\npopulação:carta1 venceu\n");
  } else{
   
    printf("\npopulação:carta2 venceu\n");
  }
   if(comparacaoarea){
    printf("área:carta1 venceu\n");
  } else{

    printf("área:carta2 venceu\n");
  }
   if(comparacaopib){
    printf("pib:carta1 venceu\n");
  } else{
 
    printf("pib:carta2 venceu\n");
  }
   if(comparacaopontosturisticos){
    printf("pontos turístico:carta1 venceu\n");
  } else{

    printf("pontos turísticos:carta2 venceu\n");
  }
   if(comparacaopibpercapita){
    printf("pib per capita:carta1 venceu\n");
  } else{

    printf("pib per capita:carta2 venceu\n");
  }
   if(comparacaodensidadepopulacional){
    printf("densidade populacional:carta1 venceu\n");
  } else{

    printf("densidade populacional:carta2 venceu\n");
  }
   if(comparacaosuperpoder){
    printf("super poder:carta1 venceu\n");
  } else{
    printf("super poder:carta2 venceu\n");
  }
  return 0;
} 
