# __get_empire_priv_string()
A função **__get_empire_priv_string** informa в виде строки количество квоты у определенной империи.

## Parâmetros da função
### empire_id
Tipo *number*. **Parâmetro obrigatório**. ID do império. Se especificar `0`, será exibida apenas a informação sobre a quota, que se aplica a todos os impérios de uma vez.

## Valores de retorno
### priv_value
Tipo *string*. Строка с описанием всех квот, которые принадлежат империи. Se у империи нет ни одной квоты ou se был задан неверный ID do império, então é retornado `None!`. Обратите внимание на então, что пусть `None!` и состоит из 5 символов, но функция [string.len](../string/string.len.md)() почему-então говорит, что их там 6.

## Notas
A função pode ser chamada anonimamente.

Не рекомендуется использовать эту функцию. Вместо нее лучше использовать [__get_empire_priv](../global/__get_empire_priv.md)().