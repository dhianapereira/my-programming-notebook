# Hospital Management System

Este sistema de gerenciamento de fila de atendimento de hospital permite gerenciar o atendimento de pacientes com diferentes níveis de gravidade. O programa realiza o cadastro de pacientes, tratamento, geração de relatórios e acompanhamento de internações. Pacientes são priorizados com base na gravidade, e o sistema permite que um médico registre tratamentos, realize internações e acompanhe o progresso até a alta do paciente.

- [Hospital Management System](#hospital-management-system)
  - [Estruturas de Dados Utilizadas](#estruturas-de-dados-utilizadas)
    - [Fila (Queue):](#fila-queue)
    - [Lista Encadeada (HospitalizationNode):](#lista-encadeada-hospitalizationnode)
  - [Funcionalidades](#funcionalidades)
  - [Guia de Instalação](#guia-de-instalação)
    - [1. Clone o repositório](#1-clone-o-repositório)
    - [2. Entre na pasta do projeto](#2-entre-na-pasta-do-projeto)
    - [3. Compile o projeto](#3-compile-o-projeto)
    - [4. Execute o programa](#4-execute-o-programa)
  - [Mini Tutorial](#mini-tutorial)

## Estruturas de Dados Utilizadas

### Fila (Queue):
As filas são utilizadas para gerenciar a ordem de atendimento dos pacientes, de acordo com a severidade. Cada fila tem uma capacidade pré-definida de 10 pacientes. Essa capacidade foi escolhida para facilitar testes e fornecer um exemplo concreto, mas pode ser ajustada conforme a necessidade do sistema.

A utilização de filas garante que os pacientes sejam atendidos na ordem correta, com base na severidade. As filas circulares são implementadas para otimizar o uso de espaço e facilitar a inserção e remoção de pacientes.

### Lista Encadeada (HospitalizationNode):
Pacientes internados são armazenados em uma lista encadeada, permitindo fácil inserção e remoção de pacientes. Cada nó da lista representa um paciente internado e contém as informações necessárias para o monitoramento do tratamento.

A lista encadeada foi escolhida para as internações devido à sua flexibilidade em crescer dinamicamente conforme novos pacientes são internados e antigos pacientes recebem alta.

## Funcionalidades

- **Registro de Paciente**: O paciente é cadastrado com um nome, idade, nível de gravidade e recebe um ID automático.
- **Tratamento**: Pacientes são tratados com base em sua gravidade. Um médico decide se o paciente precisa ser hospitalizado ou se pode receber alta.
- **Internação**: Pacientes que necessitam de internação são adicionados a uma lista de internações, onde o progresso de cada um é registrado diariamente.
- **Atualização de Internações**: O sistema pergunta se o paciente deve ser liberado ou continuar hospitalizado, registrando os dias de internação.
- **Geração de Relatório**: Gera um relatório com o status atual das filas de atendimento e das internações.
  
## Guia de Instalação

### 1. Clone o repositório

```bash
git clone htthttps://github.com/dhianapereira/my-programming-notebook.git
```

### 2. Entre na pasta do projeto

```bash
cd c_language/hospital_management_system
```

### 3. Compile o projeto

```bash
gcc main.c system/hospital.c system/hospitalization.c system/patient.c system/queue.c -o hospital
```

### 4. Execute o programa

```bash
./hospital
```

## Mini Tutorial

1. Ao iniciar o programa, você verá um menu com opções numeradas.
2. Para registrar um paciente, escolha a opção 1 e siga as instruções para inserir o nome, idade e gravidade do paciente.
3. Para iniciar o tratamento de pacientes, escolha a opção 2. O sistema tratará um paciente por vez, começando pelo de maior gravidade.
4. A opção 3 permite atualizar as internações, perguntando se o paciente deve continuar hospitalizado ou receber alta.
5. A opção 4 exibe a lista de todos os pacientes atualmente internados.
6. A opção 5 gera um relatório com o status das filas de atendimento e das internações.
7. Para sair do programa, escolha a opção 0.
