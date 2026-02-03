# item.get_rare_attribute()
A função **item.get_rare_attribute** informa содержимое ячейки добавленного 6-7 бонуса &laquo;выделенного&raquo; предмета.

## Parâmetros da função
### apply_rare_index
Tipo *number*. **Parâmetro obrigatório**. В таблице `player.item` есть поля `applytype0`, `applyvalue0`, `applytype1`, `applyvalue1`, ..., `applytype6` и `applyvalue6`, которые отвечают за добавленные на предмет бонусы. Поля `applytype5`, `applyvalue5`, `applytype6` и `applyvalue6` отвечают за 6-7 бонусы. В качестве этого параметра надо указать либо `0`, чтобы получить информацию о шестом бонусе (поля `applytype5` и `applyvalue5`), либо `1`, чтобы получить информацию о седьмом бонусе (поля `applytype6` и `applyvalue6`).

## Valores de retorno
### apply_rare_info
Tipo *mixed*. В случае, se предмет не был &laquo;выделен&raquo;, então nada é retornado, ou seja `nil`.

Se параметр não for um número ou se параметр меньше `0` ou больше `1`, então é retornado `0` <sup>number</sup>.

Se функция выполнилась без ошибок, então é retornado таблица, которая выглядит примерно так: `{applytype, applyvalue}`. `applytype` &mdash; это ID do bónus, а `applyvalue` &mdash; значение бонуса.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).