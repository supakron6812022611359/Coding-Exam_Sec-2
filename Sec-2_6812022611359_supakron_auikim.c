#include <stdio.h>
void inputdata() {
 float nt,TT,to;
   char first[2],ht[2];
   int O,B,A
  
   printf("Enter number of transactions (3-12): ");
   scanf("%f" , &nt);
   for(int i=1;i<=nt;i++){
   
   printf("Enter Channel Type for TXN (%d) (O,B,A): ",i);
   scanf(" %c" , &first);

   if( first == O) {
    to= nt*15+TT;
   }else if (first == B){
    to=nt*40+TT;
   }else{
    to=nt*20+TT;
   }
}
printf("\n---Fee summary---\n");

printf("channel Type: Mixed (%c)",first);
printf("Transactions Made(%f): %c",nt,first);
}


int main() {
   inputdata();
}
 