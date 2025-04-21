# ⚓ Batalha Naval com Habilidades Especiais

Este é um projeto em linguagem C que simula um jogo de **Batalha Naval** com um toque estratégico adicional: habilidades especiais com áreas de efeito (Cone, Cruz e Octaedro). O tabuleiro é exibido diretamente no terminal, com uma representação visual simples e clara.

## 🎮 Funcionalidades

- Tabuleiro 10x10 representando o campo de batalha.
- Posicionamento fixo de navios para fins de visualização.
- Implementação de 3 habilidades especiais com área de efeito:
  - **Cone**: área em forma de cone expandindo de cima para baixo.
  - **Cruz**: área em forma de cruz com centro definido.
  - **Octaedro (losango)**: área simétrica em formato de diamante.
- Sobreposição das habilidades no tabuleiro, respeitando os limites.
- Exibição visual clara:
  - `0` = Água
  - `3` = Navio
  - `5` = Área de efeito de habilidade

## 🧠 Conceitos abordados

- Matrizes bidimensionais
- Estruturas de repetição (loops aninhados)
- Condicionais (`if`, `else`)
- Separação de lógica em funções
- Boas práticas de organização e legibilidade de código

## 📷 Exemplo de saída no terminal

```
-- TABULEIRO BATALHA NAVAL --

   A B C D E F G H I J
 0 0 0 0 0 0 3 0 0 0
 1 0 0 0 0 3 0 0 0 0
 2 0 0 0 3 0 0 0 0 0
 3 0 3 3 3 0 0 0 0 3
 4 0 0 0 0 5 5 5 0 3
 5 0 0 0 5 5 5 0 0 3
 6 0 0 5 5 5 0 0 0 0
 7 0 0 0 0 0 3 0 0 0
 8 0 0 0 0 0 0 3 0 0
 9 0 0 0 0 0 0 0 3 0
```

## 🛠 Como compilar e executar

### Requisitos
- Compilador C (como `gcc`)

### Compilando:
```bash
gcc batalha_naval.c -o batalha_naval
```

### Executando:
```bash
./batalha_naval
```

## 📁 Estrutura do projeto

```
📦 batalha-naval
 ┣ 📄 batalha_naval.c
 ┗ 📄 README.md
```

## 📌 Notas

- As posições dos navios e habilidades são definidas diretamente no código, para facilitar testes e visualização.
- A lógica pode ser facilmente expandida para incluir efeitos de dano ou interação entre jogadores.

## ✨ Feito com dedicação por Ariane Emidio 🚀
- Aluna da Faculdade de Ciencia da Computação.
