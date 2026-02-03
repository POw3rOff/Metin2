# item.get_count()
A função **item.get_count** informa количество предметов в &laquo;выделенной&raquo; пачке.

## Valores de retorno
### item_count
Tipo *number*. Количество предметов в пачке. Возврщается `0`, se предмет не был &laquo;выделен&raquo;.

## Notas
A função **não** pode ser chamada anonimamente.

Отличие этой функции от [pc.item_count](../pc/pc.item_count.md)() в том, что эта функция informa количество предметов лишь в &laquo;выделенной&raquo; пачке. То есть se игрок нажмет ПКМ по пачке из 123 предметов, а затем вызовет эту функцию через триггер [use](../_triggers/use.md), então функция вернет 123. А функция [pc.item_count](../pc/pc.item_count.md)() считает количество предметов во всем инвентаре.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).