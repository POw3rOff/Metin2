# item.next_refine_vnum()
Функция item.get_refine_vnum() informa vnum предмета, который будет следующим, se улучшить um determinado предмет.

## Parâmetros da função
### item_vnum
Tipo *number*. **Parâmetro obrigatório**. vnum предмета, ID переточки которого необходимо узнать.

## Valores de retorno
### item_vnum
Tipo *number*. vnum следующего предмета из `player.item_proto` (поле `refined_vnum`). Se параметр não foi definido, se параметр não for um número ou se предмет не может быть улучшен, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.

Эта функция является почти копией функции [item.get_refine_vnum](../item/item.get_refine_vnum.md)() в той лишь разницей, что функция [item.get_refine_vnum](../item/item.get_refine_vnum.md)() работает только с &laquo;выделенными&raquo; предметами, а эта функция принимает vnum предмета в качестве параметра.