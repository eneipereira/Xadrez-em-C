# Xadrez-em-C

Repositório do trabalho 3 da disciplina **Introdução à Programação de Computadores**, do curso de **Engenharia de Software** da **UNESA (Universidade Estácio de Sá)**.

---

## Descrição

Este projeto tem como objetivo desenvolver, em linguagem **C**, uma simulação dos movimentos das peças de xadrez, utilizando estruturas fundamentais de programação, como estruturas de repetição, loops aninhados e recursividade.

O projeto é dividido em três módulos, com níveis de dificuldade crescente, visando consolidar os conhecimentos em estruturas de controle e simular os movimentos reais do jogo de xadrez.

---

## Níveis do Projeto

### Nível Novato (Implementado)

Neste nível, são simulados os movimentos de três peças do xadrez utilizando estruturas de repetição simples:

- Torre: move 5 casas para a direita usando `for`;

- Bispo: move 5 casas na diagonal superior direita usando `while`;

- Rainha: move 8 casas para a esquerda usando `do-while`.

O usuário escolhe a peça, e o programa exibe cada movimento no console.

### Nível Aventureiro

Implementa a movimentação do Cavalo, que ocorre em "L", utilizando loops aninhados. O movimento simulado é de duas casas para baixo e uma para a esquerda, exigindo o uso de pelo menos um for e outro loop (while ou do-while).

### Nível Mestre

Substitui os movimentos da Torre, Bispo e Rainha por funções recursivas. O Cavalo é aprimorado com loops aninhados complexos e controle de fluxo com continue e break. O Bispo também é reimplementado com recursividade combinada com loops aninhados, simulando um movimento diagonal completo.

---

## Como compilar

Para compilar o programa, certifique-se de ter o compilador `gcc` instalado e rode o seguinte comando no terminal:

```bash
gcc xadrez.c -o xadrez
```

---

## Como executar

Após compilar, execute o programa com:

```bash
./xadrez
```

O programa solicitará que você escolha qual peça deseja movimentar e, com base na escolha, exibirá no console os movimentos realizados.

---

## Estrutura do projeto

- `xadrez.c`: Código-fonte do programa em C.

- `.gitignore`: Arquivo para ignorar arquivos compilados e temporários.

- `README.md`: Documento com a descrição do projeto, instruções de uso e informações complementares.

- `LICENSE`: Arquivo contendo a licença de uso do projeto (MIT License).

## Autor

Enei - Curso de Engenharia de Software - UNESA

## Licença

Este projeto está sob a licença MIT. Veja o arquivo LICENSE para mais detalhes.
