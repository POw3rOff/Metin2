# find_npc_by_vnum()
Функция **find_npc_by_vnum** ищет um monstro с заданным ID на локации, onde находится игрок, и informa его VID.

## Parâmetros da função
### mob_vnum
Tipo *number*. **Parâmetro obrigatório**. ID do monstro.

## Valores de retorno
### mob_vid
Tipo *number*. VID do monstro. Se праметр **mob_vnum** não foi definido ou não for um número, ou se монстр с заданным ID не был найден, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.