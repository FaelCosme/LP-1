#include <iostream>

// n = número de discos
// de = torre de origem "A" de acordo com o enunciado
// para = torre de destino "C" de acordo com o enunciado
// aux = torre para auxiliar "B" de acordo com o enunciado

void hanoi(int n, char de, char para, char aux)
{

    if (n == 1)
    { // Caso base: mover um disco de A para C
        std::cout << "Mova o disco de " << de << " para " << para << std::endl;
    }
    else
    {
        hanoi(n - 1, de, aux, para);
        std::cout << "Mova o disco de " << de << " para " << para << std::endl;
        hanoi(n - 1, aux, para, de);
    }
    // Contador de movimentos
    // int movimentos = 0;
    // movimentos += hanoi(n - 1, A, C, B); // Mover n-1 discos de A para C usando B como auxiliar
    // movimentos++;
    // movimentos += hanoi(n - 1, C, B, A);
    // return movimentos;
}

int main()
{
    int n;
    std::cout << "Entre com o número de discos para resolver a torre de Hanoi (A, B, C): ";
    std::cin >> n;

    // Calculando o número mínimo de movimentos necessários para resolver a torre de Hanoi com n discos
    // int movimentos = (1 << n) - 1; // Isso é equivalente a 2^n - 1

    // std::cout << "Número mínimo de movimentos necessários: " << movimentos << std::endl;

    // Chamando a função para resolver a torre de Hanoi (Recursivamente)
    hanoi(n, 'A', 'C', 'B');

    return 0;
}