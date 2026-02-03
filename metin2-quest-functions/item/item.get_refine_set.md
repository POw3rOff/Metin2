# item.get_refine_set()
A função **item.get_refine_set** informa `refine_set` &laquo;выделенного&raquo; предмета.

## Valores de retorno
### refine_set
Tipo *number*. Значение поля `refine_set` из `player.item_proto`. Se o item não tiver sido &laquo;selecionado&raquo;, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).