# item.add_attribute()
A função **item.add_attribute** adiciona случайный бонус в &laquo;выделенный&raquo; предмет.

## Valores de retorno
### status
Tipo *mixed*. Se o item não tiver sido &laquo;selecionado&raquo;, então nada é retornado, ou seja `nil`.

`true` <sup>boolean</sup>, se бонус был успешно добавлен; `false` <sup>boolean</sup>, se была совершена попытка добавить бонус в костюм ou добавить больше чем 5 бонусов.

## Notas
A função **não** pode ser chamada anonimamente.

Бонусы вешаются аналогично предмету, вешающему бонусы. То есть значения берутся из таблицы `player.item_attr`.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).