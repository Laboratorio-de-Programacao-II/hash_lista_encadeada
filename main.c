#include <stdio.h>
#include "th.h"

int main() {
    int n, m, valor;
    
    TabelaHash* th = criar_tabela(TAM_TABELA);
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);
        inserir(th, valor);
    }
    
    scanf("%d", &m);
    
    /* =====================================================
     * IMPLEMENTAR: Leia os M valores a serem buscados na tabela Hash
     * e imprima "X: EXISTE" se o valor X existir ou "X: NAO EXISTE" caso contrário.
     * Leia o README.md para mais detalhes.
    * ===================================================== */
    
    liberar_tabela(th);
    
    return 0;
}
