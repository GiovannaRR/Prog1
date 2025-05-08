// Questão 1)

//Analise a sequencia de instrucoes a seguir:
//int x = 10, y = 5;
//int *ptr1 = &x;
//int *ptr2 = &y;

//(a)y = ptr1 == ptr2; Falsa eles são diferentes, então a comparação resulta em false. Portanto, y receberá 0.
//(b) ptr1 += ptr2; Falso a operação ptr1 += ptr2 não é válida porque não é possível adicionar um ponteiro a outro ponteiro em C
//(c) x = (*ptr1) - (*ptr2); Verdadeiro x = 10 - 5, onde que x = 5.
//(d) x = ptr1 || ptr2; Verdadeiro pelo menos um dos ptr é valido
//(e) y = (*ptr2)++; Verdadeiro ptr2 aponta, mas retorna o valor original antes do incremento. 
//portanto, y receberá 5 e o valor de y será atualizado para 6.
//(f) y = ptr1 && ptr2; Verdadeiro ambos sao != de NULL