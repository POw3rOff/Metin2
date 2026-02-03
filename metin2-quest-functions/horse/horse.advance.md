# horse.advance()
A função **horse.advance** aumenta уровень лошади на 1.

## Notas
A função **não** pode ser chamada anonimamente.

Уровень лошади не может быть больше `30`.

Эта функция эквивалентна следующей записи:

````lua
horse.set_level(horse.get_level() + 1)
````