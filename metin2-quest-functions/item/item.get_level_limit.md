# item.get_level_limit()
A função **item.get_level_limit** informa минимальный уровень, необходимый для использования &laquo;выделенного&raquo; предмета.

## Valores de retorno
### level_limit
Tipo *mixed*. Se o item não tiver sido &laquo;selecionado&raquo; ou se не является оружием (`type` 1) ou броней (`type` 2), então nada é retornado, ou seja `nil`.

Возвращается минимальный уровень <sup>number</sup>, необходимый для использования предмета. 

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).