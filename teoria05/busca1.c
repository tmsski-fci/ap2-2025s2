#include <stdio.h>

int maior(int v[],int n){
    // Definir onde armazenar o resultado
    int resposta;
    resposta = v[0];
    // Percorrer cada elemento do vetor
    for(int i=1;i<7;i++){
        // Se valor atual for maior que o armazenado
        if(v[i]>resposta){
            // Armazenar o valor atual do vetor
            resposta = v[i];
        }
    }
    // Devolver a resposta  
    return resposta;
} 

int buscar (int valor, int v[], int n){
    int resposta = -1;
    //Percorrer o vetor
    int i = 0; 
    while (i < n){
        //Se o valor da posição atual for igual ao valor buscado
        if (v[i] == valor){
            //Armazenar a posição do valor atual
            resposta = i; 
            //Para de percorrer o vetor
            break; 
        }
        i++;
    }
    return resposta;
}
int main(){
    int idades[7] ={
        20, 22, 35, 18, 41, 19, 18
    };

    printf ("busca em arrays\n");
    int m;
    m = maior(idades,7);
    printf("A maior idade é: %d\n",m);

    int indice;
    indice = buscar(m,idades,7);
    printf("a maior idade está no índice %d do vetor\n", indice);
    return 0;
}