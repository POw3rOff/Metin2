# sys_err()
Функция **sys_err** записывает определенную ошибку в файл `syserr`.

## Parâmetros da função
### error_msg
Tipo *string*. **Parâmetro obrigatório**. Mensagem de erro.

## Notas
A função **não** pode ser chamada anonimamente.

O registo terá a seguinte forma: `QUEST: quest: {quest_name} player: {player_name} : {error_msg}`, onde `{quest_name}` &mdash; o nome da missão onde a função foi chamada; `{player_name}` &mdash; o nome do jogador que chamou a função; `{error_msg}` &mdash; o valor do parâmetro [error_msg](#error_msg).

Также игрок увидит в чате сообщение `QUEST_SYSERR {error_msg}`.

O ficheiro `syserr` está localizado na pasta de configuração dos canais. O registo será feito apenas num `syserr`; naquele que está na mesma pasta, que corresponde ao canal ou subcanal do jogador.