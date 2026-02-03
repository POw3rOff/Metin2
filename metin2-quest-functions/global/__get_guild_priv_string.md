# __get_guild_priv_string()
A função **__get_guild_priv_string** informa в виде строки количество квоты у определенной гильдии.

## Parâmetros da função
### guild_id
Tipo *number*. **Parâmetro obrigatório**. ID da guilda.

## Valores de retorno
### priv_value
Tipo *string*. Строка с описанием всех квот, которые принадлежат гильдии. Se у гильдии нет ни одной квоты, então é retornado `None!`. Обратите внимание на então, что пусть `None!` и состоит из 5 символов, но функция [string.len](../string/string.len.md)() почему-então говорит, что их там 6.

## Notas
A função pode ser chamada anonimamente.

Не рекомендуется использовать эту функцию. Вместо нее лучше использовать [__get_guild_priv](../global/__get_guild_priv.md)().