# forked.issungzimapindex()
A função **forked.issungzimapindex** verifica se является ли локация с определенным индексом ареной для битвы империй.

## Parâmetros da função
### map_index
Tipo *number*. **Parâmetro obrigatório**. Índice do mapa.

## Valores de retorno
### is_valid_war_map
Tipo *boolean*. Является ли локация с индексом [map_index](#map_index) одной из арен для битвы империй ou нет.

## Notas
A função pode ser chamada anonimamente.

Суть в том, что арены для битвы империй выбираются случайно. Функция [forked.isforkedmapindex](../forked/forked.isforkedmapindex.md)() проверяет, является ли локация с определенным индексом той самой ареной, что используется в данный момент, а эта функция проверяет, может ли быть эта локация одной из арен.

O artigo pode conter imprecisões.