#include <stdio.h>

int main() {
    int tentative = 0;
    int codebon = 1234;
    int codeentre;

     while (tentative < 3) {
 printf("Entrer votre codecarte: ");
scanf("%i", &codeentre);

  if (codeentre == codebon) {
    printf("le code estok ");
  return 0;
  } else {
        printf("cde pas bon");
         tentative++;
        }
    }

    printf("carte bloquee ");
    return 1;
}