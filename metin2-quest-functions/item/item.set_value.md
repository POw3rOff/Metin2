# item.set_value()
A função **item.set_value** define бонусы для вещи.

## Parâmetros da função
### attr_index
Tipo *number*. **Parâmetro obrigatório**. ID ячейки для бонуса от 0 до 6.

### attr_type
Tipo *number*. **Parâmetro obrigatório**. ID do bónus.

### attr_value
Tipo *number*. **Parâmetro obrigatório**. Valor do bónus. Por exemplo, `2000` para definir 2000 de Vida (ID 1).

## Valores de retorno
### status
Tipo *mixed*. Результат выполнения функции. В случае успешного выполнения функции ничего не é retornado, ou seja `nil`.

Se o item não tiver sido &laquo;selecionado&raquo; ou se один из трех параметров não for um número, então é retornado `0` <sup>number</sup>.

## Notas
A função **não** pode ser chamada anonimamente.

Не следует связывать эту функцию с [item.get_value](../item/item.get_value.md)(). Несмотря на então, что было бы логично, se бы они были похожи, они работают с совершенно разными данными.

Использовать эту функцию не рекомендуется. Лучше использовать [item.set_attribute](../item/item.set_attribute.md)().

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).