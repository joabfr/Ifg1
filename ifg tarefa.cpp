#include <stdio.h>
int main(){
float km,dias,total;
printf("bem vindo a locadora de carros,o valor do veiculo e de R$90 reais por dia,mais R$0.20 por KM rodado:\n");
printf("digite a quantidade de dias\n");
scanf("%f",&dias);
printf("qual o KM desejado?\n");
scanf("%f",&km);
total=(km*0.20)+(dias*90);
printf("o valor a ser pago pelo aluguel sera! %.2f",total);
return 0;
}