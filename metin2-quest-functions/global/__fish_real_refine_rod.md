# __fish_real_refine_rod()
Функция **__fish_real_refine_rod** улучшает удочку.

## Parâmetros da função
### cell
Tipo *number*. **Parâmetro obrigatório**. Ячейка, в ao qual лежит удочка.

## Valores de retorno
### status
Tipo *number*. Удалось ли улучшение ou нет. `1`, se улучшение удочки прошло успешно; `0`, se улучшение удочки не удалось; `2`, se во время выполнения функции произошл одна из ошибок: функция была вызвана от имени сервера; второй параметр указывал на ячейку, onde нет удouща; se по каким-então причинам не удалось создать новую удочку (например, в базе данных нет удочки с определенным ID).

## Notas
A função **não** pode ser chamada anonimamente.

Вероятность успешного улучшения удочки высчитывается во формуле `100 - value3`, onde `value3` &mdash; это значение поля `value3` в таблице `player.item_proto` у удочки, которое можно получить функцией [item.get_value](../item/item.get_value.md)().

Vnum улучшенной удочки находится в поле `refined_vnum` в таблице `player.item_proto`. Удочка с этим vnum будет выдана взамен.