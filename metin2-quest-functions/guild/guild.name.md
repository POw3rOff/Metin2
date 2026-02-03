# guild.name()
A função **guild.name** informa o nome da guilda, à qual pertence um ID específico.

## Parâmetros da função
### guild_id
Tipo *number*. **Parâmetro obrigatório**. ID da guilda.

## Valores de retorno
### guild_name
Tipo *string*. Nome da guilda. Se гильдия с указанным ID não existe, então é retornado uma string vazia, ou seja `""`.

## Notas
A função pode ser chamada anonimamente.

Рекомендуется использовать функцию [guild.get_name](../guild/guild.get_name.md)().