# 🃏 Super Trunfo – Nível Aventureiro

Este projeto é uma implementação em **C** do jogo **Super Trunfo** (nível aventureiro).  
O programa permite cadastrar duas cartas (representando cidades/estados) e comparar atributos escolhidos pelo jogador por meio de um **menu interativo**.

---

## 🚀 Funcionalidades

- Cadastro de duas cartas com os seguintes atributos:
  - Estado (string)
  - Código (string)
  - Nome da Cidade (string)
  - População (inteiro)
  - Área (float)
  - PIB (float)
  - Número de Pontos Turísticos (inteiro)

- Cálculos automáticos:
  - **Densidade Populacional** = População / Área  
  - **PIB per capita** = PIB / População  
  - **Super Poder** = soma ponderada de todos os atributos

- Menu interativo com escolha de atributo:
  1. População  
  2. Área  
  3. PIB  
  4. Número de pontos turísticos  
  5. Densidade demográfica *(menor vence)*  
  6. Super Poder  

- Comparação com regras:
  - Regra geral: vence o maior valor.  
  - Exceção: Densidade Demográfica → vence o menor valor.  
  - Empates são tratados corretamente.  

---


