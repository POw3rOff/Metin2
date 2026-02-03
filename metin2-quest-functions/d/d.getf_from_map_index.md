# d.getf_from_map_index()
Функция **d.getf_from_map_index** позволяет получить значение флага подземелья по его уникальному ID.

## Parâmetros da função
### flag_name
Tipo *string*. **Parâmetro obrigatório**. Nome da flag.

### dungeon_id
Tipo *number*. **Parâmetro obrigatório**. ID único da masmorra.

## Valores de retorno
### value
Tipo *number*. Valor da flag. Se флаг não foi definido ранее, а также se подземелье с указанным в параметре [dungeon_id](#dungeon_id) не было найдено, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.