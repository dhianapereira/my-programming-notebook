# Exercicios de recursividade

1. Localize o(s) erro(s) na seguinte função recursiva e explique como corrigi-lo(s). 
Essa função deve calcular a soma dos valores de 0 a n.

    ```c
    int soma(int n) {
        if (n == 0)
            return 0;
        else
            return n + soma(n);
    }
    ```

    **Resposta:** A função soma está sendo chamada recursivamente sem diminuir o valor de n, o que leva a chamadas infinitas e estouro de pilha. Função corrigida:

    ```c
    int soma(int n) {
        if (n == 0)
            return 0;
        else
            return n + soma(n - 1);
    }
    ```

2. Escreva uma função recursiva potencia(base, expoente) que, quando chamada, retorna
`base^expoente`. Por exemplo, potencia(3,4) = 3 * 3 * 3 * 3. Assuma que expoente é um inteiro maior ou igual a 0.

    **Resposta:**
    ```c
    #include <stdio.h>

    int potencia(int base, int expoente) {
        if (expoente == 0){
            return 1;
        }else{
            return base * potencia(base, expoente - 1);
        }
    }

    int main() {
        int base = 3, expoente = 4;
        int resultado = potencia(base, expoente);
        printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

        return 0;
    }
    ```

3. Qual o resultado da execução do programa abaixo?

    ```c
    #include <stdlib.h>
    #include <stdio.h>
    int ff (int n) {
        if (n == 1)
            return 1;
        if (n % 2 == 0)
            return ff(n/2);

        return ff((n-1)/2) + ff((n+1)/2);
    }

    int main (void) {
        printf ("%d", ff (7));
        
        return 0;
    }
    ```

    **Resposta:** O resultado é 3

4. Qual o valor de retorno da função a seguir, caso n = 27?
    ```c
    int recursao (int n) {
        if (n <= 10) {
            return n * 2;
        }
        else {
            return recursao(recursao(n/3));
        }
    }
    ```

    (A) 8 (B) 9 (C) 12 (D) 16 (E) 18


    **Resposta:** Letra D `recursao(27) = 16`

5. A série de Fibonacci é formada pela seguinte sequência de números: 0, 1, 2, 3, 5, 8, 13, 21, ... O primeiro número da série é 0, o segundo é 1 e os demais são a soma dos dois números anteriores. Escreva uma função recursiva que retorna o valor do i-ésimo termos da série de Fibonacci.

    **Resposta:** O resultado do código abaixo é 55
    ```c
    #include <stdio.h>

    int fibonacci(int n) {
        if (n <= 1){
            return n;
        }else{
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }

    int main() {
        int termo = 10;
        printf("O %dº termo da série de Fibonacci é: %d\n", termo, fibonacci(termo));
        
        return 0;
    }
    ```