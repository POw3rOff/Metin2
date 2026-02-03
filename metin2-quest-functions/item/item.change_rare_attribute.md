# item.change_rare_attribute()
Функция **item.change_rare_attribute** меняет 6-7 бонусы на &laquo;выделенном&raquo; предмете.

## Valores de retorno
### status
Tipo *mixed*. Se o item não tiver sido &laquo;selecionado&raquo;, então nada é retornado, ou seja `nil`.

Se была совершена попытка изменить бонусы на костюме ou se на предмете нет 6-7 бонусов, então é retornado `false` <sup>boolean</sup>. В случае успешного изменения бонусов é retornado `true` <sup>boolean</sup>.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).