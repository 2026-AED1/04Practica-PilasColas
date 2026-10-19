import sys


def solucion(valores: list[int]) -> list[int]:
    # TODO
    raise NotImplementedError


def main() -> None:
    datos = list(map(int, sys.stdin.buffer.read().split()))
    n = datos[0]
    valores = datos[1:n + 1]
    resultado = solucion(valores)
    sys.stdout.write(" ".join(map(str, resultado)) + "\nO(?) O(?)\n")
    # TODO: sustituye los interrogantes por la complejidad calculada.


if __name__ == "__main__":
    main()
