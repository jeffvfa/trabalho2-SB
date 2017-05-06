#include <stdint.h>
#include <stdio.h>



void lfsr();

/*
função que gera os números pseudo aleatórios adaptada de:
https://en.wikipedia.org/wiki/Linear-feedback_shift_register
*/
void lfsr(){
  uint16_t start_state = 0xACE1u;  /* Any nonzero start state will work. */
  uint16_t lfsr = start_state;
  uint16_t bit;                    /* Must be 16bit to allow bit<<15 later in the code */
  unsigned period = 0;

  unsigned long int contador = 0;

  do
  {
      /* taps: 16 14 13 11; feedback polynomial: x^16 + x^14 + x^13 + x^11 + 1 */
      bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
      lfsr =  (lfsr >> 1) | (bit << 15);
      ++period;
      contador++;
      printf("%d\n", lfsr);
  } while (lfsr != start_state || contador == 16777215);

  printf("\n\n\t gerou %lu números\n",contador);



}

int main(void){
  lfsr();
  return 0;
}
