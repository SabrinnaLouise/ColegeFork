#include <stdio.h>

int main(){
float A,B,C,D,Media, resposta2;
char resposta[50];
 
 
scanf("%f %f %f %f",&A,&B,&C,&D);

Media=((A*2)+(B*3)+(C*4)+(D*1))/(2+3+4+1);

printf("Media:%.1f\n",Media);

printf("Aluno teve exame? ");
scanf("%s",&resposta);

if("%s",resposta[50]=="%s","sim"){
    printf("Nota exame: ");
   scanf("%f",&resposta2);
 
     printf("Nota final:%.1f\n ",(Media=((A*2)+(B*3)+(C*4)+(D*1)+(resposta2))/(2+3+4+1)) );
}

if(Media>=7){
 printf("Aluno aprovado. ");

}
if(Media<4.9){
 printf("Aluno reprovado. ");

}
if(Media<=5 || Media<=6.9){
 printf("Aluno em Exame. ");

}
}