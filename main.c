#include <stdio.h>

int main() {
  string ime = Teodora;
  string prezime = Sajic;
  int brojInd = 19;
  int godinarodj;

  printf("Ime: ", ime);
  printf("Prezime: ", prezime);
  printf("Broj indexa: ", brojInd);

  printf("Unesite godinu rodjenja: ");
  scanf("%d", &godinarodj);

  if ((godinarodj % 4 == 0 && godinarodj % 100 != 0) || (godinarodj % 400 == 0)) {
    printf("Rodjen si u prestupnoj godini.");
  } else {
    printf("Nisi rodjen u prestupnoj godini.");
  }
}
