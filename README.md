# Programa Conversor de Unidades - Linguagem C

Este projeto é um **Conversor de Unidades**, desenvolvido em **Linguagem C** pelo **Subgrupo 9 - Grupo 9**, realizado para completar a tarefa de depuração e versionamento da Unidade 3 da FASE 1 do **EmbarcaTech - CEPEDI**, com o objetivo de proporcionar uma experiência prática em versionamento de código, utilizando o Git e GitHub, em um fluxo de trabalho colaborativo. A atividade é parte de uma iniciativa para desenvolver habilidades no uso dessas ferramentas, com ênfase no trabalho em equipe e na colaboração.

## Objetivo

O projeto visa criar um conversor de unidades para várias categorias, como:

1. **Unidades de comprimento** (metro, centímetro, milímetro)
2. **Unidades de massa** (quilograma, grama, tonelada)
3. **Unidades de volume** (litro, mililitro, metros cúbicos)
4. **Unidades de temperatura** (Celsius, Fahrenheit, Kelvin)
5. **Unidades de velocidade** (km/h, m/s, mph)
6. **Unidades de potencia** (watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)
7. **Unidades de área** (metro quadrado, centímetro quadrado)
8. **Unidades de tempo** (segundos, minutos, horas)
9. **Unidades de medida de dados:** (bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)

Além disso, o projeto inclui a criação de uma **interface de usuário** simples e a implementação de **testes** para garantir o bom funcionamento do sistema.

## Estrutura da Equipe

A equipe é composta por até **10 integrantes**, sendo 1 lider e 9 desenvolvedores:

- **Líder**: Responsável pela gestão do repositório e integração das mudanças.
  - **Lider:** JOSÉ WILSON PASSOS DOS SANTOS JÚNIOR
- **Desenvolvedores**: Cada um responsável por uma tarefa específica relacionada a uma unidade de conversão.
  
  - **Dev:** ANA CARLA MACÁRIO SANTANA - Conversor de Potência
  - **Dev:** ANDRÉ LUIZ FALCÃO SOARES - Conversor de Comprimento
  - **Dev:** DANIEL SOARES OLIVEIRA SANTOS - Conversor de Velocidade
  - **Dev:** GABRIEL SOUZA SANTOS - Conversor de Massa
  - **Dev:** LAÍSE CAFÉ DOS SANTOS - Conversor de Tempo
  - **Dev:** RAFAEL SOUZA BARBOSA - Conversor de Volume
  - **Dev:** WALLAS FRANÇA SAMPAIO - Conversor de Temperatura
  - **Dev:** WESLEY NASCIMENTO DOS SANTOS - Conversor de Área
  - **Dev:** WILSON OLIVEIRA LIMA - Conversor de Bits

## Fluxo de Trabalho

1. O **Líder** cria o repositório no GitHub.
2. **Cada desenvolvedor cria uma conta no GitHub** e configura o ambiente de desenvolvimento (Git no VSCode).
3. Cada desenvolvedor cria uma **branch** para sua funcionalidade específica, por exemplo: `feature/comprimento`, `feature/temperatura`, etc.
4. **Commits regulares** devem ser feitos com mensagens descritivas sobre as alterações realizadas.
5. **Pull Requests** são abertos para revisão do código. O Líder revisa e aprova as alterações.
6. Caso ocorram **conflitos de merge**, eles devem ser resolvidos.
7. As funcionalidades são integradas ao código principal.
8. A **interface de usuário** é adicionada e testada.
9. **Testes básicos** são implementados para garantir que cada conversão funcione corretamente.
10. O código final é executado e validado pela equipe.

## Instruções para execução do programa

Siga as instruções abaixo para compilar e executar o programa em seu sistema operacional.

### Passo 1: Clonar o repositório

Clone o repositório para o seu computador utilizando o comando abaixo:

```bash
git clone https://github.com/JuniorJWJ/Programa-Conversor-de-Unidades-em-C.git
```

### Passo 2: Compilar o código

Após clonar o repositório, abra o terminal ou prompt de comando na pasta onde o projeto foi clonado e compile o main.c utilizando um compilador C. Siga os passos abaixo de acordo com seu sistema operacional:

#### Windows
No Windows, você tem que ter instalado o [MinGW](http://mingw.org/).

1. Abra o prompt de comando.
2. Navegue até a pasta \src onde o repositório foi clonado usando o comando `cd`:

```bash
cd caminho\para\o\repositorio
```

3. Compile o código com o compilador MinGW (certifique-se de ter o MinGW instalado):

```bash
gcc -o conversor main.c
```

#### Linux / macOS
No Linux ou macOS, o compilador GCC já vem pré-instalado na maioria das distribuições. Se não tiver, pode instalá-lo usando o gerenciador de pacotes do seu sistema.

1. Abra o terminal.
2. Navegue até a pasta /src onde o repositório foi clonado:

```bash
cd /caminho/para/o/repositorio
```

3. Compile o código com o comando:

```bash
gcc -o conversor main.c
```

### Passo 3: Executar o programa

Depois de compilar o código, execute o programa da seguinte forma:

#### Windows

```bash
./conversor.exe
```

#### Linux / macOS

```bash
./conversor
```

### Passo 4: Interagir com o programa

1. Ao rodar o programa, ele solicitará que você escolha o tipo de conversão que deseja realizar. Por exemplo, conversão de unidades de velocidade, comprimento, etc.
2. Após selecionar o tipo de conversão, será necessário escolher a conversão específica que você deseja efetuar (por exemplo, km/h para m/s, ou m/s para milhas por hora (mph)).
3. Em seguida, o programa pedirá os valores de entrada necessários para a conversão.
4. O programa calculará e exibirá o resultado da conversão na tela.

---

## Comandos Git Utilizados

Durante o desenvolvimento do projeto, os seguintes comandos Git foram utilizados:

- **`git init`**: Inicializa o repositório.
- **`git add .`**: Adiciona todos os arquivos ao repositório.
- **`git commit -m "mensagem"`**: Realiza o commit das alterações com uma mensagem descritiva.
- **`git branch nome`**: Cria uma nova branch.
- **`git checkout nome`**: Troca para uma branch específica.
- **`git merge nome`**: Integra as alterações de uma branch à outra.
- **`git push origin nome`**: Envia as alterações para o GitHub.
- **`git pull origin nome`**: Atualiza o repositório local.
