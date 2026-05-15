// Qual a utilidade do aprendizado do uso de ponteiro para aplicações em engenharia? 

/* Resposta:
O principal motivo de ponteiros é facilitar o acesso à um valor sem ter que copia-lo. Se você passar uma variavel pra uma função usando ponteiro (referência), você só está passando a referência. Agora se você passar uma variavel pra uma função sem usar ponteiro (valor), você só está duplicando a variável e o valor dela. Tipo isso: Variavel "ABC" (ponteiro) = 10 (valor) Se passar "ABC" para função "doSomething(int ABC)", dentro de doSomething, você terá outra variável chamada "ABC" além da original "ABC" criada anteriorment. Se usar ponteiro você só tem a referência sem criar outra variável e sem duplicar o valor.
*/