# item.get_id()
A função **item.get_id** informa уникальный ID do item.

## Valores de retorno
### item_id
Tipo *number*. Уникальный ID do item. Se o item não tiver sido &laquo;selecionado&raquo;, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

В таблице `player.item` хранятся все предметы, которые есть на сервере, каждый из которых имеет уникальный ID. Вот эта функция этот ID и retorna.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).