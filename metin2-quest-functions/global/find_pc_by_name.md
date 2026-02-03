# find_pc_by_name()
Функция **find_pc_by_name** ищет персонажа с заданным именем и informa его VID.

## Parâmetros da função
### player_name
Tipo *string*. **Parâmetro obrigatório**. Имя персонажа.

## Valores de retorno
### player_vid
Tipo *number*. VID персонажа. Se параметр **player_name** не является строкой ou se персонаж с заданным именем не был найден, então é retornado `0`.

## Notas
Não se sabe se esta função pode ser chamada anonimamente.

Поиск происходит только на том же канале, на котором была вызвана функция.