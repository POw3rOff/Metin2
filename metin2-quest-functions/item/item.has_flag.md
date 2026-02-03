# item.has_flag()
A função **item.has_flag** verifica se имеет ли &laquo;выделенный&raquo; предмет um determinado флаг.

## Parâmetros da função
### flag
Tipo *number*. **Parâmetro obrigatório**. Valor da flag.

## Valores de retorno
### has_flag
Tipo *number*. Имеет ли предмет um determinado флаг ou нет. `true`, se имеет; `false`, se не имеет, se предмет не был &laquo;выделен&raquo; ou se параметр não for um número.

## Notas
A função **não** pode ser chamada anonimamente.

Se точнее, então эта функция делает проверку по битовой маске. Существуют следующие коды флагов:

| Флаг | Nome da flag | Назначение |
| --- | --- | --- |
| 1 | ITEM_FLAG_REFINEABLE | Позволяет предмету перетачиваться |
| 2 | ITEM_FLAG_SAVE | неизвестно |
| 4 | ITEM_FLAG_STACKABLE | Позволяет складывать предметы в пачки |
| 8 | ITEM_FLAG_COUNT_PER_1GOLD | неизвестно |
| 16 | ITEM_FLAG_SLOW_QUERY | неизвестно |
| 32 | ITEM_FLAG_UNUSED01 | Этот флаг не используется сервером |
| 64 | ITEM_FLAG_UNIQUE | неизвестно |
| 128 | ITEM_FLAG_MAKECOUNT | неизвестно |
| 256 | ITEM_FLAG_IRREMOVABLE | Предположительно, этот флаг запрещает игроку снимать предмет после того, как он был надет, как, например, сделано с некоторыми перчатками вора и кольцами опыта &mdash; они будут надеты до тех пор, пока не выйдет время |
| 512 | ITEM_FLAG_CONFIRM_WHEN_USE | Предположительно, при использовании предмета у игрока спросят, действительно ли он хочет использовать сей предмет |
| 1024 | ITEM_FLAG_QUEST_USE | неизвестно |
| 2048 | ITEM_FLAG_QUEST_USE_MULTIPLE | неизвестно |
| 4096 | ITEM_FLAG_QUEST_GIVE | неизвестно |
| 8192 | ITEM_FLAG_LOG | В `syslog` при использовании и выбрасывании предмета с этим флагом будут появляться логи |
| 16384 | ITEM_FLAG_APPLICABLE | неизвестно |


Битовая маска получается путем сложения всех необходимых кодов. Например, маска `5` означает, что предмет может перетачиваться (`1`) и складываться в пачки (`4`), итого 1 + 4 = 5. Каждая битовая маска уникальна, поэтому по маске можно безошибочно определить, имеет ли она um determinado флаг ou нет. Например, se параметр `flag` у предмета равен `5`, então вызвав функцию `item.has_flag(4)` можно безошибочно узнать, складывается ли предмет в пачки ou нет.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).