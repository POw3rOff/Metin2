# item.set_rare_attribute()
A função **item.set_rare_attribute** adiciona um determinado 6-7 бонус в &laquo;выделенный&raquo; предмет.

## Parâmetros da função
### attr_rare_index
Tipo *number*. **Parâmetro obrigatório**. ID ячейки для бонуса от 0 до 1.

### attr_rare_type
Tipo *number*. **Parâmetro obrigatório**. ID do bónus.

### attr_rare_value
Tipo *number*. **Parâmetro obrigatório**. Valor do bónus. Por exemplo, `2000` para definir 2000 de Vida (ID 1).

## Valores de retorno
### status
Tipo *mixed*. Se o item não tiver sido &laquo;selecionado&raquo;, então nada é retornado, т.е. `nil`.

Se бонус был успешно добавлен, então é retornado `true` <sup>boolean</sup>. Se была попытка добавить бонус в костюм, se один из параметров não for um número, se первый параметр меньше `0` ou больше `1`, se второй параметр содержит в себе ID несуществующего бонуса, se на предмет пытаются добавить уже имеющийся на нем добавленный бонус, ou se третий параметр больше `32767` ou меньше `1`, então é retornado `false`.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).