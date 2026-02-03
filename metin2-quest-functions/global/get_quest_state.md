# get_quest_state()
A função **get_quest_state** informa ID стадии определенного квеста.

## Parâmetros da função
### quest_name
Tipo *string*. **Parâmetro obrigatório**. Nome da missão. Não deve especificar o nome do ficheiro da missão, mas sim como nomeou a missão na construção `quest ... begin`.

## Valores de retorno
### state_id
Tipo *number*. ID стадии квеста. Se функция была вызвана через [server_timer](../triggers/server_timer.md) ou se квеста с заданным именем não existe, então é retornado `0`. Se параметр [quest_name](#quest_name) не является строкой, então функция вообще ничего не retorna.

## Notas
A função **não** pode ser chamada anonimamente.

Неизвестно, по какому принципу получается ID стадии.