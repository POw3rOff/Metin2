# item.get_value()
A função **item.get_value** informa значение определенного `value` (из `player.item_proto`) &laquo;выделенного&raquo; предмета.

## Parâmetros da função
### value_id
Tipo *number*. **Parâmetro obrigatório**. ID поля `value` из `player.item_proto`. Там есть 6 полей: `value0`, `value1`, ..., `value5`. Необходимо в этом параметре указать число от `0` до `5`.

## Valores de retorno
### value_value
Tipo *number*. То, что находится в указанном поле value в `player.item_proto`. Se o item não tiver sido &laquo;selecionado&raquo;, se параметр не является чилом ou se параметр больше `5` ou меньше `0`, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).