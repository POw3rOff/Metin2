# item.equip()
Функция **item.equip** надевает на игрока &laquo;выделенный&raquo; предмет.

## Parâmetros da função
### wear_cell
Tipo *number*. **Parâmetro obrigatório**. ID ячейки в окне снаряжения, куда будет надет предмет. Число от `0` до `31`.

## Valores de retorno
### status
Tipo *mixed*. Se функция была вызван от имени сервера ou se предмет не был &laquo;выделен&raquo;, então nada é retornado, ou seja `nil`.

Se параметр não for um número, se параметр меньше `0` ou больше `31`, então é retornado `false` <sup>boolean</sup>; se предмет был успешно надет, então é retornado `true` <sup>boolean</sup>.

## Notas
A função **não** pode ser chamada anonimamente.

Предположительно, надеть можно вообще любой предмет.

Se в указанной ячейке уже есть какой-então предмет, então он будет снят и положен в инвентарь.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).