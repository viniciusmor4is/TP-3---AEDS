#include <stdlib.h>
#include <stdio.h>

int digito_cpf (int d[9]) {
  // primeira soma de produtos
  int soma = d[8] * 2 + d[7] * 3 + d[6] * 4 + d[5] * 5 +
             d[4] * 6 + d[3] * 7 + d[2] * 8 + d[1] * 9 + d[0] * 10;

  // resto da soma
  int resto = soma % 11;
  // variaveis auxiliares
  int dezena, unidade;

  // define valor da dezena
  if (resto == 0 || resto == 1) {
    dezena = 0;
  } else {
    dezena = 11 - resto;
  }

  // segunda soma de produtos
  soma = dezena * 2 + d[8] * 3 + d[7] * 4 + d[6] *  5 + d[5] *  6 +
         d[4]   * 7 + d[3] * 8 + d[2] * 9 + d[1] * 10 + d[0] * 11;

  // resto da soma
  resto = soma % 11;

  // define valor da unidade
  if (resto == 0 || resto == 1) {
    unidade = 0;
  } else {
    unidade = 11 - resto;
  }

  // retorna digito verificador
  return dezena * 10 + unidade;
}

// funcao : calcula o digito verificador de cnpj dados seus digitos
// recebe : arranjo de numeros contendo os digitos do cnpj
// retorna: valor do digito verificador do cnpj

int digito_cnpj (int d[12]) {
  // primeira soma de produtos
  int soma = d[11] * 2 + d[10] * 3 + d[9] * 4 + d[8] * 5 + d[7] * 6 + d[6] * 7 +
             d[ 5] * 8 + d[ 4] * 9 + d[3] * 2 + d[2] * 3 + d[1] * 4 + d[0] * 5;

  // resto da soma
  int resto = soma % 11;
  // variaveis auxiliares
  int dezena, unidade;

  // define valor da dezena
  if (resto == 0 || resto == 1) {
    dezena = 0;
  } else {
    dezena = 11 - resto;
  }

  // segunda soma de produtos
  soma = dezena * 2 + d[11] * 3 + d[10] * 4 + d[9] * 5 + d[8] * 6 + d[7] * 7 +
         d[6]   * 8 + d[ 5] * 9 + d[ 4] * 2 + d[3] * 3 + d[2] * 4 + d[1] * 5 +
         d[0]   * 6;

  // resto da soma
  resto = soma % 11;

  // define valor da unidade
  if (resto == 0 || resto == 1) {
    unidade = 0;
  } else {
    unidade = 11 - resto;
  }

  // retorna digito verificador
  return dezena * 10 + unidade;
}

int main () {
  int L;
  scanf("%d", &L);
  if (L=1)
    { char d0, d1, d2, d3, d4, d5, d6, d7, d8, d9,d10,d11,d12;
  scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c",&d12,&d11,&d10,&d9,&d8,&d7,&d6,&d5,&d4,&d3,&d2,&d1,&d0);

  int somaprod;
  int digVer;


  d0=d0-'0'; d1=d1-'0'; d2=d2-'0';
  d3=d3-'0'; d4=d4-'0'; d5=d5-'0';
  d6=d6-'0'; d7=d7-'0'; d8=d8-'0';
  d9=d9-'0'; d10=d10-'0'; d11=d11-'0'; d12=d12-'0';

  somaprod=d1*3+d2+d3*3+d4+d5*3+d6+d7*3+d8+d9*3+d10+d11*3+d12;
   int h=somaprod%10;
   if (h==10) digVer=0;
    else digVer=10-h;

  if ('d0'==digVer) printf("valido");
   else printf("invalido");
    }


  return 0;
}
