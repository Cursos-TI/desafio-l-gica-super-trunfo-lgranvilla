# 🃏 Super Trunfo - Nível: Novato

Este é um projeto simples desenvolvido em linguagem C que simula uma comparação entre duas cartas de cidades brasileiras no estilo do jogo **Super Trunfo**. Cada carta contém informações como população, área, PIB, pontos turísticos e outros dados relevantes que são comparados para determinar a carta vencedora em cada atributo.

## 🚀 Objetivo

Praticar a lógica de programação e manipulação de dados em C utilizando variáveis, operadores aritméticos, estruturas de decisão e entrada/saída com `scanf` e `printf`.

---

## 🧠 Conceitos aplicados

- Tipos de dados em C (`char`, `int`, `unsigned long int`, `double`)
- Entrada e saída de dados
- Operadores aritméticos
- Estruturas de decisão (`if/else`)
- Cálculo de atributos como densidade populacional e PIB per capita
- Comparação de "super poderes" com base em vários critérios

---

## 📋 Como funciona

1. O programa solicita ao usuário que insira os dados de **duas cartas**.
2. Com base nos dados informados, ele calcula:
   - Densidade populacional (`população / área`)
   - PIB per capita (`PIB / população`)
   - Super Poder (soma de todos os atributos incluindo uma inversa da densidade)
3. Em seguida, compara cada atributo e mostra quem vence em cada um deles.
4. Exibe os resultados no console.

---

## 📥 Exemplo de entrada

```text
Digite a letra do estado:
C
Digite o código da carta:
CE001
Digite o nome da cidade (sem espaços):
Fortaleza
Digite a população:
2669342
Digite a área:
312.35
Digite o PIB:
67895400000
Digite o número de pontos turísticos:
15

👨‍💻 Autor
Lucas Granvilla
Estudante de Ciência da Computação Na Faculdade Estácio/rs
“Tenho um coração analógico, neste mundo digital.”

📌 Observações
Este projeto é parte da evolução prática na linguagem C no nível iniciante (Mestre), com uso restrito a comandos básicos como scanf e printf.