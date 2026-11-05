1\. Qual será a saída do programa?

Vai mostrar os números de 1 até 5.

`1 2 3 4 5`

2\. Quantas vezes o laço será executado?

5 vezes, porque começa no 1 e termina no 5.

3\. O que aconteceria se retirássemos i++?

O programa entraria em um loop infinito, porque o valor de `i` nunca mudaria e ficaria imprimindo o número 1.

4\. Reescreva o código usando for.

```c
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
```

5\. Reescreva o código usando do while.

```c
int i = 1;

do {
    printf("%d ", i);
    i++;
} while (i <= 5);
```

