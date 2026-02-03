# item.add_rare_attribute()
A função **item.add_rare_attribute** adiciona случайный 6-7 бонус в &laquo;выделенный&raquo; предмет.

## Valores de retorno
### status
Tipo *mixed*. Se o item não tiver sido &laquo;selecionado&raquo;, então nada é retornado, ou seja `nil`.

Se была совершена попытка добавить бонус в костюм ou se в предмете более два ou более 6-7 бонусов, então é retornado `false` <sup>boolean</sup>; в случае успешного добавления бонуса é retornado `true` <sup>boolean</sup>.

## Notas
A função **não** pode ser chamada anonimamente.

Бонусы вешаются аналогично предмету, вешающему бонусы. То есть значения берутся из таблицы `player.item_attr_rare`.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).