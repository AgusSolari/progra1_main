cmake_minimum_required(VERSION 3.20)
project(progra1_main)

set(CMAKE_CXX_STANDARD 14)

include_directories(TP12)
include_directories(TP10)
include_directories(TP7/ej5)
include_directories("TP7/make test")
include_directories(TP9/ej3)

add_executable(progra1_main
        Funciones/factorial.c
        Funciones/potencia.c
        Funciones/prodescalar
        Funciones/prodescalar.c
        Funciones/seno.c
        Funciones/swap.c
        Funciones/toLower.c
        Funciones/toUpper.c
        Funciones/transpuesta.c
        TP12/main.c
        TP12/pin_handler.c
        TP12/pin_handler.h
        "Parciales/1° Parcial/2015/ej1"
        "Parciales/1° Parcial/2015/ej1.c"
        "Parciales/1° Parcial/2015/ej2"
        "Parciales/1° Parcial/2015/ej2.c"
        "Parciales/1° Parcial/2015/ej3"
        "Parciales/1° Parcial/2015/ej3.c"
        "Parciales/1° Parcial/2015/ej4"
        "Parciales/1° Parcial/2015/ej4.c"
        "Parciales/1° Parcial/2015/ej5"
        "Parciales/1° Parcial/2015/ej5.c"
        "Parciales/1° Parcial/2015/ej6"
        "Parciales/1° Parcial/2015/ej6.c"
        "Parciales/1° Parcial/2015/p1 prog1 2015Bv2.pdf"
        "Parciales/1° Parcial/2018 1C/2018 1C 1re Parcial.pdf"
        "Parciales/1° Parcial/2018 1C Recu/2018 1C 1re Parcial Recup.pdf"
        "Parciales/1° Parcial/2020 1C/2020 1C 1P con rtas.pdf"
        "Parciales/1° Parcial/2020 1C/ej1"
        "Parciales/1° Parcial/2020 1C/ej1.c"
        "Parciales/1° Parcial/2020 1C Recu/2021-1C-1P-recu.pdf"
        "Parciales/1° Parcial/2020 1C Recu/ej1"
        "Parciales/1° Parcial/2020 1C Recu/ej1.c"
        "Parciales/1° Parcial/2020 1C Recu/ej2"
        "Parciales/1° Parcial/2020 1C Recu/ej2.c"
        "Parciales/1° Parcial/2020 1C Recu/ej3.c"
        "Parciales/1° Parcial/2020 1C Recu/ej4.c"
        "Parciales/1° Parcial/2021 1C/2021-1C-1P.pdf"
        "Parciales/1° Parcial/2021 1C/ej1"
        "Parciales/1° Parcial/2021 1C/ej1.c"
        "Parciales/1° Parcial/2021 1C/ej2.c"
        "Parciales/1° Parcial/2021 1C/ej3.c"
        "Parciales/1° Parcial/2021 1C/ej4"
        "Parciales/1° Parcial/2021 1C/ej4.c"
        "Parciales/1° Parcial/2021 1C/ej5"
        "Parciales/1° Parcial/2021 1C/ej5.c"
        "Parciales/1° Parcial/2021 1C/pruebas"
        "Parciales/1° Parcial/2021 1C/pruebas.c"
        "Parciales/1° Parcial/2021 2C/ej3"
        "Parciales/1° Parcial/2021 2C/ej3.c"
        "Parciales/1° Parcial/2021 2C/ej5"
        "Parciales/1° Parcial/2021 2C/ej5.c"
        "Parciales/1° Parcial/2021 2C/test.txt"
        "Parcialitos/1/Parcialito 0.pdf"
        "Parcialitos/1/Parcialito 1.pdf"
        "Parcialitos/1/Parcialito1 - printf, constantes, variables, operadores.pdf"
        "Parcialitos/1/Parcialito1 foto.jpeg"
        Parcialitos/2/PA2
        Parcialitos/2/PA2.c
        Parcialitos/2/PA2EJ1
        Parcialitos/2/PA2EJ1.c
        Parcialitos/2/PA2EJ2
        Parcialitos/2/PA2EJ2.c
        "Parcialitos/2/Parcialito 2.pdf"
        Parcialitos/2/Parcialito2_-_funciones_scopes_while_io_cli.pdf
        Parcialitos/3/pa3.2.c
        Parcialitos/4/1/ej1.c
        Parcialitos/4/1/ej2
        Parcialitos/4/1/ej2.c
        "Parcialitos/4/1/Parcialito 4.1.pdf"
        Parcialitos/4/2/ej1
        Parcialitos/4/2/ej1.c
        Parcialitos/4/2/ej2
        Parcialitos/4/2/ej2.c
        Parcialitos/4/2/ej3
        Parcialitos/4/2/ej3.c
        "Parcialitos/4/2/Parcialito 4.2.pdf"
        "Parcialitos/PARCIALITOS TIPO DE DATOS AVANZADOS, HEAP, GITHUB Y RECURSIVIDAD.pdf"
        Pruebas/test1
        Pruebas/test1.c
        Pruebas/test1.exe
        Pruebas/test2
        Pruebas/test2.c
        Pruebas/test2.exe
        Pruebas/test3.c
        Pruebas/test3.exe
        Pruebas/test4
        Pruebas/test4.c
        Pruebas/test4.exe
        Pruebas/test_plot
        Pruebas/test_plot.c
        Pruebas/text.txt
        TP1/a.out
        TP1/ejercicio6.c
        TP1/ejercicio6.exe
        TP1/ejercicio8a.c
        TP1/ejercicio8a.exe
        TP1/ejercicio8b
        TP1/ejercicio8b.c
        TP1/ejercicio8b.exe
        TP1/ejercicio8c
        TP1/ejercicio8c.c
        TP1/ejercicio8d
        TP1/ejercicio8d.c
        TP1/ejercicio8e
        TP1/ejercicio8e.c
        TP10/cmake-build-debug/Testing/Temporary/LastTest.log
        TP10/cmake-build-debug/cmake_install.cmake
        TP10/cmake-build-debug/CMakeCache.txt
        TP10/cmake-build-debug/Makefile
        TP10/cmake-build-debug/TP10
        TP10/cmake-build-debug/TP10.cbp
        TP10/CMakeLists.txt
        TP10/maniposta.c
        TP10/puerto.c
        TP10/puerto.h
        TP2/EJ1
        TP2/EJ1.c
        TP2/EJ2
        TP2/EJ2.c
        TP2/EJ3
        TP2/EJ3.c
        TP2/EJ4
        TP2/EJ4.c
        TP2/EJ5
        TP2/EJ5.c
        TP2/EJ6
        TP2/EJ6.c
        TP2/P07
        TP2/P07.c
        TP3/a.out
        TP3/EJ1.c
        TP3/EJ2
        TP3/EJ2.c
        TP3/EJ3
        TP3/EJ4
        TP3/EJ4.c
        TP3/EJ5
        TP3/EJ5.c
        TP3/test.txt
        TP4/ej1
        TP4/ej1.c
        TP4/ej2
        TP4/ej2.c
        TP4/ej3
        TP4/ej3.c
        TP4/ej4
        TP4/ej4.c
        TP4/mod3
        TP4/mod3.c
        "TP4/TP4 - Arreglos.pdf"
        TP5/-g
        TP5/ej1
        TP5/ej1.c
        TP5/ej2
        TP5/ej2.c
        TP5/ej3
        TP5/ej3.c
        TP5/ej4
        TP5/ej4.c
        TP5/ej5
        TP5/ej5.c
        TP5/ej6.c
        TP5/ej7
        TP5/ej7.c
        TP5/ej8
        TP5/ej8.c
        TP5/ej9
        TP5/ej9.c
        TP5/getstring
        TP5/getstring.c
        "TP5/TP5 - Punteros.pdf"
        TP5/word
        TP5/word.c
        TP6/ej1.c
        TP6/ej10.c
        TP6/ej11.c
        TP6/ej12.c
        TP6/ej2.c
        TP6/ej3
        TP6/ej3.c
        TP6/ej4.c
        TP6/ej5.c
        TP6/ej6.c
        TP6/ej7.c
        TP6/ej8.c
        TP6/prueba.c
        "TP6/TP6 - Repaso Examen.pdf"
        TP7/ej1/file1.c
        TP7/ej1/file2.c
        TP7/ej2/inpunt.c
        TP7/ej2/main.c
        TP7/ej2/makefile
        TP7/ej2/output.c
        TP7/ej2/process1.c
        TP7/ej2/process2.c
        TP7/ej3/ej3
        TP7/ej3/ej3.c
        TP7/ej4/ej4.c
        TP7/ej4/file1.c
        TP7/ej4/file2.c
        TP7/ej5/compilacion.txt
        TP7/ej5/config.h
        TP7/ej5/game.c
        TP7/ej5/game.h
        TP7/ej5/main.c
        TP7/ej5/makefile
        TP7/ej5/utils.c
        TP7/ej5/utils.h
        "TP7/make test/fun1.c"
        "TP7/make test/fun1.h"
        "TP7/make test/fun2.c"
        "TP7/make test/fun2.h"
        "TP7/make test/main"
        "TP7/make test/main.c"
        "TP7/make test/makefile"
        "TP7/TP7 - Multiarchivo y Makefile.pdf"
        TP8/ej4/ej4
        TP8/ej4/ej4.c
        TP8/ej4/print
        TP8/ej4/print.c
        TP8/ej4/prueba
        TP8/ej4/prueba.c
        "TP8/ej4/TP8 Grupo 4.zip"
        TP8/ej1
        TP8/ej1.c
        TP8/ej2
        TP8/ej2.c
        TP8/ej3
        TP8/ej3.c
        "TP8/TP8 - Punteros Avanzados.pdf"
        TP9/ej1/build/Debug/GNU-Linux/main.o
        TP9/ej1/build/Debug/GNU-Linux/main.o.d
        TP9/ej1/dist/Debug/GNU-Linux/ej1
        TP9/ej1/nbproject/private/c_standard_headers_indexer.c
        TP9/ej1/nbproject/private/configurations.xml
        TP9/ej1/nbproject/private/cpp_standard_headers_indexer.cpp
        TP9/ej1/nbproject/private/launcher.properties
        TP9/ej1/nbproject/private/Makefile-variables.mk
        TP9/ej1/nbproject/private/private.xml
        TP9/ej1/nbproject/configurations.xml
        TP9/ej1/nbproject/Makefile-Debug.mk
        TP9/ej1/nbproject/Makefile-impl.mk
        TP9/ej1/nbproject/Makefile-Release.mk
        TP9/ej1/nbproject/Makefile-variables.mk
        TP9/ej1/nbproject/Package-Debug.bash
        TP9/ej1/nbproject/Package-Release.bash
        TP9/ej1/nbproject/project.xml
        TP9/ej1/main.c
        TP9/ej1/Makefile
        TP9/ej2/build/Debug/GNU-Linux/main.o
        TP9/ej2/build/Debug/GNU-Linux/main.o.d
        TP9/ej2/dist/Debug/GNU-Linux/ej2
        TP9/ej2/nbproject/private/c_standard_headers_indexer.c
        TP9/ej2/nbproject/private/configurations.xml
        TP9/ej2/nbproject/private/cpp_standard_headers_indexer.cpp
        TP9/ej2/nbproject/private/launcher.properties
        TP9/ej2/nbproject/private/Makefile-variables.mk
        TP9/ej2/nbproject/private/private.xml
        TP9/ej2/nbproject/configurations.xml
        TP9/ej2/nbproject/Makefile-Debug.mk
        TP9/ej2/nbproject/Makefile-impl.mk
        TP9/ej2/nbproject/Makefile-Release.mk
        TP9/ej2/nbproject/Makefile-variables.mk
        TP9/ej2/nbproject/Package-Debug.bash
        TP9/ej2/nbproject/Package-Release.bash
        TP9/ej2/nbproject/project.xml
        TP9/ej2/main.c
        TP9/ej2/Makefile
        TP9/ej3/nbproject/private/c_standard_headers_indexer.c
        TP9/ej3/nbproject/private/configurations.xml
        TP9/ej3/nbproject/private/cpp_standard_headers_indexer.cpp
        TP9/ej3/nbproject/private/launcher.properties
        TP9/ej3/nbproject/private/Makefile-variables.mk
        TP9/ej3/nbproject/private/private.xml
        TP9/ej3/nbproject/configurations.xml
        TP9/ej3/nbproject/Makefile-Debug.mk
        TP9/ej3/nbproject/Makefile-impl.mk
        TP9/ej3/nbproject/Makefile-Release.mk
        TP9/ej3/nbproject/Makefile-variables.mk
        TP9/ej3/nbproject/Package-Debug.bash
        TP9/ej3/nbproject/Package-Release.bash
        TP9/ej3/nbproject/project.xml
        TP9/ej3/main.c
        TP9/ej3/palindromos.h
        TP9/ej3/test.c
        TP9/README.md
        LICENSE
        README.md)