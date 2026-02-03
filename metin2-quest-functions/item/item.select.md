# item.select()
Функция **item.select** &laquo;выделяет&raquo; предмет с определенным ID.

## Parâmetros da função
### item_id
Tipo *number*. **Parâmetro obrigatório**. Уникальный ID do item.

## Valores de retorno
### status
Tipo *boolean*. Результат выполнения функции. Se предмет был успешно выделен, então é retornado `true`. Se предмет выделить не удалось (se параметр não for um número ou предмет с заданным ID не был найден у игрока), então é retornado `false`.

## Notas
A função **não** pode ser chamada anonimamente.