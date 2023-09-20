# Todos los ejercicios del cursus

## 1 Libft

### Crear libreria

* Paso 1: Crear 3 tipos de archivos 
    * codigo fuente (.c)
    * cabezera (.h)
    * Makefile

* Paso 2: compilar todo con:
```make```

### Agregar libreria a un programa

* Para poder usar la libreria creada anteriormente, se tiene que compilar el programa agregando la libreria Libft.

``` gcc -o mi_test_vs test_ft_vs_isalpha.c -L. -lft```

* explicacion: Esta línea de código compila el archivo de código fuente test_ft_vs_isalpha.c con la opción -o para generar un archivo ejecutable llamado mi_test_vs. La opción -L especifica la ubicación del archivo de biblioteca estática necesario para la compilación, mientras que la opción -l se refiere al nombre de la biblioteca. En este caso, el nombre de la biblioteca es ft. Esta línea de código creará un ejecutable que puede usarse para probar el comportamiento de isalpha() contra ft_isalpha().



## 2 
