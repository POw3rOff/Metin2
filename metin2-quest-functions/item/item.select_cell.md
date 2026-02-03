# item.select_cell()
Функция **item.select_cell** &laquo;выделяет&raquo; предмет, находящийся в заданной ячейке.

## Parâmetros da função
### cell_id
Tipo *number*. **Parâmetro obrigatório**. ID ячейки, в ao qual лежит предмет, который следует &laquo;выделить&raquo;.

## Valores de retorno
### status
Tipo *number*. Результат выполнения функции. `true`, se предмет был успешно выделен; `false`, se предмет выделить не удалось, потому что параметр [cell_id](#cell_id) não for um número ou потому что предмет в указанной ячейке отсутствует.

## Notas
A função **não** pode ser chamada anonimamente.