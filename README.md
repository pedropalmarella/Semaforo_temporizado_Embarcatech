# Semáforo Temporizado Embarcatech

Este projeto implementa uma simulação de um sistema de semáforo com o objetivo de alternar entre os estados **Vermelho**, **Amarelo** e **Verde** a cada 3 segundos, utilizando temporização por hardware. Além disso, ao pressionar o **joystick (GPIO22)**, o sistema entra no modo de gravação(no caso do kit BitDogLab. Você pode tanto testar no wokwi ou no kit BitDogLab

## Funcionalidades

- Simulação de um semáforo com três estados: **Vermelho**, **Amarelo**, e **Verde**.
- Os LEDs alternam a cada 3 segundos usando **temporização por hardware**.
- **Modo de gravação(kit BitDogLab)**: ao pressionar o joystick (conectado ao **GPIO22**).
- Simulação do semáforo utilizando o **Wokwi** ou rodando diretamente no **kit BitDogLab (RP2040)**.

## Tecnologias Utilizadas

- **Microcontrolador**: Raspberry Pi Pico 2040.
- **Kit BitDogLab**
- **Linguagem de Programação**: C (usando o **Pico SDK**).
- **Ambiente de Desenvolvimento**: Visual Studio Code (VSCode) com Pico SDK.
- **Simulador**: [Wokwi](https://wokwi.com/), uma plataforma online para simulação de circuitos e microcontroladores.

## Instalação

### Requisitos

- **Visual Studio Code** (VSCode) instalado.
- **Pico SDK** configurado no seu ambiente de desenvolvimento.
- **CMake** instalado.
- **Wokwi** para simulação (opcional).

### Passos para Configuração

1. **Instale o Visual Studio Code**:
   - Baixe o VSCode em: [https://code.visualstudio.com/](https://code.visualstudio.com/).
   
2. **Instale o Pico SDK**:
   - Siga o guia de instalação do Pico SDK em: [https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf](https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf).

3. **Clone o repositório**:
   - Abra o terminal e execute:
     ```bash
     git clone https://github.com/pedropalmarella/Semaforo_temporizado_Embarcatech.git
     ```

4. **Abra o projeto no VSCode**:
   - Abra a pasta do projeto no VSCode.

5. **Configure o ambiente de desenvolvimento**:
   - Instale as dependências e ferramentas recomendadas, como o **CMake**.

6. **Compilando o código**:
   - Abra o terminal integrado do VSCode e execute:
     ```bash
     mkdir build
     cd build
     cmake ..
     make
     ```

7. **Carregue o código no Raspberry Pi Pico**:
   - Conecte o Raspberry Pi Pico ao computador.
   - Coloque o Pico no modo de bootloader e copie o arquivo compilado `.uf2` para o dispositivo.
