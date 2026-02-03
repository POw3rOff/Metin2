# forked.getpasspathbyempire()
A função **forked.getpasspathbyempire** informa путь до директории, в ao qual должны находиться файлы локации.

## Parâmetros da função
### empire_id
Tipo *number*. **Parâmetro obrigatório**. ID do império.

## Valores de retorno
### path
Tipo *string*. Путь до директории, в ao qual должна находиться локация. Путь выглядит примерно так: `{path}/map/{map_name}`, onde `{path}` &mdash; относительный путь от ядра до папки map, а `{map_name}` &mdash; имя локации. Se параметр [empire_id](#empire_id) имеет неверный ID do império, então é retornado uma string vazia.

## Notas
A função **não** pode ser chamada anonimamente.

Функция может быть полезна для отладки и поиска багов.