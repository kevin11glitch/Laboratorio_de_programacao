
/*
Considere o código abaixo: 

int i = 5, *p;
p = &i;

printf("%x %d %d %d %d", p, *p+2, **&p, 3**p, **&p+4);

Qual a saída apresentada pelo programa?
*/

/*Resposta:

saidas respectivamente: 
    1ª exibe o endereço da variavel i em hexadecimal,
    2ª acessa o valor de i (5) e soma 2. Resultado: 7,
    3ª &p é o endereço do ponteiro. O primeiro * acessa o conteúdo de &p, e o segundo * acessa o valor apontado por p. Resultado: 5,
    4ª multiplica 3 pelo valor de i (5). Resultado: 15,
    5ª &p resulta no valor de i (5). Somando 4, o resultado é 9.
*/
