#include <stdio.h>
#include <stdlib.h>

void draw();

int const border_X = 20, border_Y = 40;


char is_Alive = 't';

int main(){
  while(is_Alive != 'f')
    {
      system("cls");
      draw();
    }
  return 0;
}

void draw(){
  for(int i = 0; i < border_X + 2; i++){
    printf("#");
  }
  for (int y = 0; y < border_Y; y++){
    for (int x = 0; x < border_X + 1; x++){
      if(x == 0 || x == border_X){
	printf("#");
      }
      else
	printf(" ");
    }
    printf("\n");
  }
  for(int i = 0; i < border_X + 2; i++){
    printf("#");
  }
}
