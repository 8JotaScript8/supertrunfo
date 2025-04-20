# Super Trunfo de Países 🌍

Este projeto é uma versão simplificada do jogo **Super Trunfo**, desenvolvida em linguagem **C**. O objetivo é comparar cartas de países com base em dois atributos escolhidos pelo jogador e determinar o vencedor da partida.

## 💡 Como funciona

- O jogo recebe os dados de **duas cartas** (países), como:
  - Estado (letra)
  - Código do país (3 letras)
  - Cidade
  - População
  - Área (em km²)
  - PIB (com escolha da unidade: milhões, bilhões ou trilhões)
  - Pontos turísticos

- A partir disso, são calculados:
  - **Densidade populacional**
  - **PIB per capita**
  - **Super Poder** (uma fórmula personalizada que mistura todos os dados)

- O jogador escolhe **dois atributos diferentes** para comparação em duas rodadas.

- Ao final, o jogo exibe quem venceu cada rodada e quem foi o **vencedor final** da partida (ou se houve empate).

## 🛠️ Tecnologias utilizadas

- Linguagem C
- Compilador GCC (recomendado)
- Terminal/Prompt de Comando para entrada de dados

## 🧠 Conceitos aplicados

- Operadores ternários
- Operações com `float`, `int` e `char`
- Estrutura `switch`
- Leitura de strings e números com `scanf`
- Cálculo de métricas a partir de fórmulas matemáticas
- Comparação de strings e manipulação de arrays de caracteres

## 📂 Estrutura do código

O projeto está contido em um único arquivo `.c`. Basta compilar e rodar.

```bash
gcc supertrunfo.c -o supertrunfo
./supertrunfo
