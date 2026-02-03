# forked.getdeadcount()
Функция **forked.getdeadcount** informa, сколько раз может умереть игрок во время битвы империй.

## Valores de retorno
### dead_count
Tipo *number*. Число, означающее, сколько ещё раз может умереть игрок. Se функция была вызвана вне битвы империй, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas durante a batalha dos impérios (ver [forked](../forked)).