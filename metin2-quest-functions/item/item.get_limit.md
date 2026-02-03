# item.get_limit()
A função **item.get_limit** informa требования, необходимые для использования предмета.

## Parâmetros da função
### limit_index
Tipo *number*. **Parâmetro obrigatório**. В `player.item_proto` есть поля `limittype0`, `limitvalue0`, `limittype1` и `limitvalue1`. В качестве этого параметра надо указать число, идущее после названия необходимых полей, которые надо получить. Допустим, se вы хотите получить информацию о первой паре полей (`limittype0` и `limitvalue0`), então в качестве параметра надо указать `0`.

## Valores de retorno
### limits
Tipo *mixed*. В случае, se предмет не был &laquo;выделен&raquo;, então nada é retornado, ou seja `nil`.

Se параметр não for um número ou se параметр меньше `0` ou больше `1`, então é retornado `0` <sup>number</sup>.

Se функция выполнилась без ошибок, então é retornado таблица, которая выглядит примерно так: `{limittype, limitvalue}`. `limittype` &mdash; это тип ограничения, а `limitvalue` &mdash; значение ограничения.

## Notas
A função **não** pode ser chamada anonimamente.

Существуют следующие типы ограничений:

| limittype | Название | Назначение |
| --- | --- | --- |
| 0 | LIMIT_NONE | Нет ограничений |
| 1 | LIMIT_LEVEL | Ограничение по минимальному уровню |
| 2 | LIMIT_STR | Ограничение по минимальному количеству силы |
| 3 | LIMIT_DEX | Ограничение по минимальному количеству подвижности |
| 4 | LIMIT_INT | Ограничение по минимальному количеству интеллекта |
| 5 | LIMIT_CON | Ограничение по минимальному количеству здоровья (не путать с HP) |
| 6 | LIMIT_PCBANG | неизвестно |
| 7 | LIMIT_REAL_TIME | неизвестно |
| 8 | LIMIT_REAL_TIME_START_FIRST_USE | неизвестно |
| 9 | LIMIT_TIMER_BASED_ON_WEAR | неизвестно |
| 10 | LIMIT_MAX_NUM | неизвестно |

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).