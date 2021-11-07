/* 
EJERCICIO 4 

1) En una terminal de comandos de Linux se desea
    a) Compliar un programa teniendo en cuenta las siguientes caracteristicas:
        -El codigo se llama "main.c"
        -Se quieren ver los Warnings
        -Se quiere definir la cte DEBUG
        -El ejecutable se llamara recuperatorio
        -Se quiere generar la informacion para debuggearlo

Codigo:
        gcc main.c -o -D DEBUG recuperatorio -g -Wall

    b) Ejecutar el archivo compilado
Codigo:
        ./recuperatorio

    c) Debuggear el codigo
Codigo: 
        gdb recuperatorio

2) Nombrar al menos dos comando de gdb, indicando para que sirven

    - print <var> : este comando sirve para imprimir en pantalla el valor 
    de la variable "var"

    - break <num> : este comando sirve para poner un freno en el codigo, 
    cuando este se este ejecutando, en el cual en "num" se detalla el
    numero de la linea en el cual se desea frenar el programa