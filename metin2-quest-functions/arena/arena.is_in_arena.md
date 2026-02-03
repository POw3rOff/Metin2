# arena.is_in_arena()
A função **arena.is_in_arena** verifica se находится ли um determinado игрок на арене.

## Parâmetros da função
### player_id
Tipo *number*. **Parâmetro obrigatório**. ID игрока.

## Valores de retorno
### status
Tipo *number*. Возвращаемое значение равно `1`, se игрок является дуэлянтом и находится на арене. В ином случае é retornado `0`. Возможно, что это баг, но `1` также é retornado в том случае, se игрок с таким ID не был найден.

## Notas
Não se sabe se esta função pode ser chamada anonimamente.