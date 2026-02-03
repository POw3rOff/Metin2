# find_pc_cond()
Функция **find_pc_cond** ищет на локации, onde находится que chamou a função игрок, случайного персонажа, который подходит под заданные критерии.

## Parâmetros da função
### level_min
Tipo *number*. **Parâmetro obrigatório**. Минимальный уровень.

### level_max
Tipo *number*. **Parâmetro obrigatório**. Максимальный уровень.

### job_id
Tipo *number*. **Parâmetro obrigatório**. ID класса. `0` &mdash; воин, `1` &mdash; ниндзя, `2` &mdash; сура, `3` &mdash; шаман, `4` &mdash; ликан.

## Valores de retorno
### player_vid
Tipo *number*. VID подходящего под критерии персонажа. Se ни один персонаж не был найден, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

VID игрока, вызвавшего функцию, не будет назван, даже se он подходит под критерии.

Поиск происходит только на том же канале, onde находится игрок, среди игроков, которые находятся в сети.