<img width=100% src="https://capsule-render.vercel.app/api?type=waving&color=00bfbf&height=120&section=header"/>
<h1 align="center"><img align="center" style="border-radius: 100%;" src="https://moodle.embarcatech.cepedi.org.br/pluginfile.php/1/theme_moove/logo/1733422525/Group%20658.png" width="300px;" alt=""><br>Animation BitDogLab</h1>

<h3 align="center">
   Para consolidar a compreensão dos conceitos relacionados ao uso de interrupções no microcontrolador RP2040 e explorar as funcionalidades da placa de desenvolvimento BitDogLab, propõe-se a seguinte tarefa prática. 
</h3>

<h4 align="center">
	🚧  Concluído 🚧
</h4>

---

Tabela de conteúdos
=================
<!--ts-->
   * [Sobre o projeto](#-sobre-o-projeto)
   * [Layout Repositorio Github](#-layout-repositorio-github)
   * [Funcionalidades](#-Funcionalidades)
   * [Como executar o projeto](#-como-executar-o-projeto)
   * [Imagens do Projeto](#-imagens-do-projeto)
     * [Imagem](#-projeto-na-extensão-wokwi-simulator-no-visual-studio)
     * [Vídeo](#-video-do-projeto)
   * [Tecnologias](#-tecnologias)
     * [Websites](#-websites)
     * [Utilitários](#user-content-server--nodejs----typescript)
   * [Contribuidores](#-contribuidores)
   * [Licença](#-licença)
<!--te-->

---

## 💻 Sobre o projeto

O projeto de Animações de Led em Linguagem C, é um sistema teste desenvolvido para fixação e experimentação do conteúdo proposto pelo curso.

Projeto desenvolvido durante o curso de Formação Básica em Software Embarcado oferecido pela [Embarcatech](https://embarcatech.softex.br).
A Formação Básica em Software Embarcado da Embarcatech é um programa de capacitação profissional técnica destinado a alunos de nível superior e técnico em Tecnologias da Informação e Comunicação (TIC) e áreas correlatas, focado em tecnologias de Sistemas Embarcados.

---

## 🎨 Layout Repositorio Github
<i>
Animation-BitDogLab

- .vscode/&emsp;&emsp;&emsp;&emsp;# Arquivos .json
  - cmake-kits.json
  - extensions.json
  - launch.json
  - settings.json

- assets/&emsp;&emsp;&emsp;&emsp;# Midias do Projeto

- lib/&emsp;&emsp;&emsp;&emsp;# biblioteca do projeto

- include/&emsp;&emsp;&emsp;&emsp;# includes do projeto
  - buttons.h
  - led_red.h
  - matriz_led.h
  - numbers.h

- lib/&emsp;&emsp;&emsp;&emsp;# bibliotecas do projeto
  - ws2812.pio
    
- src/&emsp;&emsp;&emsp;&emsp;# códigos do projeto
  - buttons.c
  - led_red.c
  - matriz_led.c
  - numbers.c

- .gitignore

- CMakeLists.txt

- LICENSE

- README.md

- diagram.json&emsp;&emsp;&emsp;&emsp;# Arquivo Wokwi do BitDogLab

- task_interruption.c&emsp;&emsp;&emsp;&emsp;# Código principal do projeto

- pico_sdk_import.cmake

- wokwi.toml
</i>

---

## ⚙️ Funcionalidades
- Teclado Matricial4X4
- Teclas Funcionais:
  - 1 à 8 interação com animações
  - A desliga leds
  - B liga LEDs na cor Azul
  - C liga LEDs na cor Vermelha
  - D liga LEDs na cor Verde
  - Botão # liga LEDs na cor Branca

---

## 🚀 Como executar o projeto

💡Siga as instruções abaixo para configurar, compilar e executar o programa.

### Pré-requisitos

Antes de começar, você vai precisar ter instalado em sua máquina as seguintes ferramentas:
  - Sistema operacional Linux, macOS ou Windows (com suporte a Makefile).
  - [Git](https://git-scm.com) (Opcional, mas recomendado),
  - [GCC compilador](https://gcc.gnu.org)
  - [Biblioteca Pico-Sdk](https://github.com/raspberrypi/pico-sdk.git) (OBS: Necessário caso queira modificar o projeto)

Além disto é bom ter um editor para trabalhar com o código como [VSCode](https://code.visualstudio.com/) com a extensão [Raspberry](https://marketplace.visualstudio.com/items?itemName=raspberry-pi.raspberry-pi-pico)  e usar o simulador web [Wokwi](https://wokwi.com) (ou a extensão do Vscode [Wokwi Simulator](https://marketplace.visualstudio.com/items?itemName=Wokwi.wokwi-vscode))

### 🎲 Dowload do Projeto

#### Dowload do Projeto no Desktop
- Opção 1:
  - Abra o terminal de comando Git Bash 
  - Clone o repositório do GitHub com o comando:
```
$ git clone https://github.com/Embarcatech-Grupo1-Subgrupo3/Animation-BitDogLab.git
```
- Opção 2:
  - No repósitorio [Animation-BitDogLab](https://github.com/Embarcatech-Grupo1-Subgrupo3/Animation-BitDogLab) aperte o Botão <i><>code</i>
  - Aperte a opção <i>Dowload ZIP</i>


### 🎲 Rodando a Animação no Wokwi

#### Wokwi Web
- Entre no navegador e digite [Wokwi.com]()
- Faça Upload dos Arquivos <i>diagram.json</i>
- Faça upload do aquivo main <i>main.c</i> e da pasta <i>src/</i>

#### Extensão Wokwi
- Abra o Visual Studio
- Na aba da extensão [Raspberry Pi Pico](https://marketplace.visualstudio.com/items?itemName=raspberry-pi.raspberry-pi-pico), aperte para Importar o projeto
- Compile o projeto
- crie um arquivo (caso não tenha no projeto) <i>wokwi.toml</i> e digite o código:
```
[wokwi]
version = 1
firmware = 'build/neopixel_pio.hex'
elf = 'build/neopixel_pio.elf'
```
- Abra o arquivo <i>diagram.json</i>


### 🎲 Rodando as Animações na placa BitdogLab

#### Placa BitDogLab
- Através de um cabo USB conecte a placa ao seu Disposito
- Aperte o Botão Bootsel e Reset 

#### VsCode Studio
- Abra o Visual Studio
- Na aba da extensão [Raspberry Pi Pico](https://marketplace.visualstudio.com/items?itemName=raspberry-pi.raspberry-pi-pico), aperte para Importar o projeto
- Compile o projeto
- Entre na pasta <i>build/</i>
- Cole o arquivo <i>neopixel_pio.uf2</i> no armazenamento placa BitDog
<br>
<strong>Obs:É necessário uma Teclado Matricial 4X4 para interagir com a placa e suas animções</strong>


---

## 🎥 Imagens do Projeto

### 💿 Diagrama Visual do Projeto
<p align="center"><img width="700" height="400" src="https://github.com/ferreiramateusalencar/task_interruption/blob/main/assets/image/diagram.png"></p>

### 💿 Video do Projeto na Extensão Wokwi



https://github.com/user-attachments/assets/1cb5ff3f-3bc1-4b1f-a468-651a5e83f5a7





- Dowload HD video completo: https://github.com/ferreiramateusalencar/task_interruption/blob/main/assets/video/demonstration.mp4

---

## 🛠 Tecnologias

As seguintes ferramentas foram usadas na construção do projeto:

#### **Websites**
-   **[Visual Studio code](https://code.visualstudio.com)**
-   **[Github](https://github.com)**
-   **[Wokwi Web](https://gcc.gnu.org)**


#### **Utilitários**

-   Editor:  **[Visual Studio Code](https://code.visualstudio.com/)**  → Extensions:  **[C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools), [C/C++ Compile Run](https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run), [Raspberry Pi Pico](https://marketplace.visualstudio.com/items?itemName=raspberry-pi.raspberry-pi-pico) e [Wokwi Simulator](https://marketplace.visualstudio.com/items?itemName=Wokwi.wokwi-vscode)**
-   **[Git](https://git-scm.com)**


---

## 👨‍💻 Contribuidores

GRUPO 1, SUBGRUPO 3 da Embarcatech <br/>
Mentor: MANOEL MESSIAS DA SILVA JUNIOR

<table>
  <tr>
    <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/86336670?v=4" width="100px;"/><br/><a href="https://github.com/ferreiramateusalencar">Mateus A. Ferreira<a/><br/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Líder">🌐</a></td>
  </tr>
</table>
      
---

## 📄 Licença

Este projeto está sob a licença do discente Mateus Alencar ferreira, da Formação Básica em Software Embarcado da Embarcatech - Veja o arquivo <a href="https://github.com/ferreiramateusalencar/task_interruption/blob/main/LICENSE">License.md<a/>

<img width=100% src="https://capsule-render.vercel.app/api?type=waving&color=00bfbf&height=120&section=footer"/>
