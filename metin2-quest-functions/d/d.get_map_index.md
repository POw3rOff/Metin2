# d.get_map_index()
A função **d.get_map_index** informa индекс локации, в ao qual создано подземелье.

## Valores de retorno
### map_index
Tipo *number*. ID локации, в ao qual создано подземелье. Se функция была вызвана вне подземелья, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.

В отличие от этой функции, функция [pc.get_map_index](../pc/pc.get_map_index.md)() retorna уникальный ID подземелья.

A função funciona apenas em masmorras.