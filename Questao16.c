// Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas computacionais. Geralmente, estas medidas 
// são realizadas com o auxílio de funções em C quelêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes).
// Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução das implementações que você criou para os 
// dois problemas de ordenação anteriores,considerando apenas arrays de elementos tipo int e compare os resultados obtidos. O que se
// conclui nesse caso?

/*  

Com base nos tempos de execução medidos para os programas sendo alterados para inteiros do tipo int, podemos concluir que a implementação 
utilizando a função qsort() (questão 14 - em segundos foi: 0.000004) foi a mais lenta, enquanto a implementação utilizando uma função de 
ordenação própria com ponteiros para função (questão 15) foi a mais rápida (de: 0.000002 segundos). Isso pode ser explicado pelo fato de 
que a função qsort() precisa executar diversas comparações para ordenar o array, enquanto a função de ordenação própria pode ser otimizada 
para a tarefa específica de ordenar apenas inteiros.

Além disso, a implementação utilizando alocação dinâmica de memória (questão 13), foi de: 0.000002, foi mais rápida do que a implementação 
com qsort(), mas mais lenta do que a implementação com ponteiros para função. Isso pode ser explicado pelo fato de que a alocação dinâmica 
de memória pode ser mais lenta do que simplesmente ordenar os elementos em um array já alocado em memória.

No geral, podemos concluir que o desempenho de diferentes implementações de ordenação pode variar significativamente e deve ser avaliado 
com cuidado para cada caso específico.

dados:

A quantidade de elementos ultilizados em cada programa foi: 4. Em todos eles foram usados os mesmos valores que
são eles: 90 06 13 22. Os quais foram ordenados corretamente em todos os casos.

*/