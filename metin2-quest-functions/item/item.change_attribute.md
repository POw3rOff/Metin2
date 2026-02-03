# item.change_attribute()
Функция **item.change_attribute** меняет бонусы на &laquo;выделенном&raquo; предмете.

## Valores de retorno
### status
Tipo *mixed*. Se o item não tiver sido &laquo;selecionado&raquo;, então nada é retornado, ou seja `nil`.

Se бонусы были успешно изменены, então é retornado `true` <sup>boolean</sup>; se была соверешна попытка изменить бонусы на костюме ou se на предмете не было бонусов, então é retornado `false` <sup>boolean</sup>.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).