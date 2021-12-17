# Linguagem-C-lab03
Terceiro laboratório da disciplina Estrutura de Dados da Universidade Estadual de Campinas

As piores desculpas
Professores frequentemente ouvem desculpas de alunos que não entregaram seus trabalhos. Algumas são relatos de casualidades cotidianas, outras são apenas esfarrapadas. Escreva um programa para escolher as piores desculpas segundo certas palavras-chave.

[Entrada]
A entrada para o programa consiste de vários conjuntos de dados. A linha 1 de cada conjunto tem dois inteiros. O primeiro, K, (1 ≤ K ≤ 20) define o número de palavras-chave. O segundo, E, (1 ≤ E ≤ 100) define o número de desculpas no conjunto. As linhas 2 a K + 1 têm uma palavra-chave cada. Todas as palavras-chave terão apenas caracteres alfabéticos minúsculos e não terão brancos.

As linhas K + 2, ..., K + E + 1 têm uma desculpa cada. Cada desculpa poderá conter qualquer caractere alfanumérico maiúsculo ou minúsculo, espaços ou quaisquer dos sinais de pontuação ".,!? e não excederá 100 caracteres de comprimento. Nenhuma desculpa será formada apenas por espaços.

[Saída]
Seu programa deve imprimir as piores desculpas em cada conjunto de desculpas. As piores desculpas são aquelas que contêm o maior número de ocorrências de palavras-chave. Uma palavra-chave ocorre em uma desculpa se ela existir na desculpa de forma contígua e se for delimitada pelo início da linha, pelo fim da linha, por um caractere não alfabético ou por um espaço.

Para cada conjunto de desculpas, seu programa deve imprimir uma única linha com o número do conjunto imediatamente após a cadeia "Conjunto de desculpas #". As linhas seguintes devem conter as piores desculpas, uma por linha, exatamente como aparecem na entrada. Se houver mais de uma pior desculpa, seu programa deverá imprimir todas elas na mesma ordem em que aparecem na entrada. Após a saída para cada conjunto seu programa deve imprimir uma linha em branco.
