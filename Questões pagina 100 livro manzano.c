#include<stdio.h>
#include<math.h>

int fatorial(int x){
    int i, j=1;
    for(i=x;i>1;i--){
        j *= i;
    }
    return j;
}
void fun1(){
    int A[5][3],B[5][3],C[5][3],i,j;
    printf("Contruindo a matriz A:\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("Digite um valor para A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Contruindo a matriz B:\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("Digite um valor para B[%d][%d]",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("Contruindo a matriz C:\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j] + B[i][j];
        }
    }
    printf("Exibindo a matriz C:\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}

void fun2(){
    int M[4][5],i,j;
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("Digite um valor para M[%d][%d]",i,j);
            scanf("%d",&M[i][j]);
        }
    }
    
    printf("Exibindo a matriz M:\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
}

void fun3(){
    int A[10], C[10][3], i;
    printf("Preenchendo A:\n");
    for(i=0; i<10;i++){
        printf("Digite A[%d]",i);
        scanf("%d",&A[i]);
    }
    printf("Criando a matriz C\n");
    for(i=0;i<10;i++){
        C[i][0] = A[i]+5;
        C[i][1] = fatorial(A[i]);
        C[i][1] = pow(A[i],2);
    }
    
      
    printf("Exibindo a matriz C:\n");
    for(i=0;i<10;i++){
            printf("%d\t",C[i][0]);
            printf("%d\t",C[i][1]);
            printf("%d\t",C[i][2]);
        printf("\n");
    }
}



int main()
{
   
   do{
       printf("Digite uma opcao:");
       int op;
       printf("\n1 - letra A  \t \n2 - letra C\t \n3 - letra D \t  \n4 - Sair:");
       scanf("%d",&op);
       if(op==4) break;
       switch(op){
           case 1:
                fun1();
                break;
           case 2:
               fun2();
               break;
           case 3:
                fun3();
                break;
           default:
                printf("Opcao invalida:");
                break;
       }
   }while(1);
    return 0;
}
