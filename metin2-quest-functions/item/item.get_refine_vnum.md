# item.get_refine_vnum()
A função **item.get_refine_vnum** informa vnum предмета, который будет следующим, se улучшить &laquo;выделенный&raquo; предмет.

## Valores de retorno
### item_vnum
Tipo *number*. vnum следующего предмета из `player.item_proto` (поле `refined_vnu`m). Se предмет не был выделен ou se он не может быть улучшен, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).