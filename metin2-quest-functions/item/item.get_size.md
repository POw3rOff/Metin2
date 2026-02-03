# item.get_size()
A função **item.get_size** informa количество занимаемых &laquo;выделенным&raquo; предметом ячеек.

## Valores de retorno
### item_size
Tipo *number*. Количество ячеек по вертикали, занимаемых предметом в инвентаре. Se o item não tiver sido &laquo;selecionado&raquo;, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).