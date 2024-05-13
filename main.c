#include <stdio.h>

int soma(int a, int b){
    int res;
    res = a+b;
    return res;
}

int divisão(int a, int b){
    int res;
    res = a/b;
    return res;
}

int multiplicacao(int a, int b){
    int res;
    res = a*b;
    return res;
}

int subtração(int a, int b){
    int res;
    res = a-b;
    return res;
}


int main()
{   
    int x, y, res;
    int i = 0;
    while(i!=5){
        printf("***********Calculadora C*************\n");
        printf("Digite qual operação deseja realizar:\n");
        printf(" 1. Soma\n 2. Divisão\n 3. Subtração\n 4. Multiplicação\n 5. Encerrar\n");
        scanf("%d", &i);
        
        if(i==1){
            printf("Digite dois inteiros a serem somados:\n");
            scanf("%d %d", &x, &y);
            res = soma(x,y);
            printf("A soma entre %d e %d é %d\n \n", x, y, res);
        }
        
        else if(i==2){
            printf("Digite dois inteiros a serem divididos:\n \n");
            scanf("%d %d", &x, &y);
            res = divisão(x,y);
            printf("A divisão entre %d e %d é %d\n \n", x, y, res);
        }
        
        else if(i==3){
            printf("Digite dois inteiros a serem subtraídos:\n");
            scanf("%d %d", &x, &y);
            res = subtração(x,y);
            printf("A Subtração entre %d e %d é %d\n \n", x, y, res);
        }
        
        else if(i==4){
            printf("Digite dois inteiros a serem multiplicados:\n");
            scanf("%d %d", &x, &y);
            res = multiplicacao(x,y);
            printf("A multiplicacao entre %d e %d é %d\n \n", x, y, res);
        }
        
        else{
            printf("Número inválido. Reinicie o programa.\n \n");
        }
        
        
    }

    return 0;
}
