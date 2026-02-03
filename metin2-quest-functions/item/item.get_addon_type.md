# item.get_addon_type()
A função **item.get_addon_type** informa `addon_type` &laquo;выделенного&raquo; предмета.

## Valores de retorno
### addon_type
Tipo *mixed*. Se o item não tiver sido &laquo;selecionado&raquo;, então nada é retornado, ou seja `nil`.

Se функция выполнилась без ошибок, então é retornado `addon_type` <sup>number</sup> предмета (значение из `player.item_proto`).

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).