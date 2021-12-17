#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (void){

    int K;
    int conjunto = 0;

while(scanf("%d", &K) != EOF){

        conjunto++;    
        int E;
        scanf("%d", &E);

    if(K >= 1 && K <= 20 && E >= 1 && E <= 100){

        int pontuacao [E];
        char palavra[K][50];
        char frase[E][101];
        char frase_m[E][101];
        char *ponteiro;

        //limpando o vetor de pontuacao
        for(int i = 0; i < E; i++){
            pontuacao[i] = 0;
        }

        //recebendo o vetor de palavras-chave
        for (int i = 0; i < K; i++){
            scanf("%s", palavra[i]);
        }

        //limpando e recebendo o vetor de desculpas
        for (int i = 0; i < E; i++){
            scanf(" %[^\n]", frase[i]);
        }

        //transformando desculpas em tudo minusculo
        //copiando uma matriz para outra
        for (int i = 0; i < E; i++){
            strcpy(frase_m[i], frase[i]);
        }

        //transformando a matriz recém formatada em minúscula
        for(int i = 0; i < E; i++){
            for(int j = 0; j < 101; j++){
                frase_m[i][j] = tolower(frase_m[i][j]);
            }
        }
    
    //contando a pontuação de cada desculpa
    //para a palavra "contar", dentro da desculpa, os elementos que vem antes da primeira letra e depois da última letra devem ser diferentes de qualquer letra do alfabeto
    for(int j = 0; j < E; j++){
        for(int i = 0; i < K; i++){
            ponteiro = strstr(frase_m[j], palavra[i]);
                if(ponteiro){
                    char d = (char) *(ponteiro-1);
                    char f = (char) *(ponteiro + strlen(palavra[i]));
                        if(d != 'a' && d != 'b' && d != 'c' && d != 'd' && d != 'e' && d != 'f' && d != 'g' && d != 'h' && d != 'i' && d != 'j' && d != 'k' && d != 'l' && d != 'm' && d != 'n' && d != 'o' && d != 'p' && d != 'q' && d != 'r' && d != 's' && d != 't' && d != 'u' && d != 'v' && d != 'w' && d != 'x' && d != 'y' && d != 'z' && f != 'a' && f != 'b' && f != 'c' && f != 'd' && f != 'e' && f != 'f' && f != 'g' && f != 'h' && f != 'i' && f != 'j' && f != 'k' && f != 'l' && f != 'm' && f != 'n' && f != 'o' && f != 'p' && f != 'q' && f != 'r' && f != 's' && f != 't' && f != 'u' && f != 'v' && f != 'w' && f != 'x' && f != 'y' && f != 'z'){
                            pontuacao[j]++;
                        }
            }
            }
        }
    
        printf("Conjunto de desculpas #%d\n", conjunto);

        int maior = pontuacao[0];
        

        //Encontrando maior pontuacao
        for (int i = 1; i < E; i++){
            if(pontuacao[i] > maior){
                maior = pontuacao[i];
            }
        }

        //Imprimindo em sequencia todos que possuem maior pontuacao
        for (int i = 0; i < E; i++){
            if(pontuacao[i] == maior){
                printf("%s\n", frase[i]);
            }
        }
    printf("\n");
    }
}

}
