# item.get_socket()
A função **item.get_socket** informa содержимое определенного сокета &laquo;выделенного&raquo; предмета.

## Parâmetros da função
### socket
Tipo *number*. **Parâmetro obrigatório**. ID сокета.

## Valores de retorno
### socket_value
Tipo *number*. Значение сокета. Это значение может быть чем угодно, но обычно se использовать эту функцию на оружие ou броне, então будет возвращен ID вставленного в указанную ячейку камня; se на временных предметах вроде туфлей ветра, então оставшееся время действия предмета em segundos; se на кирке, então количество очков и так далее. Se o item não tiver sido &laquo;selecionado&raquo;, se параметр [socket](#socket) não for um número ou se параметр меньше ou больше максимально-por exemploого значения (обычно в базе данных 6 сокетов, ou seja значение может быть только от `0` до `5`), então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).