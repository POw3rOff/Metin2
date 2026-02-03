# item.get_antiflag()
A função **item.get_antiflag** informa `antiflag` &laquo;выделенного&raquo; предмета.

## Valores de retorno
### antiflag
Tipo *number*. `antiflag` предмета. Se o item não tiver sido &laquo;selecionado&raquo;, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

В отличие от функции [item.has_antiflag](../item/item.has_antiflag.md)(), которая проверяет наличие определенного флага, эта функция лишь retorna его значение. То есть é retornado então число, что было указано в item_proto в поле antiflag. Подробнее об антифлагах читайте в статье о функции [item.has_antiflag](../item/item.has_antiflag.md)().

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).