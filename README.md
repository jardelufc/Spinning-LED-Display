**Spinning-LED-Display**

 Funciona utilizando o conceito de Persistence of Vision, no qual ela se baseia no fato de que uma imagem pernace na visão humana por 1/16 segundos. Ele funciona com uma fileira de leds que giram, em uma velocidade suficientemente alta, de maneira que, acendendo e apagando os leds em momentos corretos, seja possível montar uma imagem.
 
 O display montado possui 8 LEDs enfileirados e pode funcionar como um display 8xN, onde N é definido pelos parâmetros passados de delay, que define o tamanho de uma coluna de LED (representando o comprimento de um pixel). Para o motor utilizado, alimentado com 5V, os valores para o delay podem ser encontrados da seguinte forma:
 
        (K * 215) + (C * 3745) = 46120
        
K = parâmetro de delay para repetição da mensagem; C = número de caracteres apresentados no display.

Os valores constantes são relacionados a frequência do motor e duração do delay.


**Como utilizar**

 Com a estrutura mecânica, circuito montado e ligações físicas feitas corretamente, é possível utilizar a ferramenta Atollic para compilar o projeto. Após compilar, será gerado um arquivo ".hex". Com o arquivo ".hex"
