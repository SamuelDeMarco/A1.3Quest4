#include <stdio.h>

//função para transformar o valor digitado no seu inverso
int inverte(int x) {
    int inv = 0;
    while (x > 0) {
        inv = 10 * inv + x % 10;
        x /= 10;
    }
    return inv;
}

int main(void) {
  
  int numconta, inv, soma, multiplica, verif;
  int dig1, dig2, dig3, dig4, mult1, mult2, mult3, mult4;

  do
  {
    printf("Digite o valor da conta: ");
    scanf("%d", &numconta);
  }while(numconta < 1000 || numconta > 9999);
  
  //Número digitado cada bit
  dig1 = numconta / 1000;
  dig2 = (numconta / 100) % 10;
  dig3 = (numconta / 10) % 10;
  dig4 = numconta % 10;
/*
VERIFICANDO CADA BIT DO VALOR DIGITADO
  printf("\n%d", dig1);
  printf("\n%d", dig2);
  printf("\n%d", dig3);
  printf("\n%d", dig4);
*/
  numconta = numconta/10; 
  
  inv = inverte(numconta);

  soma = numconta + inv;

  mult1 = soma / 1000;
  mult2 = (soma / 100) % 10;
  mult3 = (soma / 10) % 10;
  mult4 = soma % 10;
/*
  VERIFICANDO CADA BIT DO VALOR DA MULTIPLICAÇÃO
  printf("\n%d", mult1);
  printf("\n%d", mult2);
  printf("\n%d", mult3);
  printf("\n%d", mult4);
*/  
  multiplica = mult1 * 0 + mult2 * 1 + mult3 * 2 + mult4 * 3;

  verif = multiplica % 10;

  if(verif == dig4)
  {
    printf("\nO número da conta é válido!");
  }
  else
  {
    printf("\nO número da conta é inválido!");
  }
  return 0;
}