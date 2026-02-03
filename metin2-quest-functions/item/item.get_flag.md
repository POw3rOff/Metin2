# item.get_flag()
A função **item.get_flag** informa `flag` &laquo;выделенного&raquo; предмета.

## Valores de retorno
### flag
Tipo *number*. Valor da flag. Se o item não tiver sido &laquo;selecionado&raquo;, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

В отличие от функции [item.has_flag](../item/item.has_flag.md)(), которая проверяет наличие определенного флага, эта функция лишь retorna его значение. То есть é retornado então число, что было указано в `player.item_proto` в поле `flag`. Подробнее о флагах читайте в статье о функции [item.has_flag](../item/item.has_flag.md)().

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).