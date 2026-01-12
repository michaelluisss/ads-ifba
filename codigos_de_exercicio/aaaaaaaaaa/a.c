#include <stdio.h>
int main(){
    int number[] = {2,7,11,15};
    int target = 9;
    int sub;
    int saida[2];
    int j=0;
    
    for(int i = 0 ; i < 4;i++){if(target > number[j]){
                saida[0] = number[j];
            }
            if(number[i] == target - (target - number[j])){
                    saida[1] = number[i];}
    }
        for( j= 0;j < 4;j++){
            
            
                   
                }
        
         
     printf("saida ={ %d,%d}\n\n", saida[0],saida[1]);
}