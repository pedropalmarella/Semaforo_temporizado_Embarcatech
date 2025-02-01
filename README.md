# Semáforo Temporizado Embarcatech

Este projeto implementa um sistema de semáforo temporizado, desenvolvido como parte da iniciativa Embarcatech. O semáforo tem como objetivo simular o controle de luzes de um semáforo, alternando entre os estados **Vermelho**, **Amarelo** e **Verde** a cada 3 segundos, utilizando temporização por hardware. Além disso, ao pressionar o **joystick (GPIO22)**, o sistema entra no modo de gravação.

## Descrição

O projeto foi desenvolvido utilizando o **Raspberry Pi Pico 2040** com o **Pico SDK**, e é possível testar o funcionamento do semáforo diretamente no hardware ou em um simulador como o **Wokwi**. O sistema controla o semáforo alterando entre os estados **Vermelho**, **Amarelo** e **Verde**, cada um com temporização de 3 segundos, usando temporização por hardware. Além disso, ao pressionar o joystick conectado ao **GPIO22**, o sistema entra no modo de gravação, onde é possível configurar ou alterar os tempos de duração dos estados do semáforo.

## Funcionalidades

- Controle de um semáforo com três estados: **Vermelho**, **Amarelo**, e **Verde**.
- Os LEDs alternam a cada 3 segundos usando **temporização por hardware**.
- **Modo de gravação**: ao pressionar o joystick (conectado ao **GPIO22**), o sistema entra no modo de gravação para ajustar a duração de cada fase do semáforo.
- Simulação do semáforo utilizando o **Wokwi** ou rodando diretamente no **Raspberry Pi Pico**.

## Tecnologias Utilizadas

- **Microcontrolador**: Raspberry Pi Pico 2040.
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

### Usando o Simulador Wokwi (Opcional)

1. Acesse o site [Wokwi](https://wokwi.com/).
2. Crie um novo projeto e escolha a opção para simular o Raspberry Pi Pico.
3. Importe o código do seu projeto para o simulador.
4. Inicie a simulação e veja o semáforo em funcionamento.

## Como Usar

1. Compile o projeto utilizando o VSCode.
2. Carregue o código no Raspberry Pi Pico ou use o simulador Wokwi para testar.
3. Ao iniciar o sistema, os LEDs do semáforo começarão a alternar entre os estados **Vermelho**, **Amarelo** e **Verde**, a cada 3 segundos, utilizando temporização por hardware.
4. **Modo de gravação**: Se o joystick (conectado ao GPIO22) for pressionado, o sistema entrará no modo de gravação, permitindo configurar ou ajustar a duração de cada estado do semáforo.

## Contribuindo

Contribuições são bem-vindas! Se você encontrou um bug ou tem uma ideia para melhorar o projeto, fique à vontade para abrir um **issue** ou enviar um **pull request**.

1. Faça um fork deste repositório.
2. Crie uma branch com sua feature ou correção: `git checkout -b minha-nova-feature`.
3. Faça as modificações e comite-as: `git commit -am 'Adiciona nova feature'`.
4. Envie para o repositório remoto: `git push origin minha-nova-feature`.
5. Abra um pull request para o repositório original.

## Licença

Este projeto está licenciado sob a [Nome da Licença] - consulte o arquivo [LICENSE](LICENSE) para mais detalhes.
