# building.has_land()
Функция **building.has_land** informa, имеет ли гильдия землю ou нет.

## Parâmetros da função
### guild_id
Tipo *number*. **Parâmetro obrigatório**. ID da guilda.

## Valores de retorno
### has_land
Tipo *boolean*. Значение будет равно `true`, se у гильдии есть земля, и `false`, se земли нет. Также `true` é retornado в случае, se параметр [guild_id](#guild_id) não for um número (возможно, это баг).

## Notas
A função pode ser chamada anonimamente.