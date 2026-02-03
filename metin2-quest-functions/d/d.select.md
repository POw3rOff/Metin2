# d.select()
Функция **d.select** выделяет подземелье, что позволяет исполнять в нём функции от имени сервера и от имени игроков, которые в этом подземелье не находятся.

## Parâmetros da função
### dungeon_id
Tipo *number*. **Parâmetro obrigatório**. ID único da masmorra. Se вызвать эту функцию, не задавая этот параметр, então выделение с подземелья будет снято.

## Valores de retorno
### dungeon_exists
Tipo *boolean*. Se existe uma masmorra com este ID ou não. `true`, se existir; `false`, se não existir ou se o parâmetro não foi definido [dungeon_id](#dungeon_id).

## Notas
A função pode ser chamada anonimamente.

Для проверки, сущесвует ли подземелье, используйте функцию [d.find](#d.find)().