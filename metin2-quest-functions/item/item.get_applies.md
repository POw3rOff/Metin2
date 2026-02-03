# item.get_applies()
A função **item.get_applies** informa все встроенные в &laquo;выделенный&raquo; предмет бонусы.

## Valores de retorno
### applies
Tipo *mixed*. В случае, se предмет не был &laquo;выделен&raquo;, então nada é retornado, ou seja `nil`.

Se функция выполнилась без ошибок, então é retornado таблица, которая выглядит вот так:

````lua
{
	{applytype0, applyvalue0},
	{applytype1, applyvalue1},
	{applytype2, applyvalue2}
}
````

Все перечисленные данные в таблице соответствуют тому, что указано в `player.item_proto`.

## Notas
A função **não** pode ser chamada anonimamente.

Встроенный бонус &mdash; это тот, что задается через `player.item_proto`.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).