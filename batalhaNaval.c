#include <stdio.h>

#define POSICAOX 10 //X e Y linha e coluna
#define POSICAOY 10
 
void metodoCone(){
    
}
int main() {    
    int opcao=0; //opcao do menu
    int tabuleiro[POSICAOX][POSICAOY]={
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    //posicionar navios
    for (int i = 0; i < POSICAOX; i++)
    {
       for (int j = 0; j < POSICAOY; j++)
       {
            if(i==2 && j<4){//posicao navio 1 horizontal
                tabuleiro[i][j]=3; 
            }

            if(i==4 && j>2 && j<7){//posicao navio 2 horizontal
                tabuleiro[i][j]=3; 
            }
            
            if(i==5 && j==8){//posicao navio 3 diagonal
                tabuleiro[i][j]=3;
                tabuleiro[i+1][j-1]=3;
                tabuleiro[i+2][j-2]=3;
                tabuleiro[i+3][j-3]=3;
                
            } 
            if(i==6 && j==0){//posicao navio 4 diagonal
                tabuleiro[i][j]=3;
                tabuleiro[i+1][j+1]=3;
                tabuleiro[i+2][j+2]=3;
                tabuleiro[i+3][j+3]=3;
                
            } 

       }
    }
    
    //imprimir navios
    for (int k = 0; k < POSICAOX; k++)
    {
       for (int m = 0;  m< POSICAOY; m++)
       {
            printf("  %d",tabuleiro[k][m]);
       }
        printf("\n");
    }
    printf("\n");
    printf("MENU\n");
    printf("1- Habilidade em Cone\n");
    printf("2- Habilidade em Octaedro\n");
    printf("3- Habilidade em Cruz\n");
    printf("4- Sair\n");
    
    do
    {
        int tabuleiroDois[POSICAOX][POSICAOY]={
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
        };
        int cont=0; //contadores para controle
        int contadorDois=0;
        printf("Digite a opcao: ");
        scanf("%d",&opcao);
        printf("\n");
        switch (opcao)
        {
        case 1:
            
            //habilidade de cone 
            for (int i = 0; i < POSICAOX; i++)
            {
                for (int j = 0; j < POSICAOY; j++)
                {
                    cont = i;
                    contadorDois=i;
                    if(cont==i&& j>3 && j<5+cont){
                        tabuleiroDois[i][j]=1; 
                        cont++;            
                    } 
                    if(j<4 && j>3-contadorDois && contadorDois==i){
                        tabuleiroDois[i][j]=1;
                        contadorDois++;
                    }
                    
                }
                
            }
            
            for (int q = 0; q < POSICAOX; q++)
            {
                for (int r = 0; r < POSICAOY; r++)
                {
                    printf("  %d",tabuleiroDois[q][r]);   
                }
                
                printf("\n");
            }
            break;
        case 2:
            //habilidade de octaedro
            cont=0; //contadores para controle
            contadorDois=0;
            int contadorTres=0;;
            for (int i = 0; i < POSICAOX; i++)
            {
                if(i>5){
                    
                    contadorTres++;
                }
                for (int j = 0; j < POSICAOY; j++)
                {
                    cont = i;
                    contadorDois=i;           

                    if(cont==i&& j>3 && j<5+cont && i<5){
                        tabuleiroDois[i][j]=1; 
                        cont++;            
                    } 
                    if(contadorDois==i && j<5 && j>4-contadorDois && i<5){
                        tabuleiroDois[i][j]=1;
                        contadorDois++;
                    }
                    if(j>0+contadorTres && j<5 && i>4){
                        tabuleiroDois[i][j]=1;
                    }
                    if(j>3 && j<9-contadorTres && i>4){
                        tabuleiroDois[i][j]=1;            
                    } 
                    
                    
                }
                
            }
            
            for (int q = 0; q < POSICAOX; q++)
            {
                for (int r = 0; r < POSICAOY; r++)
                {
                    printf("  %d",tabuleiroDois[q][r]);   
                }
                
                printf("\n");
            }    
            break;
        case 3:
            //habilidades de cruz 
            for (int n = 0; n < POSICAOX; n++)
            {
                for (int p = 0; p < POSICAOY; p++)
                {
                    if(p>4 && p<6){
                        tabuleiroDois[n][p]=1; 
                    }
                    if(n==5 && p>0 && p<9){
                        tabuleiroDois[n][p]=1; 
                    }
                        
                }
            }
            //imprimir habilidade
            for (int q = 0; q < POSICAOX; q++)
            {
                for (int r = 0; r < POSICAOY; r++)
                {
                    printf("  %d",tabuleiroDois[q][r]);   
                }
                
                printf("\n");
            }
            break;
        
        default:
            printf("Opcao Invalida,tente novamente.");
            break;
        }

        //imprimir efeito da habilidade nos navios
        int tabuleiroTres[POSICAOX][POSICAOY]={
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
        };

        for (int i = 0; i < POSICAOX; i++)
        {
            for (int j = 0; j < POSICAOY; j++)
            {
                if(tabuleiro[i][j]==3){
                    tabuleiroTres[i][j]=3;
                }
                if(tabuleiro[i][j]==3 && tabuleiroDois[i][j]==1){
                    tabuleiroTres[i][j]=1;
                }
                
            }
            
        }
        //imprimir resultado o efeito da habilidade nos navios
        printf("\n");
        for (int q = 0; q < POSICAOX; q++)
        {
            for (int r = 0; r < POSICAOY; r++)
            {
                printf("  %d",tabuleiroTres[q][r]);   
            }
                
            printf("\n");
        }
        
        
    } while (opcao!=4);
    

    
    return 0;
}
