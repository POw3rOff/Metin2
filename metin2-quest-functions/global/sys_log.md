# sys_log()
Функция **sys_log** записывает определенную ошибку в файл `syserr`.

## Parâmetros da função
### is_test_server
Tipo *number*. **Parâmetro obrigatório**. Практическое применение этого параметра неизвестно. Se он будет равен `0`, então функция будет выполнена так, как и должна; se он будет равен `1` ou больше, então функция не будет выполнена, se сервер не находится в тестовом режиме.

### error_msg
Tipo *string*. **Parâmetro obrigatório**. Mensagem de erro.

## Notas
A função **não** pode ser chamada anonimamente.

O registo terá a seguinte forma: `QUEST: quest: {quest_name} player: {player_name} : {error_msg}`, onde `{quest_name}` &mdash; o nome da missão onde a função foi chamada; `{player_name}` &mdash; o nome do jogador que chamou a função; `{error_msg}` &mdash; o valor do parâmetro [error_msg](#error_msg).

Также игрок увидит в чате сообщение `QUEST_SYSERR {error_msg}`, se сервер находится в тестовом режиме &mdash; это единственное отличие этой функции от [sys_err](../global/sys_err.md)().

O ficheiro `syserr` está localizado na pasta de configuração dos canais. O registo será feito apenas num `syserr`; naquele que está na mesma pasta, que corresponde ao canal ou subcanal do jogador.