# item.get_level()
A função **item.get_level** informa уровень заточки &laquo;выделенного&raquo; предмета.

## Valores de retorno
### item_refine_level
Tipo *number*. Уровень заточки предмета. Данные берутся из `player.item_proto` на основе имени предмета. Неизвестно, из какого именно поля для имени берутся данные (их в `player.item_proto` два). Se предмет не был выделен ou se он не имеет уровень заточки, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Эта функция не retorna минимальный уровень, необходимый для использования этого предмета. Она retorna число, находящееся после знака &laquo;+&raquo; в названии предмета. Например, для предмета &laquo;Ядовитый меч +7&raquo; эта функция вернет `7`.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).