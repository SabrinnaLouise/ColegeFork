  #include <stdio.h>
#include <string.h> 
int main(){
float A,B,C,D;
  
 int n;
 printf("Quantos Alunos foram avaliados?");
  scanf("%d",&n);
 float notas[n];
 float Media[n];
 char nome[n][50];
 for(int i=1;i<=n;i++){
  printf("Nome do aluno:\n"); 
   
  scanf("%s",nome[i]);
printf("Nota do  estudante %i\n",(i));
scanf("%f %f %f %f",&A,&B,&C,&D);
 
  Media[i]=((A*2)+(B*3)+(C*4)+(D*1))/10;

printf("Media:%.f\n",Media[i]);

if(Media[i]>=5 && Media[i]<=6.9){
 printf("Aluno em Exame. "); 
 
printf("Nota exame: ");
   scanf("%f",&notas[i]);
     printf("Nota final:%.1f\n ", Media[i]=( Media[i]+notas[i])/2);
}
 
 
 }
 for(int i=1;i<=n;i++){
     printf("Aluno: %s\n",nome[i]);
    
 if(Media[i]>=7){
 printf("Aluno aprovado.\n ");

}
else if(Media[i]<=4.9){
 printf("Aluno reprovado.\n ");

}
 }
 
}