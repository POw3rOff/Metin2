# item.get_vnum()
A função **item.get_vnum** informa vnum (ID из `player.item_proto`) &laquo;выделенного&raquo; предмета.

## Valores de retorno
### item_vnum
Tipo *number*. ID do item из `player.item_proto`. Se предмет не был выделен, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).