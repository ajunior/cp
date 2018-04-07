#include <stdio.h>
#include <stdlib.h>

#define MAXN 100005

int memoria[MAXN];//PD: memoria para guardar os valores e evitar rec�lculo

int fibonacci(int a){
    
    if(a==0) return 0;
    if(a==1) return 1;
    
    if(memoria[a]!=-1) return memoria[a]; //PD: se j� calculei o fibonacci de a, n�o recalculo
    
    memoria[a]=fibonacci(a-1) + fibonacci(a-2);//PD: guardo na memoria para evitar rec�lculos posteriores
    
    return memoria[a];
}

int main(){
    
    int n;
    
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++) memoria[i]=-1;//PD: inicializo mem�ria utilizada pela Prog. Din�mica
    
    printf("%d", fibonacci(n) );
    
    return 0;
} 

