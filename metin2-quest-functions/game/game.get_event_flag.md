# game.get_event_flag()
A função **game.get_event_flag** informa значение эвентового (серверного) флага.

## Parâmetros da função
### flag_name
Tipo *string*. **Parâmetro obrigatório**. Имя флага.

## Valores de retorno
### value
Tipo *number*. Значение эвентового флага. Se параметр [flag_name](#flag_name) не является строкой, а также se флага с таким именем não existe, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.