Algoritmo "semnome"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/02/2026
Var
ano_atual, ano_nasc, idade : inteiro


Inicio
escreval("--------------------------")
escreval("DEPARTAMENTO DE TRANSASITO")
escreval("--------------------------")
escreva("ano Atual (yyyy):")
leia(ano_atual)
escreva("Ano de Nascimento (yyyy):")
leia(ano_nasc)
idade <- ano_atual - ano_nasc
escreval("----------STATUS----------")
escreval("IDADE:",idade, " ANOS")
se (idade < 18) entao
   escreval("INAPTO A TIRAR CARTEIRA")
senao
   escreval("APTO A TIRAR CARTEIRA")
fimse
Fimalgoritmo