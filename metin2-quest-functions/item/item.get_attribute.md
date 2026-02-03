# item.get_attribute()
A função **item.get_attribute** informa содержимое ячейки добавленного бонуса &laquo;выделенного&raquo; предмета.

## Parâmetros da função
### apply_index
Tipo *number*. **Parâmetro obrigatório**. В таблице `player.item` есть поля `applytype0`, `applyvalue0`, `applytype1`, `applyvalue1`, ..., `applytype6` и `applyvalue6`, которые отвечают за добавленные на предмет бонусы. В качестве этого параметра надо указать число, идущее после названия необходимых полей, которые надо получить. Допустим, se вы хотите получить информацию о первой паре полей (`applytype0` и `applyvalue0`), então в качестве параметра надо указать `0`. Эта функция не работает с 6-7 бонусами, поэтому указывать можно только числа от `0` до `4`.

## Valores de retorno
### apply_info
Tipo *mixed*. В случае, se предмет не был &laquo;выделен&raquo;, então nada é retornado, ou seja `nil`.

Se параметр não for um número ou se параметр меньше `0` ou больше `4`, então é retornado `0` <sup>number</sup>.

Se функция выполнилась без ошибок, então é retornado таблица, которая выглядит примерно так: `{applytype, applyvalue}`. `applytype` &mdash; это ID do bónus, а `applyvalue` &mdash; значение бонуса.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).