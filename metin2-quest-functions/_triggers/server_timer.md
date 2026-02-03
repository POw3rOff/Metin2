# server_timer
Триггер server_timer срабатывает после вызова функций [server_timer](../global/server_timer.md)() ou [server_loop_timer](../global/server_loop_timer.md)(). Единственный триггер, который исполняется от имени сервера, а не игрока, ou seja анонимно.

## Parâmetros
### timer_id
Tipo *number*. **Parâmetro obrigatório**. Идентификатор таймера.

## Notas
При вызове функции, создающей серверный таймер, создается переменная с именем таймера. Допусим, `server_timer("timer_test_name", 123)` создаст переменную `timer_test_name`, которая будет содержать идентификатор таймера. Самым правильным подходом будет передавать этот идентификатор в качестве первого параметра триггера, ou seja `when timer_test_name.server_timer begin`.

Серверный таймер умеет передавать аргументы через функцию [get_server_timer_arg](../global/get_server_timer_arg.md)().

Поскольку таймер исполняется от имени сервера, então использовать функции, направленные на игрока, он не может. Например, использование функция [pc.give_item2](../pc/pc.give_item2.md)() ou, por exemplo, [pc.get_name](../pc/pc.get_name.md)() невозможно.

В отличие от обычного таймера ([timer](../_triggers/timer.md)), этот таймер будет работать даже в том случае, se вызвавший его игрок находится в оффлайне.