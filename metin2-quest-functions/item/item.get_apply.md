# item.get_apply()
A função **item.get_apply** informa содержимое ячейки встроенного бонуса &laquo;выделенного&raquo; предмета.

## Parâmetros da função
### apply_index
Tipo *number*. **Parâmetro obrigatório**. В `player.item_proto` есть поля `applytype0`, `applyvalue0`, `applytype1`, `applyvalue1`, `applytype2` и `applyvalue2`. В качестве этого параметра надо указать число, идущее после названия необходимых полей, которые надо получить. Допустим, se вы хотите получить информацию о первой паре полей (`applytype0` и `applyvalue0`), então в качестве параметра надо указать `0`.

## Valores de retorno
### apply_data
Tipo *mixed*. В случае, se предмет не был &laquo;выделен&raquo;, então nada é retornado, ou seja `nil`.

Se параметр não for um número ou se параметр меньше `0` ou больше `2`, então é retornado `0` <sup>number</sup>.

Se функция выполнилась без ошибок, então é retornado таблица, которая выглядит примерно так:

````lua
{applytype, applyvalue}
````

`applytype` &mdash; это ID do bónus, а `applyvalue` &mdash; значение бонуса.

## Notas
A função **não** pode ser chamada anonimamente.

Встроенный бонус &mdash; это тот, что задается через `player.item_proto`.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).