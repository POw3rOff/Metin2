# d.find()
A função **d.find** verifica se существует ли подземелье с заданным уникальным ID ou нет.

## Parâmetros da função
### dungeon_id
Tipo *number*. **Parâmetro obrigatório**. ID único da masmorra.

## Valores de retorno
### dungeon_exists
Tipo *boolean*. Se existe uma masmorra com este ID ou não. `true`, se existir; `false`, se não existir ou se o parâmetro não foi definido [dungeon_id](#dungeon_id).

## Notas
A função pode ser chamada anonimamente.