from collections import deque


def equilibrados(texto: str) -> bool:
    # TODO
    raise NotImplementedError


def procesar_turnos(ordenes: list[tuple[str, str]]) -> list[str]:
    # TODO
    raise NotImplementedError


def probar_ejercicios() -> None:
    casos_parentesis = [
        ('', True),
        ('texto sin símbolos', True),
        ('a*(b+[c])', True),
        ('{[()]}', True),
        ('([)]', False),
        ('((', False),
        (']', False),
        ('(]', False),
    ]
    for texto, esperado in casos_parentesis:
        obtenido = equilibrados(texto)
        assert obtenido == esperado, (
            f'equilibrados({texto!r}): esperado {esperado}, obtenido {obtenido}'
        )

    casos_turnos = [
        ([], []),
        ([('siguiente', ''), ('atiende', '')], ['VACIA', 'VACIA']),
        ([('llega', 'Ana'), ('llega', 'Luis'), ('siguiente', ''),
          ('atiende', ''), ('atiende', ''), ('atiende', '')],
         ['Ana', 'Ana', 'Luis', 'VACIA']),
        ([('llega', 'Ana'), ('llega', 'Luis'), ('siguiente', ''),
          ('llega', 'Eva'), ('atiende', ''), ('siguiente', ''),
          ('atiende', ''), ('llega', 'Paco'), ('atiende', ''),
          ('atiende', ''), ('atiende', '')],
         ['Ana', 'Ana', 'Luis', 'Luis', 'Eva', 'Paco', 'VACIA']),
    ]
    for ordenes, esperado in casos_turnos:
        obtenido = procesar_turnos(ordenes)
        assert obtenido == esperado, (
            f'procesar_turnos({ordenes!r}): esperado {esperado}, obtenido {obtenido}'
        )
    print('12 casos superados')


if __name__ == '__main__':
    probar_ejercicios()
