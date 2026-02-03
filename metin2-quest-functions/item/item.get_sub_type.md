# item.get_sub_type()
A função **item.get_sub_type** informa subtype &laquo;выделенного&raquo; предмета.

## Valores de retorno
### item_subtype
Tipo *number*. subtype &laquo;выделенного&raquo; предмета. Se o item não tiver sido &laquo;selecionado&raquo;, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

`subtype`, что логично, является чем-então вроде подгруппы для каждого `type`. Например, для `type`, который равен `12` (рыба), существуют значения `subtype`, которые определяют, живая (`0`) это рыба ou мертвая (`1`). Их слишком много и описаны в этой статье они не будут.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).