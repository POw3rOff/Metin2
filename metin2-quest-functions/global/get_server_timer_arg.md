# get_server_timer_arg()
A função **get_server_timer_arg** informa аргумент, который хранит в себе серверный таймер.

## Valores de retorno
### argument
Tipo *number*. Аргумент, который содержится в таймере. Se в серверном таймере não foi definido аргумент ou se функция была вызвана вне триггера [server_timer](../_triggers/server_timer.md), então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.

Функцию следует использовать внутри триггера [server_timer](../_triggers/server_timer.md).