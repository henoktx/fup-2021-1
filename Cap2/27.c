#include <stdio.h> 

    int main () {
        
        int horasTrabalhadas, horasExtras, dependentes;
        float salarioMinimo, salarioBruto, salarioMes, salarioLiquido, salarioFinal, valorHora, valorHoraExtra, impostoRenda, gratificacao;

        printf ("Informe seus dados abaixo:\nSalário mínimo: ");
        scanf ("%f", &salarioMinimo);
        printf ("Número de horas trabalhadas: ");
        scanf ("%d", &horasTrabalhadas);
        printf ("Número de dependentes: ");
        scanf ("%d", &dependentes);
        printf ("Número de horas extras: ");
        scanf ("%d", &horasExtras);
        
        valorHora = salarioMinimo / 2;
        salarioMes = (horasTrabalhadas * valorHora) + (dependentes * 32);
        valorHoraExtra = valorHora * 1.5 * horasExtras;
        salarioBruto = salarioMes + horasExtras; 

        if (salarioBruto >= 200 && salarioBruto <= 500)
            impostoRenda = 0.9;
        else
            impostoRenda = 0.8;
        
        salarioLiquido = salarioBruto * impostoRenda;

        if (salarioLiquido <= 350)
            gratificacao = 100;
        else
            gratificacao = 50;

        salarioFinal = salarioLiquido + gratificacao;
        
        printf ("--------------------------------------------------\n");
        printf ("O salário final a ser recebido é de: R$%.2f.\n", salarioFinal);
        
        return 0;

    }