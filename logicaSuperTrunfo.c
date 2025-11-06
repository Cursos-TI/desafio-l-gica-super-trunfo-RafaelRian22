#include <stdio.h>
int main() {
  // definição das variáveis
  int populacao, populacao2 ,pontosturisticos,pontosturisticos2,comparacaopopulacional,comparacaopopulacional2,comparacaopontosturisticos,comparacaopontosturisticos2,
  comparacaopib,comparacaopib2,comparacaopibpercapita,comparacaopibpercapita2,comparacaoarea,comparacaoarea2,comparacaosuperpoder,comparacaosuperpoder2,numero,
  comparacaodensidadepopulacional,comparacaodensidadepopulacional2;
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
  superpoder = (float)(area+pib+pibpercapita+populacao+densidadepopulacionalinversa+pontosturisticos+area);
  superpoder2 = (float)(area2+pib2+pibpercapita2+populacao2+densidadepopulacionalinversa2+pontosturisticos2+area2);

  // Área para exibição dos dados da cidade
  printf("\ncarta 1: estado:%s\n código:%s01\n nome da cidade: %s\n população:%d\n PIB:%f\n pontosturísticos:%d\n área: %fkm²\n pi per capita:%f\n densidade populacional: %f\n superpoder: %f\n", estado,estado,nomedacidade,
    populacao,pib,pontosturisticos,area,pibpercapita,densidadepopulacional,superpoder);

  printf("\ncarta 2: estado:%s\n código:%s02\n nome da cidade: %s\n população:%d\n PIB:%f\n pontosturísticos:%d\n área: %fkm²\n pi per capita:%f\n densidade populacional:%f\n superpoder: %f\n", estado2,estado2,nomedacidade2,
    populacao2,pib2,pontosturisticos2,area2,pibpercapita2,densidadepopulacional2,superpoder2);

  //Área de comparação de cartas
  comparacaopopulacional = populacao > populacao2;
  comparacaopopulacional2 = populacao < populacao2;
  comparacaoarea = area > area2;
  comparacaoarea2 = area < area2;
  comparacaopib = pib > pib2;
  comparacaopib2 = pib < pib2;
  comparacaopontosturisticos = pontosturisticos > pontosturisticos2;
  comparacaopontosturisticos2 = pontosturisticos < pontosturisticos2;
  comparacaopibpercapita = pibpercapita > pibpercapita2;
  comparacaopibpercapita2 = pibpercapita < pibpercapita2;
  comparacaodensidadepopulacional = densidadepopulacional < densidadepopulacional2;
  comparacaodensidadepopulacional2 = densidadepopulacional > densidadepopulacional2;
  comparacaosuperpoder = superpoder > superpoder2;
  comparacaosuperpoder2 = superpoder < superpoder2;
  //menu
     //entrada de dados
  printf("\nmenu principal\n escolha uma propriedade:\n");
  printf("digite 1 para escolher a propriedade população:\ndigite 2 para escolher a propriedade área:\n");
  printf("digite 3 para escolher a pib:\ndigite 4 para escolher a propriedade pontos turísticos:\n");
  printf("digite 5 para escolher a propriedade pib per capita :\ndigite 6 para escolher a propriedade densidade populacional:\n");
  printf("digite 7 para escolher a propriedade super poder:\n");
    scanf("%d",&numero);
    //comparações das cartas
   switch (numero)
   {
   case 1:
     if(comparacaopopulacional){
    printf("\npopulação:carta1 venceu\n");
  }else if(comparacaopopulacional2){
    printf("população:carta2 venceu\n");
  } else{
    printf("população:empatado\n");
  }
    break;
   case 2: 
    if(comparacaoarea){
    printf("área:carta1 venceu\n");
  }else if(comparacaoarea2){
    printf("área:carta2 venceu\n");
  } else{
    printf("área:empatado\n");
  }
     break;
   case 3:
     if(comparacaopib){
    printf("pib:carta1 venceu\n");
  }else if(comparacaopib2){
    printf("pib:carta2 venceu\n");
  } else{
    printf("pib:empatado\n");
  } 
     break;
   case 4:
     if(comparacaopontosturisticos){
    printf("pontos turísticos:carta1 venceu\n");
  }else if(comparacaopontosturisticos2){
    printf("pontos turísticos:carta2 venceu\n");
  } else{
    printf("pontos turísticos:empatado\n");
  }
   break;
   case 5:
     if(comparacaopibpercapita){
    printf("pib per capita:carta1 venceu\n");
  }else if(comparacaopibpercapita2){
    printf("pib per capita:carta2 venceu\n");
  } else{
    printf("pib per capita:empatado\n");
  } 
     break;
   case 6:
     if(comparacaodensidadepopulacional){
    printf("densidade populacional:carta1 venceu\n");
  }else if(comparacaodensidadepopulacional2){
    printf("densidade populacional:carta2 venceu\n");
  } else{
    printf("densidade populacional:empatado\n");
  }
     break;
   case 7:
     if(comparacaosuperpoder){
    printf("super poder:carta1 venceu\n");
  }else if(comparacaosuperpoder2){
    printf("super poder:carta2 venceu\n");
  } else{
    printf("super poder:empatado\n");
  }
     break;
     default:
     printf("falha! você não digitou nenhuma das opções disponivel.\n");
     break;
   }
   return 0;
} 
